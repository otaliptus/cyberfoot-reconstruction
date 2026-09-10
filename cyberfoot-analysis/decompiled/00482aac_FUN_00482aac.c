// Address: 00482aac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482aac(int *param_1,undefined4 *param_2)

{
  HWND hWnd;
  BOOL BVar1;
  
  hWnd = (HWND)FUN_0046cae0(param_1);
  BVar1 = IsIconic(hWnd);
  if (BVar1 == 0) {
    FUN_0046ae54(param_1,param_2);
    return;
  }
  *param_2 = 0x27;
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}

