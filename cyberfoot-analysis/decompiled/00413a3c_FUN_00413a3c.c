// Address: 00413a3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00413a3c(undefined2 *param_1)

{
  undefined4 uVar1;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  VARIANTARG local_14;
  
  VariantInit(&local_14);
  uVar6 = 0xb;
  uVar5 = 0;
  uVar4 = 0x400;
  pVVar2 = &local_14;
  puVar3 = param_1;
  uVar1 = (**(code **)PTR_DAT_0066b54c)();
  FUN_00411994(uVar1,*param_1,0xb,pVVar2,puVar3,uVar4,uVar5,uVar6);
  return (short)uVar4 != 0;
}

