// Address: 004a83a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a83a8(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    do {
      *param_3 = *param_2 >> 2 & 0xf | *param_2 & 0xf0;
      param_3[1] = (*param_2 & 0xc3) << 2 | *param_2 << 4;
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

