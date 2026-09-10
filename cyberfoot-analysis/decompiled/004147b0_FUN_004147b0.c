// Address: 004147b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004147b0(ushort *param_1,undefined4 param_2,undefined4 param_3)

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
      FUN_00411500(1,7);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 5:
  case 6:
    FUN_004146b4(param_1);
    break;
  case 7:
    break;
  case 8:
    FUN_00414568(param_1);
    break;
  case 9:
  case 0xd:
    FUN_004146b4(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      FUN_00414568(param_1);
    }
    else if ((ushort)(uVar1 - 0x101) == 0) {
      FUN_00414700(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00414764(param_1,local_18);
      if (cVar2 == '\0') {
        FUN_004146b4(param_1);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        FUN_004146b4(param_1);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
      case 5:
      case 6:
        FUN_004146b4(param_1);
        break;
      case 7:
        break;
      case 8:
        FUN_00414568(param_1);
        break;
      case 0xb:
        break;
      case 0xc:
        FUN_004147b0(*(undefined4 *)(param_1 + 4));
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
        FUN_00414654(param_1,uVar1 - 0x101,param_3,(double)**(longlong **)(param_1 + 4));
      }
    }
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_004147b0(*(undefined4 *)(param_1 + 4));
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
    FUN_00414654(param_1,uVar1,param_3,(double)*(longlong *)(param_1 + 4));
  }
  return;
}

