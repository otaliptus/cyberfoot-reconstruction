// Address: 0047acb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047acb0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  FUN_0047a744(param_1);
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    do {
      *param_5 = 0;
      param_5 = param_5 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_0047660c(FUN_0047ac64,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x68),
               *(int *)(param_1 + 0x34));
  return;
}

