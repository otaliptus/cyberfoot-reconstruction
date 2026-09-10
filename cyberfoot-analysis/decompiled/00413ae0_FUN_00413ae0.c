// Address: 00413ae0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00413ae0(undefined2 *param_1,char *param_2)

{
  undefined4 uVar1;
  int *local_20;
  VARIANTARG local_1c;
  
  uVar1 = FUN_00418f24(*param_1,&local_20);
  if ((char)uVar1 != '\0') {
    VariantInit(&local_1c);
    (**(code **)(*local_20 + 0x1c))(local_20,&local_1c,param_1,0xb);
    *param_2 = '\x01' - (local_1c.n1.n2.wReserved2 == 0);
  }
  return uVar1;
}

