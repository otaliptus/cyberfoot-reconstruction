// Address: 004767c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004767c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00472c64(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    if (*(char *)(iVar2 + 0x6a) == *(char *)(*(int *)(param_1 + 0x18) + 0x39)) {
      return 1;
    }
  }
  return 0;
}

