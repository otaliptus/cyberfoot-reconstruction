// Address: 00481ce4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined * FUN_00481ce4(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  uint uVar7;
  byte bVar8;
  
  FUN_0047f1a0(param_1,param_2,param_3,param_3);
  puVar3 = (undefined *)FUN_00484688(param_1,param_2);
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 400) == 0)) {
    puVar3 = *(undefined **)(DAT_0066cbf4 + 0x30);
    *(undefined **)(param_2 + 0x1c) = puVar3;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xbffcffff;
  }
  *(undefined4 *)(param_2 + 0x24) = 8;
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) || (*(int *)(param_1 + 0x30) != 0)) {
    if ((byte)(*(char *)(param_1 + 0x230) - 1U) < 2) {
      *(undefined4 *)(param_2 + 0xc) = 0x80000000;
      *(undefined4 *)(param_2 + 0x10) = 0x80000000;
    }
    bVar1 = *(byte *)(param_1 + 0x228);
    uVar7 = (uint)bVar1;
    bVar8 = *(byte *)(param_1 + 0x229);
    uVar4 = (uint)bVar8;
    if ((*(char *)(param_1 + 0x22f) == '\x01') && ((bVar8 == 0 || (bVar8 == 3)))) {
      uVar4 = 2;
    }
    bVar8 = (byte)uVar4;
    switch(uVar4) {
    case 0:
      if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 400) == 0)) {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80000000;
      }
      uVar7 = (uint)UNK_00481ef4;
      break;
    case 1:
    case 4:
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0xc00000;
      break;
    case 2:
    case 5:
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0xc40000;
      if ((*(char *)(param_1 + 0x230) == '\x01') ||
         (uVar4 = 0, *(char *)(param_1 + 0x230) == '\x03')) {
        uVar4 = 0;
        *(undefined4 *)(param_2 + 0x14) = 0x80000000;
        *(undefined4 *)(param_2 + 0x18) = 0x80000000;
      }
      break;
    case 3:
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80c00000;
      *(undefined4 *)(param_2 + 8) = 0x101;
      FUN_00469824(param_1,param_2 + 8);
      puVar3 = PTR_DAT_0066b148;
      if (*PTR_DAT_0066b148 == '\0') {
        puVar3 = (undefined *)(*(uint *)(param_2 + 4) | 0x400080);
        *(undefined **)(param_2 + 4) = puVar3;
      }
      uVar4 = CONCAT31((int3)((uint)puVar3 >> 8),UNK_00481ef8 & bVar1);
      *(undefined4 *)(param_2 + 0x24) = 0x2808;
      uVar7 = uVar4;
    }
    uVar4 = uVar4 & 0xffffff00;
    if ((byte)(bVar8 - 4) < 2) {
      *(undefined4 *)(param_2 + 8) = 0x80;
      uVar5 = FUN_00469824(param_1,param_2 + 8);
      uVar4 = CONCAT31((int3)((uint)uVar5 >> 8),DAT_00481efc & (byte)uVar7);
      uVar7 = uVar4;
    }
    uVar6 = (undefined3)(uVar4 >> 8);
    puVar3 = (undefined *)CONCAT31(uVar6,bVar8 - 3);
    if (bVar8 < 3) {
      if ((*(char *)(param_1 + 0x22f) != '\x01') || ((uVar7 & 1) != 0)) {
        if ((uVar7 & 2) != 0) {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20000;
        }
        if ((uVar7 & 4) != 0) {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x10000;
        }
      }
      cVar2 = *(char *)(param_1 + 0x22b);
      puVar3 = (undefined *)CONCAT31(uVar6,cVar2);
      if (cVar2 == '\x01') {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20000000;
      }
      else if (cVar2 == '\x02') {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x1000000;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x22b) = 0;
    }
    if ((uVar7 & 1) != 0) {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80000;
    }
    if ((uVar7 & 8) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
    }
    if ((*(byte *)(param_1 + 0x1d) & 2) != 0) {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xff3fffff;
    }
    if (*(char *)(param_1 + 0x22f) == '\x01') {
      puVar3 = &DAT_00407a18;
      *(undefined **)(param_2 + 0x28) = &DAT_00407a18;
    }
  }
  else {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0xcf0000;
  }
  return puVar3;
}

