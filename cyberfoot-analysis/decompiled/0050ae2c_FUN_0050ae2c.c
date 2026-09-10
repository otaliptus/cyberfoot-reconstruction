// Address: 0050ae2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ae2c(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[0xe] + 8) + -1;
  if (-1 < iVar1) {
    do {
      (**(code **)(*param_1 + 0x30))(param_1,iVar1);
      FUN_00403a84();
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

