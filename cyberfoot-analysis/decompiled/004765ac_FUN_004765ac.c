// Address: 004765ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_004765ac(int *param_1,int param_2,code *param_3,int param_4)

{
  int iVar1;
  char local_d;
  
  if (param_2 != 0) {
    local_d = '\0';
    while (local_d == '\0') {
      iVar1 = FUN_00478b4c(param_2);
      if (iVar1 <= *param_1) {
        return '\0';
      }
      iVar1 = FUN_00478b5c(param_2,*param_1);
      if (*(byte *)(param_4 + -1) < *(byte *)(iVar1 + 0x3f)) {
        return '\0';
      }
      local_d = (*param_3)(iVar1);
      *param_1 = *param_1 + 1;
    }
  }
  return local_d;
}

