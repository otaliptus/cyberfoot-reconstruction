// Address: 004132cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004132cc(undefined2 *param_1)

{
  int iVar1;
  undefined2 extraout_var;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  uint uVar4;
  VARIANTARG local_14;
  
  VariantInit(&local_14);
  uVar4 = 3;
  pVVar2 = &local_14;
  puVar3 = param_1;
  iVar1 = (**(code **)PTR_DAT_0066b54c)();
  if (iVar1 != 0) {
    iVar1 = (**(code **)PTR_DAT_0066b54c)();
    if (iVar1 == 0) {
      uVar4 = FUN_00402c38();
    }
    else if (iVar1 == -0x7ffdfffb) {
      uVar4 = FUN_00413b2c(param_1);
      uVar4 = uVar4 & 0x7f;
    }
    else {
      FUN_00411994(iVar1,CONCAT22(extraout_var,*param_1),0x14,pVVar2,puVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}

