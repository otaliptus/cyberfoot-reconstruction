// Address: 0064cbf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064cbf0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != 0xc) || (0 < param_6)) {
    iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
    iVar2 = iVar2 + 1;
    FUN_004060a8(PTR_DAT_0066b770,PTR_DAT_00488ce0,1,iVar2);
    *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x30 + iVar2 * 0x30) = param_1;
    iVar3 = *(int *)PTR_DAT_0066b770;
    puVar1 = (undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
    *(undefined4 *)(iVar3 + -0x28 + iVar2 * 0x30) = *puVar1;
    *(undefined4 *)(iVar3 + -0x24 + iVar2 * 0x30) = puVar1[1];
    switch(param_2) {
    case 0:
      if (param_3 == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 0x49;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 1;
      }
      else if (param_3 == 1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 1;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 1;
      }
      break;
    case 1:
      if (param_3 == 2) {
        iVar3 = FUN_004032c8(6);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0xc;
      }
      else if (param_3 == 3) {
        iVar3 = FUN_004032c8(5);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 7;
      }
      else if (param_3 == 5) {
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 4;
      }
      else if (param_3 == 10) {
        iVar3 = FUN_004032c8(1);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 2;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 1;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 2;
      break;
    case 2:
      switch(param_3) {
      case 0:
        iVar3 = FUN_004032c8(4);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x12;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 3;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        break;
      case 1:
        iVar3 = FUN_004032c8(1);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x43;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 10;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        break;
      case 2:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x35;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xb;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        break;
      case 3:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x37;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xc;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        break;
      case 4:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x39;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xd;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
        break;
      case 5:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x3b;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xd;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        break;
      case 6:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x3e;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xb;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 3;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      }
      break;
    case 3:
      switch(param_3) {
      case 2:
        iVar3 = FUN_004032c8(3);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x19;
        break;
      case 3:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x1c;
        break;
      case 4:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x1e;
        break;
      case 5:
      case 6:
        iVar3 = FUN_004032c8(4);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x20;
        break;
      case 7:
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x24;
        break;
      case 8:
      case 9:
      case 10:
        iVar3 = FUN_004032c8(4);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x26;
        break;
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        iVar3 = FUN_004032c8(4);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x2a;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 5;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 4;
      break;
    case 4:
      if (param_3 == 0) {
        iVar3 = FUN_004032c8(3);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x2e;
      }
      else if (param_3 == 1) {
        return;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 2;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      iVar3 = FUN_004032c8(3);
      if (iVar3 == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 5;
      }
      else if (iVar3 == 1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 6;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 7;
      }
      break;
    case 9:
      if (param_3 == 0) {
        iVar3 = FUN_004032c8(3);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x16;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 4;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 8;
      }
      else if (param_3 == 1) {
        iVar3 = FUN_004032c8(0);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x46;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
        *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0x10;
      }
      break;
    case 0xb:
      if (param_3 == 0) {
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x33;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 9;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      break;
    case 0xc:
      if (param_3 == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 0x45;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0xf;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0xc + iVar2 * 0x30) = param_4;
      break;
    case 0xd:
      if (param_3 == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 0x47;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0x11;
      }
      else if (param_3 == 1) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 0x48;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0x12;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0xc + iVar2 * 0x30) = param_4;
      break;
    case 0xe:
      if (param_3 == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = 0x4a;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = 0x13;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0xc + iVar2 * 0x30) = param_4;
      break;
    case 0xf:
      if (param_3 == 1) {
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x4b;
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = iVar3 + 0x14;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 1;
      }
      else if (param_3 == 2) {
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x20 + iVar2 * 0x30) = iVar3 + 0x4d;
        iVar3 = FUN_004032c8(2);
        *(int *)(*(int *)PTR_DAT_0066b770 + -0x18 + iVar2 * 0x30) = iVar3 + 0x14;
        *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x1c + iVar2 * 0x30) = 2;
      }
      *(undefined1 *)(*(int *)PTR_DAT_0066b770 + -7 + iVar2 * 0x30) = 0;
      *(int *)(*(int *)PTR_DAT_0066b770 + -0x14 + iVar2 * 0x30) = param_6;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0x10 + iVar2 * 0x30) = param_5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b770 + -0xc + iVar2 * 0x30) = param_4;
    }
  }
  return;
}

