// Address: 004134e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004134e4(undefined2 *param_1,ULONG *param_2)

{
  undefined4 uVar1;
  int *local_20;
  VARIANTARG local_1c;
  
  uVar1 = FUN_00418f24(*param_1,&local_20);
  if ((char)uVar1 != '\0') {
    VariantInit(&local_1c);
    (**(code **)(*local_20 + 0x1c))(local_20,&local_1c,param_1,0x14);
    *param_2 = local_1c.n1.decVal.Hi32;
    param_2[1] = local_1c.n1._8_4_;
  }
  return uVar1;
}

