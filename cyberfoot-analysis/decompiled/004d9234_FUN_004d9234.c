// Address: 004d9234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004d9234(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x38) == '\0';
  if (!bVar1) {
    FUN_00404cf0(*(undefined4 *)(*(int *)(param_1 + 0x30) + 100),*(undefined4 *)(param_1 + 0x40));
    if (!bVar1) {
      return 1;
    }
  }
  return 0;
}

