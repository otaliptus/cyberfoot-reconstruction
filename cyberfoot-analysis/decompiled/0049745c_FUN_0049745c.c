// Address: 0049745c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049745c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = param_1[0x68];
  *(undefined4 *)(iVar3 + 0x14) = 0x79;
  *(int *)(iVar3 + 0x18) = iVar2;
  *(int *)(iVar3 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  while( true ) {
    if (iVar2 < 0xc0) {
      iVar3 = 2;
    }
    else if ((iVar2 < 0xd0) || (0xd7 < iVar2)) {
      iVar3 = 3;
    }
    else if ((iVar2 == (param_2 + 1U & 7) + 0xd0) || (iVar2 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else if ((iVar2 == (param_2 - 1U & 7) + 0xd0) || (iVar2 == (param_2 - 2U & 7) + 0xd0)) {
      iVar3 = 2;
    }
    else {
      iVar3 = 1;
    }
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x61;
    *(int *)(iVar1 + 0x18) = iVar2;
    *(int *)(iVar1 + 0x1c) = iVar3;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar3 == 1) break;
    if (iVar3 == 2) {
      iVar3 = FUN_00496f0c(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = param_1[0x68];
    }
    else if (iVar3 == 3) {
      return 1;
    }
  }
  param_1[0x68] = 0;
  return 1;
}

