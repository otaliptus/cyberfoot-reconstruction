// Address: 005079e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_005079e4(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_17;
  undefined4 uStack_13;
  
  local_17 = *param_3;
  uStack_13 = param_3[1];
  uVar2 = FUN_004e904c(param_1,param_2,&local_17);
  if (((char)uVar2 != '\0') && ((*(byte *)(param_1 + 0x4e4) & 8) == 0)) {
    piVar1 = *(int **)(param_1 + 0x268);
    if (piVar1[6] < 1) {
      if ((*(char *)(param_1 + 700) == '\0') && (0 < *(int *)(*(int *)(param_1 + 0x238) + 0x18))) {
        if ((param_2 & 4) == 0) {
          FUN_004e7c80(*(undefined4 *)(param_1 + 0x238));
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x238) + 0x1c))();
        }
      }
    }
    else if ((param_2 & 4) == 0) {
      FUN_004e7c80(piVar1);
    }
    else {
      (**(code **)(*piVar1 + 0x1c))();
    }
  }
  return uVar2;
}

