// Address: 00507938
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00507938(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_17;
  undefined4 uStack_13;
  
  local_17 = *param_3;
  uStack_13 = param_3[1];
  uVar3 = FUN_004e901c(param_1,param_2,&local_17);
  if (((char)uVar3 != '\0') && ((*(byte *)(param_1 + 0x4e4) & 8) == 0)) {
    piVar1 = *(int **)(param_1 + 0x268);
    if ((piVar1[6] < 1) || (piVar1[6] <= piVar1[0xb])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_2 & 4) == 0) {
        FUN_004e7c38(piVar1);
      }
      else {
        (**(code **)(*piVar1 + 0x18))();
      }
    }
    else if (((*(char *)(param_1 + 700) == '\0') && (0 < *(int *)(*(int *)(param_1 + 0x238) + 0x18))
             ) && (*(char *)(*(int *)(param_1 + 0x268) + 0x3c) == '\0')) {
      if ((param_2 & 4) == 0) {
        FUN_004e7c38(*(undefined4 *)(param_1 + 0x238));
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x238) + 0x18))();
      }
    }
  }
  return uVar3;
}

