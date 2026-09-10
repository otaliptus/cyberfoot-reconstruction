// Address: 0047e4c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047e4c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  do {
    iVar2 = param_1;
    param_1 = *(int *)(iVar2 + 0x30);
  } while (*(int *)(iVar2 + 0x30) != 0);
  cVar1 = FUN_00403c10(iVar2,PTR_PTR_0047cb68);
  if (cVar1 == '\0') {
    return 0;
  }
  return iVar2;
}

