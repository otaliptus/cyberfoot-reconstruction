// Address: 004a5c5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004a5c5c(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_0067aa90 == '\0') {
    FUN_004a5c1c();
  }
  if (-1 < param_3 + -1) {
    iVar1 = 0;
    do {
      param_1 = (&DAT_0067a690)[(*(byte *)(param_2 + iVar1) ^ param_1) & 0xff] ^ param_1 >> 8;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

