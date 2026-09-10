// Address: 00463d14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00463d14(void)

{
  char cVar1;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar2;
  int in_stack_00000004;
  
  cVar1 = FUN_00403c10(*(undefined4 *)(in_stack_00000004 + -0x10),PTR_PTR_00461f94);
  if (cVar1 != '\0') {
    hWnd = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -0x14));
    hWndParent = (HWND)FUN_0046cae0(*(undefined4 *)(in_stack_00000004 + -0x10));
    BVar2 = IsChild(hWndParent,hWnd);
    return BVar2 != 0;
  }
  return false;
}

