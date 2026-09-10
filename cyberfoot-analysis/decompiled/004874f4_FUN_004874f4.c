// Address: 004874f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004874f4(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0xa5) = 1;
  puStack_1c = &LAB_004875d2;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puStack_24 = (undefined1 *)0x487520;
  FUN_00409578(FUN_0047e058);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    if (*(int *)PTR_DAT_0066b318 == 3) {
      puStack_24 = (undefined1 *)0x487550;
      FUN_00481950(iVar1,2);
    }
    else if (*(int *)PTR_DAT_0066b318 == 7) {
      *(undefined1 *)(iVar1 + 0x22b) = 1;
    }
    if (*(char *)(param_1 + 0x5b) != '\0') {
      if (*(char *)(*(int *)(param_1 + 0x44) + 0x22b) == '\x01') {
        puStack_24 = (undefined1 *)0x487570;
        FUN_00486e1c(param_1);
      }
      else {
        puStack_24 = (undefined1 *)0x487579;
        FUN_00480858(*(int *)(param_1 + 0x44),1);
      }
    }
    do {
      puStack_28 = &LAB_00487599;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      FUN_00487360(param_1);
      *in_FS_OFFSET = uStack_2c;
    } while (*(char *)(param_1 + 0x9c) == '\0');
  }
  *in_FS_OFFSET = local_20;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  return;
}

