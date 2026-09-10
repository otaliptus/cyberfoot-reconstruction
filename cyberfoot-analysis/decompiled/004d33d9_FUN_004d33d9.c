// Address: 004d33d9
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

short * FUN_004d33d9(short *param_1,short param_2)

{
  while( true ) {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return (short *)0x0;
}

