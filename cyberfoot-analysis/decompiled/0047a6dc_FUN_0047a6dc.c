// Address: 0047a6dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a6dc(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_0047490c(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x44));
  }
  *(int *)(param_1 + 0x48) = param_2;
  if (param_2 != 0) {
    FUN_00474950(param_2,*(undefined4 *)(param_1 + 0x44));
    FUN_00426f28(*(undefined4 *)(param_1 + 0x48),param_1);
  }
  FUN_00479ef0(param_1);
  return;
}

