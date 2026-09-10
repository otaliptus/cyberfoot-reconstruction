// Address: 0048d550
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048d550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x6d];
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar2 = (**(code **)(param_1[0x6e] + 4))();
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          if (*(int *)(iVar1 + 0x10) == 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0x23;
            (**(code **)*param_1)();
          }
          FUN_0048d508(param_1);
        }
        else {
          FUN_0048d11c(param_1);
          *(undefined4 *)(iVar1 + 0x18) = 0;
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(iVar1 + 0x14) = 1;
        if (*(int *)(iVar1 + 0x18) == 0) {
          if (param_1[0x24] < param_1[0x26]) {
            param_1[0x26] = param_1[0x24];
          }
        }
        else if (*(int *)(param_1[0x6e] + 0x10) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x3b;
          (**(code **)*param_1)();
        }
      }
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}

