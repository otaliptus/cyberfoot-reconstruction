// Address: 0054cd48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

BOOL FUN_0054cd48(int *param_1,int param_2)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  HWND hWnd;
  RECT *lpRect;
  BOOL BVar3;
  RECT RStack_18;
  
  FUN_0045da28(param_1,param_2);
  iVar2 = CONCAT22(extraout_var,*(undefined2 *)(param_2 + 6)) + -7;
  uVar1 = (ushort)iVar2;
  BVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),uVar1 - 2);
  if (uVar1 < 2) {
    lpRect = &RStack_18;
    (**(code **)(*param_1 + 0x44))(param_1,&RStack_18);
    RStack_18.left = RStack_18.right - param_1[0xa9];
    BVar3 = 0;
    hWnd = (HWND)FUN_0046cae0(param_1);
    BVar3 = InvalidateRect(hWnd,lpRect,BVar3);
  }
  return BVar3;
}

