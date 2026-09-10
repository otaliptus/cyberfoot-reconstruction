// Address: 00576d30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm78_gr1Click(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00576e6a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar3 = 1;
  local_c = param_2;
  local_8 = param_1;
  do {
    FUN_00409dd8(iVar3,&local_14);
    FUN_00404bf0(&local_10,&DAT_00576e80,local_14);
    iVar2 = FUN_00427360(DAT_006d2070,local_10);
    FUN_00466414(iVar2,CONCAT22(extraout_var,0xffeb));
    FUN_0042a66c(*(undefined4 *)(iVar2 + 0x68),DAT_00576e84);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 9);
  iVar3 = FUN_00403c34(local_c,PTR_PTR_004df4e4);
  FUN_00576e94(local_8,*(undefined4 *)(iVar3 + 0xc));
  FUN_00403c34(local_c,PTR_PTR_004df4e4);
  FUN_00466414(iVar3,0);
  FUN_00403c34(local_c,PTR_PTR_004df4e4);
  FUN_0042a66c(*(undefined4 *)(iVar3 + 0x68),DAT_00576e88);
  FUN_00642c50(0x1dd,&local_1c);
  uVar4 = local_1c;
  FUN_00403c34(local_c,PTR_PTR_004df4e4);
  FUN_004e1400(iVar3,&local_20);
  uVar1 = local_20;
  FUN_00405330(&local_18,3);
  FUN_004e1414(DAT_006d2144,local_18);
  *in_FS_OFFSET = uVar1;
  FUN_00404ff0(&local_20,uVar1,uVar4,&LAB_00576e71);
  FUN_00405008(&local_1c,2);
  FUN_004048f8(&local_14,2);
  return;
}

