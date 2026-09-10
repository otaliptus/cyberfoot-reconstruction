// Address: 0041edcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041edcc(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined1 local_10c [256];
  int local_c;
  int local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_120 = &LAB_0041ee7a;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_004039d4(*param_1,local_10c);
  FUN_00404b48(param_2,local_10c);
  iVar2 = FUN_00403c80(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_00403c80(param_1);
    FUN_00403c80(uVar3,&local_8);
    if (local_8 != 0) {
      FUN_0041ee94(param_1,&local_c);
      if (local_c != 0) {
        FUN_00404c64(param_2,3);
      }
    }
  }
  puVar1 = puStack_11c;
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0041ee81;
  puStack_120 = (undefined1 *)0x41ee79;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

