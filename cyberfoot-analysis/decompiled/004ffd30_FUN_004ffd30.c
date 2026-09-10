// Address: 004ffd30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ffd30(int param_1,int param_2,int param_3,LPRECT param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4);
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  iVar1 = param_3 * 0x13 + *(int *)(*(int *)(param_1 + 0x34) + 0xc0);
  param_4->left = iVar1;
  param_4->right = iVar1 + 9;
  param_4->top = 0;
  param_4->bottom = 9;
  OffsetRect(param_4,2,(iVar3 + -5) - param_4->top);
  return;
}

