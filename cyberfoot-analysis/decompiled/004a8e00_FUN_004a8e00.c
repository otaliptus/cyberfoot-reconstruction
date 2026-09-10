// Address: 004a8e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8e00(int param_1,byte *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    do {
      *param_3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)param_2[2]);
      param_3[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)param_2[1]);
      param_3[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)*param_2);
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

