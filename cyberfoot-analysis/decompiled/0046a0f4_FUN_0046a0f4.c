// Address: 0046a0f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a0f4(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = param_1;
  while (iVar1 = *(int *)(iVar3 + 0x30), iVar1 != 0) {
    iVar3 = iVar1;
    if (*(char *)(iVar1 + 0x1a6) == '\0') {
      return;
    }
  }
  cVar2 = FUN_00403c10(iVar3,PTR_PTR_0047cb68);
  if ((cVar2 == '\0') && (*(int *)(iVar3 + 400) == 0)) {
    return;
  }
  FUN_00469ff8(param_1);
  return;
}

