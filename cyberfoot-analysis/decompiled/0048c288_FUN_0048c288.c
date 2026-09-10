// Address: 0048c288
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048c288(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[5] != 200) && (param_1[5] != 0xc9)) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  iVar1 = FUN_0048c2f4(param_1);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else if (iVar1 == 2) {
      if (param_2 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x33;
        (**(code **)*param_1)();
      }
      FUN_00497780(param_1);
      iVar1 = 2;
    }
  }
  return iVar1;
}

