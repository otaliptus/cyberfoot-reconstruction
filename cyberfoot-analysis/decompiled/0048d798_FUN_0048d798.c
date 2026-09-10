// Address: 0048d798
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048d798(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[5] == 0xca) {
    FUN_0048e24c(param_1);
    if (param_1[0x10] != 0) {
      param_1[5] = 0xcf;
      return 1;
    }
    param_1[5] = 0xcb;
  }
  if (param_1[5] == 0xcb) {
    if (*(int *)(param_1[0x6d] + 0x10) != 0) {
      while( true ) {
        if (param_1[2] != 0) {
          (**(code **)param_1[2])();
        }
        iVar2 = (**(code **)param_1[0x6d])();
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        if ((param_1[2] != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          iVar2 = param_1[2];
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
          if (*(int *)(param_1[2] + 8) <= *(int *)(iVar2 + 4)) {
            piVar1 = (int *)(param_1[2] + 8);
            *piVar1 = *piVar1 + param_1[0x50];
          }
        }
      }
    }
    param_1[0x26] = param_1[0x24];
  }
  else if (param_1[5] != 0xcc) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  uVar3 = FUN_0048d860(param_1);
  return uVar3;
}

