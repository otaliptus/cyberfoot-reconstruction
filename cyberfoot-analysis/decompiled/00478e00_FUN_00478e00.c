// Address: 00478e00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00478e00(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  if (((*(int *)(param_1 + 0x44) == 0) && (*(char *)(param_1 + 0xa8) != '\0')) ||
     ((*(int **)(param_1 + 0x44) != (int *)0x0 &&
      ((cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x78))(), cVar1 == '\0' &&
       (param_2 = extraout_EDX, *(char *)(param_1 + 0xa8) != '\0')))))) {
    FUN_00478a24(param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x38)) ^ 1);
  }
  if (((*(short *)(param_1 + 0x8a) != 0) && (iVar2 = FUN_00478b34(param_1), iVar2 != 0)) &&
     (iVar2 = FUN_00478b34(param_1), *(int *)(iVar2 + 0x40) != *(int *)(param_1 + 0x88))) {
    (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x8c),param_1);
    return;
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(int *)(param_1 + 0x44) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(*(int **)(param_1 + 0x44),param_1);
  }
  else if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x8c),param_1);
  }
  return;
}

