// Address: 00457050
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00457050(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  
  *param_3 = 0x14;
  switch(param_2 & 0xff) {
  default:
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = 0;
    break;
  case 2:
    *(undefined4 *)(param_3 + 4) = 1;
    iVar1 = 2;
    break;
  case 3:
    *(undefined4 *)(param_3 + 4) = 2;
    iVar1 = 3;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(undefined4 *)(param_3 + 4) = 3;
    iVar1 = 4;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(undefined4 *)(param_3 + 4) = 4;
    iVar1 = 9;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    *(undefined4 *)(param_3 + 4) = 5;
    iVar1 = 0xe;
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    *(undefined4 *)(param_3 + 4) = 6;
    iVar1 = 0x13;
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    *(undefined4 *)(param_3 + 4) = 7;
    iVar1 = 0x18;
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    *(undefined4 *)(param_3 + 4) = 8;
    iVar1 = 0x1d;
    break;
  case 0x22:
    *(undefined4 *)(param_3 + 4) = 9;
    iVar1 = 0x22;
    break;
  case 0x23:
    *(undefined4 *)(param_3 + 4) = 10;
    iVar1 = 0x23;
  }
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar1) + 1;
  return;
}

