// Address: 00518760
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00518760(int param_1,char param_2)

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
  FUN_00517bcc(param_1,0);
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_004027fc((*(int *)(param_1 + 0x10) + 6) * 4);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_004032a8(*(undefined4 *)(param_1 + 0x14),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x18),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x1c),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x20),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x24),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x28),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x2c),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x30),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x34),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x38),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x3c),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  FUN_004032a8(*(undefined4 *)(param_1 + 0x40),(*(int *)(param_1 + 0x10) + 6) * 4,0);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 4) * 2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 4) * 3;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x14) + 0xc;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x18) + 0xc;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x1c) + 0xc;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x20) + 0xc;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x24) + 0xc;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x28) + 0xc;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x2c) + 0xc;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x30) + 0xc;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x34) + 0xc;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x38) + 0xc;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x3c) + 0xc;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x40) + 0xc;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

