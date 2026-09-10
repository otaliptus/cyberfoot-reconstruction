// Address: 004b1d20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b1d20(int param_1,char param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;
  
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x4b1d34;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_28 = (undefined1 *)0x4b1d43;
  local_8 = param_3;
  FUN_004068f4(param_3);
  uVar2 = local_8;
  puStack_2c = &LAB_004b1d9e;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  if (param_4 == 0) {
    puStack_28 = &stack0xfffffffc;
    uVar3 = GdipCreateBitmapFromStream();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  else {
    puStack_28 = &stack0xfffffffc;
    uVar3 = GdipCreateBitmapFromStreamICM();
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  FUN_004b1be8(param_1,0);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uVar2;
  puStack_30 = &LAB_004b1da5;
  FUN_00406880(&local_8,uVar2,puVar1);
  return;
}

