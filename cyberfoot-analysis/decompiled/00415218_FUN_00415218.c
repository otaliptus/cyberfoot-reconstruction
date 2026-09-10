// Address: 00415218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00415218(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *in_FS_OFFSET;
  undefined4 *puVar2;
  VARIANTARG *pVVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_3c;
  undefined1 *puStack_38;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  VARIANTARG local_14;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_004152d7;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_38 = (undefined1 *)0x415243;
  VariantInit(&local_14);
  puStack_38 = &LAB_004152b5;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  uVar7 = 8;
  uVar6 = 0;
  uVar5 = 0x400;
  pVVar3 = &local_14;
  puVar4 = param_1;
  uVar1 = (**(code **)PTR_DAT_0066b54c)();
  FUN_00411994(uVar1,CONCAT22(extraout_var_00,*param_1),CONCAT22(extraout_var,0x100),pVVar3,puVar4,
               uVar5,uVar6,uVar7);
  puVar2 = &local_18;
  FUN_00405158(&local_1c,local_14.n1._8_4_);
  FUN_004053fc(local_1c,1,0x7fffffff,puVar2);
  FUN_00404b6c(param_2,local_18);
  *in_FS_OFFSET = (int)pVVar3;
  FUN_00411d38(&local_14,pVVar3,uVar5,&LAB_004152bc);
  return;
}

