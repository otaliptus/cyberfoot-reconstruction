// Address: 0043a3e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043a3e0(int param_1,LPRECT param_2,undefined4 param_3,int param_4)

{
  FUN_0042a998(*(undefined4 *)(param_1 + 0x10),1);
  param_2->bottom = param_2->bottom + -1;
  param_2->right = param_2->right + -1;
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_0043a31c();
    InflateRect(param_2,-1,-1);
  }
  param_2->bottom = param_2->bottom + 1;
  param_2->right = param_2->right + 1;
  return;
}

