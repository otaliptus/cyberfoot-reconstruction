// Address: 004f6a90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6a90(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4 + param_2 * 4);
  if (param_2 < param_3) {
    param_2 = param_2 + 1;
    if (param_2 <= param_3) {
      iVar2 = (param_3 - param_2) + 1;
      do {
        *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + 4 + param_2 * 4);
        param_2 = param_2 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = (param_3 + 1) - param_2;
    if (iVar2 == 0 || param_3 + 1 < param_2) {
      iVar2 = iVar2 + -1;
      do {
        *(undefined4 *)(param_1 + 4 + param_2 * 4) = *(undefined4 *)(param_1 + param_2 * 4);
        param_2 = param_2 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
  }
  *(undefined4 *)(param_1 + 4 + param_3 * 4) = uVar1;
  return;
}

