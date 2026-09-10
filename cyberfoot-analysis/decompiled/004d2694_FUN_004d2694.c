// Address: 004d2694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d2694(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  FUN_004d2e10(param_1,0xffffff);
  FUN_004d2f8c(param_1,0xffffff);
  FUN_004d2ec4(param_1,0xc0c0c0);
  FUN_004d2f78(param_1,0xffffff);
  FUN_004d2e9c(param_1,0xf5f0e1);
  FUN_004d2eb0(param_1,0xf9d2b2);
  FUN_004d2f50(param_1,0xf5c8ad);
  FUN_004d2f64(param_1,0xfff8f4);
  uVar1 = FUN_004c7cdc(0xf5f0e1,0xfffffff6,0xfffffff6,0);
  FUN_004d2e74(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xf9d2b2,0xfffffff6,0xfffffff6,0);
  FUN_004d2e88(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xf5c8ad,0xfffffff6,0xfffffff6,0);
  FUN_004d2f28(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xfff8f4,0xfffffff6,0xfffffff6,0);
  FUN_004d2f3c(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xf5f0e1,0xfffffff6,0xfffffff6,0);
  FUN_004d2e24(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xf9d2b2,0xfffffff6,0xfffffff6,0);
  FUN_004d2e38(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xf5c8ad,0xfffffff6,0xfffffff6,0);
  FUN_004d2ed8(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xfff8f4,0xfffffff6,0xfffffff6,0);
  FUN_004d2eec(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xffffff,0xfffffffb,0xfffffffb,0xfffffffb);
  FUN_004d2e4c(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xffffff,0xfffffffb,0xfffffffb,0xfffffffb);
  FUN_004d2e60(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xc0c0c0,0xfffffffb,0xfffffffb,0xfffffffb);
  FUN_004d2f00(param_1,uVar1);
  uVar1 = FUN_004c7cdc(0xffffff,0xfffffffb,0xfffffffb,0xfffffffb);
  FUN_004d2f14(param_1,uVar1);
  FUN_004d2dac(param_1,0xc0c0c0);
  FUN_004d2dfc(param_1,0xff0000);
  FUN_004d2de8(param_1,0x800000);
  FUN_004d2dc0(param_1,0xff0000);
  FUN_004d2dd4(param_1,0x808080);
  FUN_004d2fa0(param_1,1);
  FUN_004d3004(param_1,1);
  FUN_004d2ff0(param_1,0);
  FUN_004d3054(param_1,0);
  FUN_004d2fdc(param_1,0);
  FUN_004d3040(param_1,0);
  FUN_004d2fb4(param_1,0);
  FUN_004d3018(param_1,1);
  FUN_004d2fc8(param_1,0);
  FUN_004d302c(param_1,0);
  FUN_004d29a4(param_1,0);
  FUN_004d298c(param_1,0);
  FUN_004d2974(param_1,0);
  *(undefined1 *)(param_1 + 0x88) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

