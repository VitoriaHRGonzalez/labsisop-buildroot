/* Type information for cp/init.c.
   Copyright (C) 2004-2021 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_cp_init_h[] = {
  {
    &nsdmi_inst,
    1,
    sizeof (nsdmi_inst),
    &gt_ggc_mx_hash_map_tree_tree_decl_tree_cache_traits_,
    &gt_pch_nx_hash_map_tree_tree_decl_tree_cache_traits_
  },
  {
    &fn,
    1,
    sizeof (fn),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

void
gt_clear_caches_gt_cp_init_h ()
{
  gt_cleare_cache (nsdmi_inst);
}

