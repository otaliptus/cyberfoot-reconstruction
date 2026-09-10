// Address: 0045bedc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bedc(int *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != param_1[0x82]) {
    param_1[0x82] = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 200))(param_1,param_2);
    }
  }
  return;
}

