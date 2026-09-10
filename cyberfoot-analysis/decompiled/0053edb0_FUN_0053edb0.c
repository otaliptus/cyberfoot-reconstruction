// Address: 0053edb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053edb0(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (cVar1 != *(char *)((int)param_1 + 0x211)) {
    FUN_0046cd14(param_1,param_2);
    *(char *)((int)param_1 + 0x211) = cVar1;
    if (cVar1 != '\0') {
      FUN_0053ed48(param_1);
      (**(code **)(*param_1 + 0xcc))();
    }
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

