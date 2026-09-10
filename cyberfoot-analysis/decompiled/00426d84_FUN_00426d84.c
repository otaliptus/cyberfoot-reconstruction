// Address: 00426d84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426d84(int param_1)

{
  DWORD DVar1;
  
  DVar1 = ResumeThread(*(HANDLE *)(param_1 + 4));
  FUN_00426bb0(param_1,-1 < (int)DVar1);
  if (DVar1 == 1) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}

