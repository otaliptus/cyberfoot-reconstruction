// Address: 004b56f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b56f8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  HANDLE h;
  HFONT h_00;
  HDC hdc;
  HGDIOBJ pvVar1;
  int c;
  LOGFONTA *pv;
  LOGFONTA local_40;
  
  pv = &local_40;
  c = 0x3c;
  h = (HANDLE)FUN_0042a3b4(*(undefined4 *)(param_1 + 0xc));
  GetObjectA(h,c,pv);
  local_40.lfEscapement = param_2 * 10;
  local_40.lfOrientation = local_40.lfEscapement;
  h_00 = CreateFontIndirectA(&local_40);
  hdc = (HDC)FUN_0042b5a8(param_1);
  pvVar1 = SelectObject(hdc,h_00);
  *(HGDIOBJ *)(param_4 + -4) = pvVar1;
  return;
}

