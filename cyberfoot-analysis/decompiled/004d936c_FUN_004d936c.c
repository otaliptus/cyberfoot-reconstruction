// Address: 004d936c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004d936c(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x48) == '\0';
  if (!bVar1) {
    FUN_00404cf0(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x7c),*(undefined4 *)(param_1 + 0x50));
    if (!bVar1) {
      return 1;
    }
  }
  return 0;
}

