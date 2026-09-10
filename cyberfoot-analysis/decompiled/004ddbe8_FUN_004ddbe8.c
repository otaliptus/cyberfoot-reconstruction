// Address: 004ddbe8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ddbe8(int *param_1)

{
  if (*param_1 != 0x102) {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntControls.pas"
                 ,0x170);
  }
  if (DAT_00669714 == '\0') {
    if (*(short *)((int)param_1 + 6) != 0) {
      FUN_00404830("Assertion failure",
                   "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntControls.pas"
                   ,0x173);
    }
  }
  else {
    if ((*(short *)((int)param_1 + 6) != 0) && (0xff < *(ushort *)(param_1 + 1))) {
      FUN_00404830("Assertion failure",
                   "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntControls.pas"
                   ,0x174);
    }
    if (*(short *)((int)param_1 + 6) != 0) {
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | *(short *)((int)param_1 + 6) << 8;
    }
  }
  if (0xff < *(ushort *)(param_1 + 1)) {
    *(ushort *)((int)param_1 + 6) = *(ushort *)(param_1 + 1);
    *(undefined2 *)(param_1 + 1) = 0xff;
  }
  return;
}

