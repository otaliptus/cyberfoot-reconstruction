// Address: 004126a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004126a8(undefined4 param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  if (param_3 != uVar1) {
    if (uVar1 == 0x400c) {
      FUN_004126a8(param_1,*(undefined4 *)(param_2 + 4));
    }
    else {
      switch(param_3) {
      case 0:
        if ((*param_2 == 1) && (DAT_00662450 != '\0')) {
          FUN_00411500(1,0);
        }
        else {
          FUN_00411d38(param_1);
        }
        break;
      case 1:
        FUN_00411aa0(param_1);
        break;
      case 2:
        uVar2 = FUN_00413014(param_2);
        FUN_00416320(param_1,uVar2);
        break;
      case 3:
        uVar2 = FUN_00412a6c(param_2);
        FUN_00416280(param_1,uVar2);
        break;
      case 4:
        FUN_004143d8(param_2);
        FUN_0041636c(param_1);
        break;
      case 5:
        FUN_00414040(param_2);
        FUN_00416390(param_1);
        break;
      case 6:
        FUN_00414d18(param_2);
        FUN_004163bc(param_1);
        break;
      case 7:
        FUN_004147b0(param_2);
        FUN_004163e8(param_1);
        break;
      case 8:
        FUN_0041248c(param_1,param_2);
        break;
      case 9:
        FUN_00412524(param_1,param_2);
        break;
      default:
        if (param_3 == 0x100) {
          FUN_004124d8(param_1,param_2);
        }
        else if (param_3 == 0x101) {
          FUN_00411500(uVar1,0x101);
        }
        else {
          FUN_0041263c(param_1,param_2);
        }
        break;
      case 0xb:
        uVar2 = FUN_00413b2c(param_2);
        FUN_00416414(param_1,uVar2);
        break;
      case 0xd:
        FUN_00412570(param_1,param_2);
        break;
      case 0x10:
        uVar2 = FUN_00412ebc(param_2);
        FUN_00416300(param_1,uVar2);
        break;
      case 0x11:
        uVar2 = FUN_00412f6c(param_2);
        FUN_004162a0(param_1,uVar2);
        break;
      case 0x12:
        uVar2 = FUN_0041310c(param_2);
        FUN_004162c0(param_1,uVar2);
        break;
      case 0x13:
        uVar2 = FUN_004131e4(param_2);
        FUN_004162e0(param_1,uVar2);
        break;
      case 0x14:
        FUN_00413530(param_2);
        FUN_00416340(param_1);
      }
    }
    return;
  }
  FUN_00412164(param_1,param_2);
  return;
}

