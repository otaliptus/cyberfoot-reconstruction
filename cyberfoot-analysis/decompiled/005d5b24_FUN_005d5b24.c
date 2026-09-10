// Address: 005d5b24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005d5b24(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0xc0) < 3) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      iVar2 = 7;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      iVar2 = 0xc;
      break;
    case 0xb:
      iVar2 = 0xf;
      break;
    case 0xc:
      iVar2 = 0x11;
      break;
    case 0xd:
      iVar2 = 0x13;
      break;
    case 0xe:
      iVar2 = 0x16;
      break;
    case 0xf:
      iVar2 = 0x19;
      break;
    case 0x10:
      iVar2 = 0x1b;
      break;
    case 0x11:
      iVar2 = 0x1e;
      break;
    case 0x12:
      iVar2 = 0x23;
      break;
    case 0x13:
      iVar2 = 0x25;
      break;
    case 0x14:
      iVar2 = 0x28;
      break;
    case 0x15:
      iVar2 = 0x32;
      break;
    case 0x16:
      iVar2 = 0x37;
      break;
    case 0x17:
      iVar2 = 0x3c;
      break;
    case 0x18:
      iVar2 = 0x41;
      break;
    case 0x19:
      iVar2 = 0x46;
    }
  }
  if (2 < *(int *)(PTR_DAT_0066ac78 + 0xc0)) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      iVar2 = 0xc;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      iVar2 = 0xf;
      break;
    case 0xb:
      iVar2 = 0x11;
      break;
    case 0xc:
      iVar2 = 0x19;
      break;
    case 0xd:
      iVar2 = 0x1e;
      break;
    case 0xe:
      iVar2 = 0x23;
      break;
    case 0xf:
      iVar2 = 0x26;
      break;
    case 0x10:
      iVar2 = 0x28;
      break;
    case 0x11:
      iVar2 = 0x2a;
      break;
    case 0x12:
      iVar2 = 0x2d;
      break;
    case 0x13:
      iVar2 = 0x32;
      break;
    case 0x14:
      iVar2 = 0x37;
      break;
    case 0x15:
      iVar2 = 0x46;
      break;
    case 0x16:
      iVar2 = 0x4b;
      break;
    case 0x17:
      iVar2 = 0x50;
      break;
    case 0x18:
      iVar2 = 0x55;
      break;
    case 0x19:
      iVar2 = 0x5a;
    }
  }
  iVar1 = FUN_004032c8(6,param_2,PTR_DAT_0066ac78);
  iVar2 = iVar2 + iVar1;
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x50 + param_1 * 0x130) == 1) {
    iVar2 = iVar2 + 3;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') {
    iVar2 = iVar2 + 5;
  }
  return iVar2;
}

