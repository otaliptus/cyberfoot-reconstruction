// Address: 0046ec64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0046ec64(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined1 local_5;
  
  local_c = 0;
  uVar1 = *(uint *)(param_1 + 0x1c);
  puStack_1c = (undefined1 *)0x46ec8b;
  uVar2 = FUN_00403c80(*(undefined4 *)(uVar1 + 0x14),param_2,&local_c);
  local_5 = local_c != 0;
  if ((bool)local_5) {
    *(int *)(uVar1 + 0x38) = param_1;
    puStack_20 = &LAB_0046ecd5;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00466f18(local_c,*(undefined4 *)(uVar1 + 0x14),0);
    *in_FS_OFFSET = 0;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    return uVar1;
  }
  return uVar2 & 0xffffff00;
}

