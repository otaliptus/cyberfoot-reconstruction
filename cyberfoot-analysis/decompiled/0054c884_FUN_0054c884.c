// Address: 0054c884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c884(void)

{
  HWND hWnd;
  int iVar1;
  int right;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  int top;
  tagRECT *lpRect;
  tagRECT local_14;
  
  piVar3 = (int *)(in_stack_00000004 + -4);
  lpRect = &local_14;
  hWnd = (HWND)FUN_0046cae0(*piVar3);
  GetWindowRect(hWnd,lpRect);
  OffsetRect(&local_14,-local_14.left,-local_14.top);
  iVar1 = FUN_00465c0c(*piVar3);
  local_14.left = local_14.left + (iVar1 - *(int *)(*piVar3 + 0x2a4));
  InflateRect(&local_14,-1,-1);
  DrawFrameControl(*(HDC *)(in_stack_00000004 + -8),&local_14,3,0x4005);
  iVar1 = FUN_00465c50(*piVar3);
  right = FUN_00465c0c(*piVar3);
  top = 0;
  iVar2 = FUN_00465c0c(*piVar3);
  ExcludeClipRect(*(HDC *)(in_stack_00000004 + -8),(iVar2 - *(int *)(*piVar3 + 0x2a4)) + -2,top,
                  right,iVar1);
  return;
}

