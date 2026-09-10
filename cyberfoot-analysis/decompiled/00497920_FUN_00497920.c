// Address: 00497920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497920(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[5] != 100) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((param_2 < 0) || (3 < param_2)) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x1f;
    *(int *)(iVar2 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  piVar1 = param_1 + param_2 + 0x11;
  if (*piVar1 == 0) {
    iVar2 = FUN_004977e0(param_1);
    *piVar1 = iVar2;
  }
  iVar2 = 0;
  do {
    iVar3 = (*param_3 * param_5 + 0x32) / 100;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    if ((param_4 != 0) && (0xff < iVar3)) {
      iVar3 = 0xff;
    }
    param_3 = param_3 + 1;
    *(short *)(*piVar1 + iVar2 * 2) = (short)iVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  *(undefined4 *)(*piVar1 + 0x80) = 0;
  return;
}

