// Address: 00414040
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414040(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined1 local_18 [20];
  
  uVar1 = *param_1;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      FUN_00411500(1,5);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    FUN_00413e80(param_1);
    break;
  case 9:
  case 0xd:
    FUN_00413f44(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      FUN_00413e80(param_1);
    }
    else if (uVar1 == 0x101) {
      FUN_00413f90(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00413ff4(param_1,local_18);
      if (cVar2 == '\0') {
        FUN_00413f44(param_1);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        FUN_00413f44(param_1);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        FUN_00413e80(param_1);
        break;
      case 0xb:
        break;
      case 0xc:
        FUN_00414040(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
      }
    }
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_00414040(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
  }
  return;
}

