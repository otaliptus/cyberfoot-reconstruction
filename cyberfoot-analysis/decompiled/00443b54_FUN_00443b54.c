// Address: 00443b54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443b54(int param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_0042771c(param_1);
  cVar2 = FUN_00403c10(*(undefined4 *)(param_1 + 0x20),PTR_PTR_00462c78);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    cVar2 = FUN_00403c10(iVar1,PTR_PTR_00442554);
    if ((cVar2 != '\0') && (*(char *)(iVar1 + 0xa0) != '\0')) {
      FUN_00443c08(param_1);
    }
  }
  return;
}

