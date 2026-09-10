// Address: 0050a804
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a804(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0xa9)) {
    *(char *)(param_1 + 0xa9) = param_2;
    FUN_0050aba0(param_1,6);
    FUN_0050abec(param_1,7,0xffffffff);
    if ((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
      FUN_0050ac10(param_1,0);
      FUN_0050b490(*(undefined4 *)(param_1 + 0x38),0,0);
    }
  }
  return;
}

