// Address: 0047141c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047141c(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = (**(code **)PTR_DAT_0066b008)();
  cVar2 = '\x01' - (iVar1 == 0);
  *(char *)(param_1 + 0x20) = cVar2;
  if (cVar2 != '\0') {
    SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
  }
  return;
}

