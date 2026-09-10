// Address: 004a5d14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004a5d14(int param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
  case 3:
    iVar1 = (uint)param_3 * param_1 + 7;
    if (iVar1 < 0) {
      iVar1 = (uint)param_3 * param_1 + 0xe;
    }
    return iVar1 >> 3;
  default:
    return 0;
  case 2:
    iVar1 = (uint)param_3 * param_1 * 3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    break;
  case 4:
    iVar1 = (uint)param_3 * param_1 * 2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    return iVar1 >> 3;
  case 6:
    iVar1 = (uint)param_3 * param_1 * 4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    return iVar1 >> 3;
  }
  return iVar1 >> 3;
}

