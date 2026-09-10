// Address: 00409820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409820(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  undefined1 *puVar1;
  int cchCount2;
  PCNZCH lpString2;
  int cchCount1;
  PCNZCH lpString1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004098a1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00404b6c(&local_8,param_1);
  FUN_00404b6c(&local_c,param_2);
  cchCount2 = FUN_00404ba4(local_c);
  lpString2 = (PCNZCH)FUN_00404da4(local_c);
  cchCount1 = FUN_00404ba4(local_8);
  lpString1 = (PCNZCH)FUN_00404da4(local_8);
  CompareStringA(0x400,param_3,lpString1,cchCount1,lpString2,cchCount2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004098a8;
  puStack_20 = (undefined1 *)0x4098a0;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

