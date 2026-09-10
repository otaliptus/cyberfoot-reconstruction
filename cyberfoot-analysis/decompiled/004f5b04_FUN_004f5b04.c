// Address: 004f5b04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f5b04(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x100c) = param_2;
  *(undefined4 *)(param_1 + 0x1030) = param_3;
  FUN_0041e01c(*(undefined4 *)(param_1 + 4 + param_2 * 4),param_3);
  return;
}

