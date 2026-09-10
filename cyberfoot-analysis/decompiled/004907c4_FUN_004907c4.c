// Address: 004907c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004907c4(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = (int)param_4 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((param_4 & 1) != 0);
  }
  return (param_3 * 0xff + iVar1) / (int)param_4;
}

