// Address: 00443b28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00443b28(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  cVar2 = FUN_00403c10(iVar1,PTR_PTR_00442554);
  if ((cVar2 != '\0') && (*(int *)(iVar1 + 0xa4) != 0)) {
    return 1;
  }
  return 0;
}

