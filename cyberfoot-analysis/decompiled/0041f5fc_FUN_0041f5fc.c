// Address: 0041f5fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f5fc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0041f66b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404928(param_3,param_2);
  uVar2 = FUN_0042024c(param_1);
  FUN_00404abc(&local_8,uVar2);
  iVar3 = FUN_0040f024(local_8,*param_3);
  if (iVar3 == 0) {
    FUN_00404f30(param_3,0);
  }
  else {
    FUN_00404f30(param_3,iVar3 + -1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041f672;
  puStack_1c = (undefined1 *)0x41f66a;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

