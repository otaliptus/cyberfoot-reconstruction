// Address: 004761a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

short FUN_004761a8(short param_1,byte param_2)

{
  short sVar1;
  undefined1 uStack_5;
  
  uStack_5 = (char)((ushort)param_1 >> 8);
  sVar1 = 0;
  if (uStack_5 == '\0') {
    if ((param_2 & 1) != 0) {
      param_1 = param_1 + 0x2000;
    }
    if ((param_2 & 4) != 0) {
      param_1 = param_1 + 0x4000;
    }
    sVar1 = param_1;
    if ((param_2 & 2) != 0) {
      sVar1 = param_1 + -0x8000;
    }
  }
  return sVar1;
}

