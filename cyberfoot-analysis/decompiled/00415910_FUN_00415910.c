// Address: 00415910
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00415910(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *in_FS_OFFSET;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_38;
  undefined1 *puStack_34;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  VARIANTARG local_14;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_004159ba;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  puStack_34 = (undefined1 *)0x415938;
  VariantInit(&local_14);
  puStack_34 = &LAB_0041599d;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  uVar6 = 8;
  uVar5 = 0;
  uVar4 = 0x400;
  pVVar2 = &local_14;
  puVar3 = param_1;
  uVar1 = (**(code **)PTR_DAT_0066b54c)();
  FUN_00411994(uVar1,CONCAT22(extraout_var_00,*param_1),CONCAT22(extraout_var,8),pVVar2,puVar3,uVar4
               ,uVar5,uVar6);
  FUN_00405158(&local_18,local_14.n1._8_4_);
  FUN_004053fc(local_18,1,0x7fffffff,param_2);
  *in_FS_OFFSET = (int)pVVar2;
  FUN_00411d38(&local_14,pVVar2,uVar4,&LAB_004159a4);
  return;
}

