// Address: 004a6480
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6480(undefined4 *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_330;
  undefined1 *puStack_32c;
  undefined1 *puStack_328;
  undefined1 local_308 [256];
  undefined1 local_208 [256];
  undefined1 local_108 [256];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_328 = (undefined1 *)0x4a649d;
    param_1 = (undefined4 *)FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_32c = &LAB_004a6552;
  uStack_330 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_330;
  puStack_328 = &stack0xfffffffc;
  FUN_00403a54(param_1,0);
  puVar3 = local_108;
  FUN_004039d4(*param_1,local_208);
  FUN_004039d4(*param_1,local_308);
  FUN_004029a0(local_308,7,local_208[0],puVar3);
  FUN_00404b48(&local_8,local_108);
  iVar1 = FUN_00404ba4(local_8);
  if (iVar1 == 4) {
    uVar2 = thunk_FUN_00404db0(&local_8);
    FUN_00408034(param_1 + 4,uVar2,4);
  }
  uVar2 = FUN_004027fc(1);
  puVar3 = puStack_328;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = uStack_330;
  puStack_328 = &LAB_004a6559;
  puStack_32c = (undefined1 *)0x4a6551;
  FUN_004048d4(&local_8,uStack_330,puVar3);
  return;
}

