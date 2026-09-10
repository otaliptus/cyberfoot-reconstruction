// Address: 0045eed0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045eed0(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_0046d5b0(param_1,param_2,param_3);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 != '\0') {
    if (((char)param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 200))(), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*param_1 + 0xcc))(param_1,*(undefined1 *)(param_2 + 0x69));
  }
  return;
}

