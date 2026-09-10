// Address: 0061edd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0061edd0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = -1;
  uVar2 = 0;
  uVar3 = 0;
  if (param_3 < param_2) {
    uVar2 = 1;
  }
  else if (param_2 < param_3) {
    uVar3 = 1;
  }
  if (param_6 < param_7) {
    uVar2 = uVar2 + 1;
  }
  else if (param_7 < param_6) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < uVar2) {
    iVar1 = 1;
  }
  else if (uVar2 < uVar3) {
    iVar1 = 2;
  }
  if (iVar1 == -1) {
    if (param_6 + param_3 < param_2 + param_7) {
      iVar1 = 1;
    }
    else if (param_2 + param_7 < param_6 + param_3) {
      iVar1 = 2;
    }
  }
  if ((iVar1 == -1) && (*(int *)(PTR_DAT_0066ac78 + 0x88) != 3)) {
    if (param_3 < param_7) {
      iVar1 = 1;
    }
    else if (param_7 < param_3) {
      iVar1 = 2;
    }
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) && (6 < *(int *)(PTR_DAT_0066ac78 + 0x194))) {
      iVar1 = -1;
    }
  }
  if (((iVar1 == -1) && (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3)) &&
     (*(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x564) == 1)) {
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_5 * 0x2f8) <
        *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_4 * 0x2f8)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
  }
  if (iVar1 == -1) {
    iVar1 = 3;
  }
  return iVar1;
}

