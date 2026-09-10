// Address: 004e4c08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e4c08(uint param_1,uint param_2)

{
  if ((char)param_2 == '\0') {
    param_2 = (uint)DAT_00669c64;
  }
  return *(undefined4 *)(&DAT_0067af18 + (param_1 & 0x7f) * 4 + (param_2 & 0x7f) * 0x60);
}

