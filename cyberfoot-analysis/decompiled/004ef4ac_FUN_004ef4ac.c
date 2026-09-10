// Address: 004ef4ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004ef4ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x228);
  if (*(char *)(iVar1 + 0x57) != '\0') {
    return *(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x48);
  }
  return 0;
}

