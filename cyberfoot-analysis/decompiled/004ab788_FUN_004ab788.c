// Address: 004ab788
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004ab788(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004aa2e8();
  if ((*(char *)(iVar1 + 0x461) == '\x06') || (*(char *)(iVar1 + 0x461) == '\x04')) {
    iVar1 = param_2 * *(int *)(iVar1 + 0x458) + *(int *)(iVar1 + 0x454);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

