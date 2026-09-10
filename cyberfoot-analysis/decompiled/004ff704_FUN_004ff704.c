// Address: 004ff704
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff704(int param_1,int *param_2,int param_3,LPRECT param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[3] - iVar1 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((param_2[3] - iVar1 & 1U) != 0);
  }
  param_4->left = param_3 * 0x13 + *(int *)(*(int *)(param_1 + 0x34) + 0xc0);
  iVar2 = param_3 * 0x13 + iVar2;
  param_4->left = iVar2;
  param_4->right = iVar2 + 9;
  param_4->top = iVar1;
  param_4->bottom = iVar1 + 9;
  OffsetRect(param_4,2,(iVar3 + iVar1 + -5) - param_4->top);
  return;
}

