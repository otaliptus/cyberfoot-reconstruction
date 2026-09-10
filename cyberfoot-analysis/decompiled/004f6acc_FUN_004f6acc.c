// Address: 004f6acc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6acc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_0041e110(*(undefined4 *)(param_1 + 0x1034),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x1008);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_0041e110(*(undefined4 *)(param_1 + 4 + iVar2 * 4),param_2,param_3);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x1038) = 0;
  return;
}

