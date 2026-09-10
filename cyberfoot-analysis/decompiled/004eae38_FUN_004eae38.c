// Address: 004eae38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eae38(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x278);
  *(int *)(param_1 + 0x278) = param_2;
  if (param_2 != *(int *)(param_1 + 0x28c)) {
    FUN_004ea9b8(param_1);
    FUN_004ea9b8(param_1,*(undefined4 *)(param_1 + 0x278));
  }
  return;
}

