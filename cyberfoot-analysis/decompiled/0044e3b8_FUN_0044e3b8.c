// Address: 0044e3b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e3b8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    iVar1 = FUN_0044e21c(param_1);
    if ((*(char *)(iVar1 + 0x229) == '\x01') || (*(char *)(iVar1 + 0x229) == '\x03')) {
      FUN_0044e21c(param_1);
      FUN_00451d34();
    }
  }
  return;
}

