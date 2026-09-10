// Address: 00487e94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487e94(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x30));
  if (((byte)(1U - (BVar1 == 0)) == DAT_006632fc) && (param_1 != DAT_006632fc)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x30),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_00663300 + (uint)param_1 * 2));
    DAT_006632fc = param_1;
  }
  return;
}

