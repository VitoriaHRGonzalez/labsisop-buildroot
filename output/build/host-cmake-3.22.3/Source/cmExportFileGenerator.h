/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#pragma once

#include "cmConfigure.h" // IWYU pragma: keep

#include <iosfwd>
#include <map>
#include <set>
#include <string>
#include <vector>

#include "cmGeneratorExpression.h"
#include "cmStateTypes.h"
#include "cmVersion.h"
#include "cmVersionConfig.h"

class cmGeneratorTarget;
class cmTargetExport;

#define STRINGIFY_HELPER(X) #X
#define STRINGIFY(X) STRINGIFY_HELPER(X)

#define DEVEL_CMAKE_VERSION(major, minor)                                     \
  (CMake_VERSION_ENCODE(major, minor, 0) >                                    \
       CMake_VERSION_ENCODE(CMake_VERSION_MAJOR, CMake_VERSION_MINOR, 0)      \
     ? STRINGIFY(CMake_VERSION_MAJOR) "." STRINGIFY(                          \
         CMake_VERSION_MINOR) "." STRINGIFY(CMake_VERSION_PATCH)              \
     : #major "." #minor ".0")

/** \class cmExportFileGenerator
 * \brief Generate a file exporting targets from a build or install tree.
 *
 * cmExportFileGenerator is the superclass for
 * cmExportBuildFileGenerator and cmExportInstallFileGenerator.  It
 * contains common code generation routines for the two kinds of
 * export implementations.
 */
class cmExportFileGenerator
{
public:
  cmExportFileGenerator();
  virtual ~cmExportFileGenerator() = default;

  /** Set the full path to the export file to generate.  */
  void SetExportFile(const char* mainFile);
  const std::string& GetMainExportFileName() const;

  /** Set the namespace in which to place exported target names.  */
  void SetNamespace(const std::string& ns) { this->Namespace = ns; }
  std::string GetNamespace() const { return this->Namespace; }

  void SetExportOld(bool exportOld) { this->ExportOld = exportOld; }

  /** Add a configuration to be exported.  */
  void AddConfiguration(const std::string& config);

  /** Actually generate the export file.  Returns whether there was an
      error.  */
  bool GenerateImportFile();

protected:
  using ImportPropertyMap = std::map<std::string, std::string>;

  // Generate per-configuration target information to the given output
  // stream.
  void GenerateImportConfig(std::ostream& os, const std::string& config,
                            std::vector<std::string>& missingTargets);

  // Methods to implement export file code generation.
  virtual void GeneratePolicyHeaderCode(std::ostream& os);
  virtual void GeneratePolicyFooterCode(std::ostream& os);
  virtual void GenerateImportHeaderCode(std::ostream& os,
                                        const std::string& config = "");
  virtual void GenerateImportFooterCode(std::ostream& os);
  void GenerateImportVersionCode(std::ostream& os);
  virtual void GenerateImportTargetCode(std::ostream& os,
                                        cmGeneratorTarget const* target,
                                        cmStateEnums::TargetType targetType);
  virtual void GenerateImportPropertyCode(std::ostream& os,
                                          const std::string& config,
                                          cmGeneratorTarget const* target,
                                          ImportPropertyMap const& properties);
  virtual void GenerateImportedFileChecksCode(
    std::ostream& os, cmGeneratorTarget* target,
    ImportPropertyMap const& properties,
    const std::set<std::string>& importedLocations);
  virtual void GenerateImportedFileCheckLoop(std::ostream& os);
  virtual void GenerateMissingTargetsCheckCode(
    std::ostream& os, const std::vector<std::string>& missingTargets);

  virtual void GenerateExpectedTargetsCode(std::ostream& os,
                                           const std::string& expectedTargets);

  // Collect properties with detailed information about targets beyond
  // their location on disk.
  void SetImportDetailProperties(const std::string& config,
                                 std::string const& suffix,
                                 cmGeneratorTarget* target,
                                 ImportPropertyMap& properties,
                                 std::vector<std::string>& missingTargets);

  enum class ImportLinkPropertyTargetNames
  {
    Yes,
    No,
  };
  template <typename T>
  void SetImportLinkProperty(std::string const& suffix,
                             cmGeneratorTarget const* target,
                             const std::string& propName,
                             std::vector<T> const& entries,
                             ImportPropertyMap& properties,
                             std::vector<std::string>& missingTargets,
                             ImportLinkPropertyTargetNames targetNames);

  /** Each subclass knows how to generate its kind of export file.  */
  virtual bool GenerateMainFile(std::ostream& os) = 0;

  /** Each subclass knows where the target files are located.  */
  virtual void GenerateImportTargetsConfig(
    std::ostream& os, const std::string& config, std::string const& suffix,
    std::vector<std::string>& missingTargets) = 0;

  /** Each subclass knows how to deal with a target that is  missing from an
   *  export set.  */
  virtual void HandleMissingTarget(std::string& link_libs,
                                   std::vector<std::string>& missingTargets,
                                   cmGeneratorTarget const* depender,
                                   cmGeneratorTarget* dependee) = 0;
  void PopulateInterfaceProperty(const std::string&,
                                 cmGeneratorTarget const* target,
                                 cmGeneratorExpression::PreprocessContext,
                                 ImportPropertyMap& properties,
                                 std::vector<std::string>& missingTargets);
  bool PopulateInterfaceLinkLibrariesProperty(
    cmGeneratorTarget const* target, cmGeneratorExpression::PreprocessContext,
    ImportPropertyMap& properties, std::vector<std::string>& missingTargets);
  void PopulateInterfaceProperty(const std::string& propName,
                                 cmGeneratorTarget const* target,
                                 ImportPropertyMap& properties);
  void PopulateCompatibleInterfaceProperties(cmGeneratorTarget const* target,
                                             ImportPropertyMap& properties);
  virtual void GenerateInterfaceProperties(
    cmGeneratorTarget const* target, std::ostream& os,
    const ImportPropertyMap& properties);
  void PopulateIncludeDirectoriesInterface(
    cmGeneratorTarget const* target,
    cmGeneratorExpression::PreprocessContext preprocessRule,
    ImportPropertyMap& properties, std::vector<std::string>& missingTargets,
    cmTargetExport const& te);
  void PopulateSourcesInterface(
    cmGeneratorTarget const* target,
    cmGeneratorExpression::PreprocessContext preprocessRule,
    ImportPropertyMap& properties, std::vector<std::string>& missingTargets);
  void PopulateLinkDirectoriesInterface(
    cmGeneratorTarget const* target,
    cmGeneratorExpression::PreprocessContext preprocessRule,
    ImportPropertyMap& properties, std::vector<std::string>& missingTargets);
  void PopulateLinkDependsInterface(
    cmGeneratorTarget const* target,
    cmGeneratorExpression::PreprocessContext preprocessRule,
    ImportPropertyMap& properties, std::vector<std::string>& missingTargets);

  void SetImportLinkInterface(
    const std::string& config, std::string const& suffix,
    cmGeneratorExpression::PreprocessContext preprocessRule,
    cmGeneratorTarget const* target, ImportPropertyMap& properties,
    std::vector<std::string>& missingTargets);

  enum FreeTargetsReplace
  {
    ReplaceFreeTargets,
    NoReplaceFreeTargets
  };

  void ResolveTargetsInGeneratorExpressions(
    std::string& input, cmGeneratorTarget const* target,
    std::vector<std::string>& missingTargets,
    FreeTargetsReplace replace = NoReplaceFreeTargets);

  virtual void GenerateRequiredCMakeVersion(std::ostream& os,
                                            const char* versionString);

  bool PopulateExportProperties(cmGeneratorTarget const* gte,
                                ImportPropertyMap& properties,
                                std::string& errorMessage);

  // The namespace in which the exports are placed in the generated file.
  std::string Namespace;

  bool ExportOld;

  // The set of configurations to export.
  std::vector<std::string> Configurations;

  // The file to generate.
  std::string MainImportFile;
  std::string FileDir;
  std::string FileBase;
  std::string FileExt;
  bool AppendMode;

  // The set of targets included in the export.
  std::set<cmGeneratorTarget*> ExportedTargets;

private:
  void PopulateInterfaceProperty(const std::string&, const std::string&,
                                 cmGeneratorTarget const* target,
                                 cmGeneratorExpression::PreprocessContext,
                                 ImportPropertyMap& properties,
                                 std::vector<std::string>& missingTargets);

  bool AddTargetNamespace(std::string& input, cmGeneratorTarget const* target,
                          std::vector<std::string>& missingTargets);

  void ResolveTargetsInGeneratorExpression(
    std::string& input, cmGeneratorTarget const* target,
    std::vector<std::string>& missingTargets);

  virtual void ReplaceInstallPrefix(std::string& input);

  virtual std::string InstallNameDir(cmGeneratorTarget const* target,
                                     const std::string& config) = 0;
};
