// Address: 00479474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00479474(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0047490c(*(int *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78));
  }
  *(int *)(param_1 + 0x7c) = param_2;
  if (param_2 != 0) {
    FUN_00474950(param_2,*(undefined4 *)(param_1 + 0x78));
    FUN_00426f28(*(undefined4 *)(param_1 + 0x7c),param_1);
  }
  FUN_004794e4(param_1);
  return;
}

