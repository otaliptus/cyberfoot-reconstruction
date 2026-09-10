// Address: 0062c5e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0062c615) */
/* WARNING: Removing unreachable block (ram,0x0062c65b) */
/* WARNING: Removing unreachable block (ram,0x0062c63e) */
/* WARNING: Removing unreachable block (ram,0x0062c67d) */
/* WARNING: Removing unreachable block (ram,0x0062c697) */
/* WARNING: Removing unreachable block (ram,0x0062c69f) */
/* WARNING: Removing unreachable block (ram,0x0062c6c8) */
/* WARNING: Removing unreachable block (ram,0x0062c6cb) */
/* WARNING: Removing unreachable block (ram,0x0062c6d1) */
/* WARNING: Removing unreachable block (ram,0x0062c706) */
/* WARNING: Removing unreachable block (ram,0x0062c70e) */
/* WARNING: Removing unreachable block (ram,0x0062c737) */
/* WARNING: Removing unreachable block (ram,0x0062c76a) */
/* WARNING: Removing unreachable block (ram,0x0062c770) */
/* WARNING: Removing unreachable block (ram,0x0062c7a3) */
/* WARNING: Removing unreachable block (ram,0x0062c794) */
/* WARNING: Removing unreachable block (ram,0x0062c7b0) */
/* WARNING: Removing unreachable block (ram,0x0062c7cb) */
/* WARNING: Removing unreachable block (ram,0x0062c7bc) */

void TForm39_list1CellClick(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  LOCK();
  UNLOCK();
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0062c822;
  local_24 = 0x62c7ed;
  FUN_004048d4(&local_28,local_28,&stack0xfffffffc);
  local_24 = 0x62c7f5;
  FUN_00404ff0(&local_24);
  local_24 = 0x62c7fd;
  FUN_004048d4(&local_20);
  local_24 = 0x62c805;
  FUN_00404ff0(&stack0xffffffe4);
  local_24 = 0x62c80d;
  FUN_004048d4(&stack0xffffffe8);
  local_24 = 0x62c81a;
  FUN_00405008(&stack0xffffffec,2);
  return;
}

