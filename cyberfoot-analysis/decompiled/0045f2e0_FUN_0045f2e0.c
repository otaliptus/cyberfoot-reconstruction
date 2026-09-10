// Address: 0045f2e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f2e0(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  cVar2 = FUN_00403c10(piVar1,PTR_PTR_00459de4);
  if (cVar2 == '\0') {
    *(char *)((int)param_1 + 0x212) = (char)param_1[0x84];
  }
  else {
    *(bool *)((int)param_1 + 0x212) = param_1 == piVar1;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,*(undefined1 *)((int)param_1 + 0x212));
  FUN_0046be8c(param_1,param_2);
  return;
}

