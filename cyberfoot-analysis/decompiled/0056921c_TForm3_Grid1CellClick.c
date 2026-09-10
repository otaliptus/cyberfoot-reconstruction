// Address: 0056921c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0056924b) */
/* WARNING: Removing unreachable block (ram,0x00569268) */
/* WARNING: Removing unreachable block (ram,0x0056926b) */
/* WARNING: Removing unreachable block (ram,0x00569296) */
/* WARNING: Removing unreachable block (ram,0x00569299) */
/* WARNING: Removing unreachable block (ram,0x0056929d) */
/* WARNING: Removing unreachable block (ram,0x00569406) */
/* WARNING: Removing unreachable block (ram,0x00569561) */
/* WARNING: Removing unreachable block (ram,0x005695ba) */
/* WARNING: Removing unreachable block (ram,0x0056944d) */
/* WARNING: Removing unreachable block (ram,0x00569453) */
/* WARNING: Removing unreachable block (ram,0x00569488) */
/* WARNING: Removing unreachable block (ram,0x005692aa) */
/* WARNING: Removing unreachable block (ram,0x0056935d) */
/* WARNING: Removing unreachable block (ram,0x0056938d) */
/* WARNING: Removing unreachable block (ram,0x005692da) */
/* WARNING: Removing unreachable block (ram,0x005692e4) */
/* WARNING: Removing unreachable block (ram,0x005696e1) */
/* WARNING: Removing unreachable block (ram,0x005696fe) */
/* WARNING: Removing unreachable block (ram,0x00569701) */
/* WARNING: Removing unreachable block (ram,0x00569732) */
/* WARNING: Removing unreachable block (ram,0x00569735) */
/* WARNING: Removing unreachable block (ram,0x00569739) */

void TForm3_Grid1CellClick(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_15c [4];
  undefined1 local_158 [8];
  undefined1 local_150 [32];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [32];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [64];
  undefined1 local_c0 [4];
  undefined1 local_bc [32];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [32];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [64];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_14[0] = 0x2a;
  do {
    local_14[0] = local_14[0] + -1;
  } while (local_14[0] != 0);
  LOCK();
  UNLOCK();
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_c = 0;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005698b4;
  local_28 = 0x569784;
  local_8 = param_1;
  FUN_004048d4(local_15c,local_2c,&stack0xfffffffc);
  local_28 = 0x569794;
  FUN_00405008(local_158,2);
  local_28 = 0x5697aa;
  FUN_00405744(local_150,PTR_DAT_004010f8,2);
  local_28 = 0x5697b5;
  FUN_00404ff0(local_130);
  local_28 = 0x5697c0;
  FUN_004048d4(local_12c);
  local_28 = 0x5697d6;
  FUN_00405744(local_128,PTR_DAT_004010f8,2);
  local_28 = 0x5697e1;
  FUN_00404ff0(local_108);
  local_28 = 0x5697ec;
  FUN_004048d4(local_104);
  local_28 = 0x569802;
  FUN_00405744(local_100,PTR_DAT_004010f8,4);
  local_28 = 0x56980d;
  FUN_00404ff0(local_c0);
  local_28 = 0x569823;
  FUN_00405744(local_bc,PTR_DAT_004010f8,2);
  local_28 = 0x56982e;
  FUN_00404ff0(local_9c);
  local_28 = 0x569839;
  FUN_004048d4(local_98);
  local_28 = 0x56984f;
  FUN_00405744(local_94,PTR_DAT_004010f8,2);
  local_28 = 0x569857;
  FUN_00404ff0(local_74);
  local_28 = 0x56985f;
  FUN_004048d4(local_70);
  local_28 = 0x569872;
  FUN_00405744(local_6c,PTR_DAT_004010f8,4);
  local_28 = 0x56987f;
  FUN_00405008(&local_2c,2);
  local_28 = 0x569887;
  FUN_004048d4(&local_24);
  local_28 = 0x569894;
  FUN_00405008(&stack0xffffffe0,2);
  local_28 = 0x56989c;
  FUN_004048d4(&stack0xffffffe8);
  local_28 = 0x5698a9;
  FUN_00405008(local_14,2);
  return;
}

