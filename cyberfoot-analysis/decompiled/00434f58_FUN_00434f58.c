// Address: 00434f58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434f58(int param_1)

{
  DOCINFOA local_18;
  
  FUN_00434ee8(param_1,0);
  FUN_00434dbc(param_1,2);
  FUN_004352c8(param_1);
  FUN_0042b1b4();
  FUN_004352c8(param_1);
  FUN_00434cbc();
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_004032a8(&local_18,0x14,0);
  local_18.cbSize = 0x14;
  local_18.lpszDocName = (LPCSTR)FUN_00404da4(*(undefined4 *)(param_1 + 0x18));
  SetAbortProc(*(HDC *)(param_1 + 0x20),FUN_004349c4);
  StartDocA(*(HDC *)(param_1 + 0x20),&local_18);
  StartPage(*(HDC *)(param_1 + 0x20));
  return;
}

