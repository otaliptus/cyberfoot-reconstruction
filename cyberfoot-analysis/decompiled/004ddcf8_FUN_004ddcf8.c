// Address: 004ddcf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ddcf8(int *param_1)

{
  if (*param_1 != 0x102) {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntControls.pas"
                 ,0x185);
  }
  if ((*(short *)((int)param_1 + 6) != 0) && ((short)param_1[1] == 0xff)) {
    *(short *)(param_1 + 1) = *(short *)((int)param_1 + 6);
  }
  *(undefined2 *)((int)param_1 + 6) = 0;
  return;
}

