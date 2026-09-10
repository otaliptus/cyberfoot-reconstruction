// Address: 00464db0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464db0(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_0042b628(param_1,0);
    FUN_0041e430(DAT_0066cba4,param_1);
    ReleaseDC(*(HWND *)(param_1 + 0x60),*(HDC *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

