// Address: 004cccec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004cccec(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_0046e7a8(param_1,0);
  *(uint *)(param_1 + 0x50) = ~DAT_004ccfd4 & *(uint *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x329) = 0;
  *(undefined1 *)(param_1 + 0x349) = 8;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x236) = 0;
  *(undefined1 *)(param_1 + 0x23d) = 0;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  *(undefined1 *)(param_1 + 0x23f) = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 0x241) = 0;
  *(undefined1 *)(param_1 + 0x240) = 1;
  *(undefined1 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x28a) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined1 *)(param_1 + 0x290) = 1;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined1 *)(param_1 + 0x2b9) = 0;
  *(undefined4 *)(param_1 + 700) = 2;
  *(undefined1 *)(param_1 + 0x2c1) = 1;
  *(undefined1 *)(param_1 + 0x2c3) = 1;
  *(undefined4 *)(param_1 + 0x2c4) = 1;
  *(undefined4 *)(param_1 + 0x2c8) = 1;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  *(undefined4 *)(param_1 + 0x2e4) = 400;
  *(undefined4 *)(param_1 + 0x2e8) = 100;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  iVar1 = FUN_004c0068(PTR_LAB_004bfd38,1);
  *(int *)(param_1 + 0x264) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_004cf9fc;
  iVar1 = FUN_004c0068(PTR_LAB_004bfd38,1);
  *(int *)(param_1 + 0x268) = iVar1;
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_004cf9fc;
  uVar2 = FUN_004c0068(PTR_LAB_004bfd38,1);
  *(undefined4 *)(param_1 + 0x26c) = uVar2;
  FUN_00466334(param_1,1);
  iVar1 = FUN_004d2694(PTR_PTR_004c6458,1);
  *(int *)(param_1 + 0x254) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_004d0460;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x274) = 1;
  *(undefined1 *)(param_1 + 0x27f) = 1;
  uVar2 = FUN_004c07e8(PTR_PTR_004c05fc,1);
  *(undefined4 *)(param_1 + 0x284) = uVar2;
  FUN_004659c4(param_1,100);
  FUN_004659e8(param_1,0x29);
  *(undefined1 *)(param_1 + 0x34b) = 1;
  *(undefined1 *)(param_1 + 0x34c) = 1;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2f8) = 2;
  *(undefined1 *)(param_1 + 0x2f9) = 2;
  *(undefined1 *)(param_1 + 0x30a) = 0;
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_1 + 0x23e);
  *(undefined1 *)(param_1 + 0x309) = *(undefined1 *)(param_1 + 0x250);
  iVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(int *)(param_1 + 0x314) = iVar1;
  *(int *)(iVar1 + 0x24) = param_1;
  *(undefined1 **)(iVar1 + 0x20) = &LAB_004ce520;
  uVar2 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  FUN_0042a5c8(uVar2,"Tahoma");
  FUN_0042a640(*(undefined4 *)(param_1 + 0x318),8);
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  *(int *)(param_1 + 0x32c) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004cdfb8;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  *(int *)(param_1 + 0x330) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004cd160;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  *(int *)(param_1 + 0x334) = iVar1;
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_004cd1fc;
  *(undefined1 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

