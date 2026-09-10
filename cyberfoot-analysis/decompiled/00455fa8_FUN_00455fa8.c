// Address: 00455fa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00455fa8(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_0046d5b0(param_1,param_2,param_3);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00442ad4);
  if (cVar1 != '\0') {
    if (((char)param_3 == '\0') || (param_1[0xa0] == 0)) {
      FUN_00455914(param_1,*(undefined4 *)(param_2 + 0xa4));
    }
    if (((char)param_3 != '\0') && (iVar2 = (**(code **)(*param_1 + 0xcc))(), iVar2 == -1)) {
      return;
    }
    (**(code **)(*param_1 + 0xd0))(param_1,*(undefined4 *)(param_2 + 200));
  }
  return;
}

