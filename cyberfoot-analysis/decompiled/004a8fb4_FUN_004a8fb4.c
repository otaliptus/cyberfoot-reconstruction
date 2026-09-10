// Address: 004a8fb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8fb4(int param_1,byte *param_2,ushort *param_3,byte *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    do {
      *param_3 = (ushort)*param_2;
      param_3[1] = (ushort)*param_4;
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

