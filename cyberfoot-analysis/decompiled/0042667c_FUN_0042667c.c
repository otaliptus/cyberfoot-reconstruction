// Address: 0042667c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042667c(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3 + -1) {
    iVar1 = 0;
    do {
      *param_2 = s_0123456789ABCDEF_006625d4[*(byte *)(param_1 + iVar1) >> 4];
      param_2[1] = s_0123456789ABCDEF_006625d4[*(byte *)(param_1 + iVar1) & 0xf];
      param_2 = param_2 + 2;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

