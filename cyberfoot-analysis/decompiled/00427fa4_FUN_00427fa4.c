// Address: 00427fa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00427fa4(void)

{
  BOOL BVar1;
  HWND hWnd;
  LONG dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA local_2c;
  
  _DAT_00662688 = DAT_0066c668;
  BVar1 = GetClassInfoA(DAT_0066c668,PTR_s_TPUtilWindow_0066269c,&local_2c);
  if ((BVar1 == 0) || (local_2c.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_0066269c,DAT_0066c668);
    }
    RegisterClassA((WNDCLASSA *)&DAT_00662678);
  }
  hWnd = (HWND)FUN_00408118(0x80,PTR_s_TPUtilWindow_0066269c,&DAT_00428054,0,DAT_0066c668,0,0,0,0,0,
                            0,0x80000000);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_00427ee8();
    SetWindowLongA(hWnd,-4,dwNewLong);
  }
  return hWnd;
}

