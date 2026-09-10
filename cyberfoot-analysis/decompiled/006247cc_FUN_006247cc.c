// Address: 006247cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006247cc(int param_1,int param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar1;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_006249ef;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0061086c(param_1,0xb,0x28,0);
  if (param_2 == 2) {
    unaff_EDI = 0xb;
    local_8 = 0x14;
  }
  else if (param_2 == 3) {
    unaff_EDI = 0x15;
    local_8 = 0x1e;
  }
  else if (param_2 == 4) {
    unaff_EDI = 0x1f;
    local_8 = 0x28;
  }
  if (param_2 == 2) {
    FUN_00466414(*(undefined4 *)(param_1 + 0x338),0);
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x68),DAT_00624a00);
    FUN_00466414(*(undefined4 *)(param_1 + 0x33c),CONCAT22(extraout_var,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x68),DAT_00624a04);
    FUN_00466414(*(undefined4 *)(param_1 + 0x340),CONCAT22(extraout_var_00,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x68),DAT_00624a04);
  }
  if (param_2 == 3) {
    FUN_00466414(*(undefined4 *)(param_1 + 0x33c),0);
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x68),DAT_00624a00);
    FUN_00466414(*(undefined4 *)(param_1 + 0x338),CONCAT22(extraout_var_01,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x68),DAT_00624a04);
    FUN_00466414(*(undefined4 *)(param_1 + 0x340),CONCAT22(extraout_var_02,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x68),DAT_00624a04);
  }
  if (param_2 == 4) {
    FUN_00466414(*(undefined4 *)(param_1 + 0x340),0);
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x340) + 0x68),DAT_00624a00);
    FUN_00466414(*(undefined4 *)(param_1 + 0x338),CONCAT22(extraout_var_03,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x338) + 0x68),DAT_00624a04);
    FUN_00466414(*(undefined4 *)(param_1 + 0x33c),CONCAT22(extraout_var_04,0xffeb));
    FUN_0042a66c(*(undefined4 *)(*(int *)(param_1 + 0x33c) + 0x68),DAT_00624a04);
  }
  FUN_0061086c(param_1,unaff_EDI,local_8,1);
  FUN_006109ac(param_1,unaff_EDI,local_8,*(int *)(*(int *)(DAT_006d4760 + 0x28) + 0x44) + 0x50);
  pwVar1 = L"<P align=\"center\"><SHAD>";
  FUN_00642c50(param_2 + 0x22,&local_10);
  FUN_00405330(&local_c,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x318),local_c);
  *in_FS_OFFSET = L"</SHAD></P>";
  FUN_00405008(&local_10,2,pwVar1,&LAB_006249f6);
  return;
}

