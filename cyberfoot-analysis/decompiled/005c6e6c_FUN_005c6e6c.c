// Address: 005c6e6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c6e6c(int param_1)

{
  if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)(PTR_DAT_0066ac78 + 0x4c) + -1);
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)(PTR_DAT_0066ac78 + 0x4c) + 0x12);
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x37c),*(int *)(PTR_DAT_0066ac78 + 0x4c) + 8);
  }
  FUN_005c5d38(param_1,1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x4c),
               *(undefined4 *)(PTR_DAT_0066ac78 + 0x50));
  return;
}

