// Address: 004768f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004768f8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00472cf0(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403c34(*(undefined4 *)(param_1 + 0x10),PTR_PTR_00472158);
    if (*(char *)(iVar2 + 0x86) == *(char *)(*(int *)(param_1 + 0x18) + 0x3e)) {
      return 1;
    }
  }
  return 0;
}

