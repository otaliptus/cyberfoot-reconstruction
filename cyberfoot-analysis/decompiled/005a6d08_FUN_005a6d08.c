// Address: 005a6d08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a6d08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  puStack_38 = &LAB_005a6e67;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  iVar1 = FUN_0042d4c0(PTR_PTR_0042902c,1);
  FUN_004048d4(&local_8);
  FUN_00645508(param_2,&local_c);
  if (local_c == 0) goto LAB_005a6e39;
  FUN_00645508(param_2,&local_10);
  FUN_0042d6c0(iVar1,local_10);
  (**(code **)(*DAT_006d258c + 0x40))(DAT_006d258c,0x12);
  (**(code **)(*DAT_006d258c + 0x34))(DAT_006d258c,0x12);
  uVar2 = FUN_00430280(DAT_006d258c);
  FUN_0042b584(uVar2,local_20);
  puVar3 = local_20;
  uVar2 = FUN_00430280(DAT_006d258c);
  FUN_0042b20c(uVar2,puVar3,*(undefined4 *)(iVar1 + 0xc));
  piVar4 = DAT_006d258c;
  uVar2 = FUN_00430280(DAT_006d258c);
  FUN_0042ae64(uVar2,0,0,piVar4);
  iVar1 = (**(code **)(*DAT_006d258c + 0x2c))();
  if (iVar1 == 0x12) {
    iVar1 = (**(code **)(*DAT_006d258c + 0x20))();
    if (iVar1 != 0x12) goto LAB_005a6e02;
    FUN_00473d0c(*(undefined4 *)(param_1 + 0x304),DAT_006d258c,0);
  }
  else {
LAB_005a6e02:
    FUN_00473d0c(*(undefined4 *)(param_1 + 0x304),DAT_006d258c,0);
  }
  iVar1 = FUN_00473f5c(*(undefined4 *)(param_1 + 0x304));
  FUN_00409dd8(iVar1 + -1,&local_24);
  FUN_00404bf0(&local_8,&LAB_005a6e80,local_24);
LAB_005a6e39:
  FUN_00404928(param_4,local_8);
  puVar3 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005a6e6e;
  puStack_38 = (undefined1 *)0x5a6e59;
  FUN_004048d4(&local_24,uStack_3c,puVar3);
  puStack_38 = (undefined1 *)0x5a6e66;
  FUN_004048f8(&local_10,3);
  return;
}

