// Address: 0054c724
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c724(int *param_1,uint param_2)

{
  if ((char)param_2 != *(char *)((int)param_1 + 0x299)) {
    *(char *)((int)param_1 + 0x299) = (char)param_2;
    FUN_0046cc20(param_1,param_2 ^ 1);
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

