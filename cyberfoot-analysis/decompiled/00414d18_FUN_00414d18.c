// Address: 00414d18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414d18(ushort *param_1,undefined4 param_2,undefined4 param_3)

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
      FUN_00411500(1,6);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 5:
    FUN_00414c1c(param_1);
    break;
  case 6:
    break;
  case 7:
    FUN_00414c1c(param_1);
    break;
  case 8:
    FUN_00414b00(param_1);
    break;
  case 9:
  case 0xd:
    FUN_00414c1c(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      FUN_00414b00(param_1);
    }
    else if ((ushort)(uVar1 - 0x101) == 0) {
      FUN_00414c68(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00414ccc(param_1,local_18);
      if (cVar2 == '\0') {
        FUN_00414c1c(param_1);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        FUN_00414c1c(param_1);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
      case 5:
        FUN_00414c1c(param_1);
        break;
      case 6:
        break;
      case 7:
        FUN_00414c1c(param_1);
        break;
      case 8:
        FUN_00414b00(param_1);
        break;
      case 0xb:
        break;
      case 0xc:
        FUN_00414d18(*(undefined4 *)(param_1 + 4));
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
        FUN_00414bbc(param_1,uVar1 - 0x101,param_3,(double)**(longlong **)(param_1 + 4));
      }
    }
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_00414d18(*(undefined4 *)(param_1 + 4));
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
    FUN_00414bbc(param_1,uVar1,param_3,(double)*(longlong *)(param_1 + 4));
  }
  return;
}

