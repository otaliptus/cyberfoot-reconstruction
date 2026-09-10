// Address: 0050d8e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0050d8e4(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  int local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    local_5 = extraout_DL;
  }
  FUN_004e8824(param_1,0);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined2 *)(param_1 + 0x9c) = DAT_0050dbf8;
  *(undefined1 *)((int)param_1 + 0x272) = 0;
  *(undefined1 *)((int)param_1 + 0x273) = 1;
  iVar1 = (**(code **)(*param_1 + 0x104))();
  iVar1 = (**(code **)(iVar1 + 0x2c))(iVar1,1,param_1);
  param_1[0x135] = iVar1;
  *(int **)(iVar1 + 0x54) = param_1;
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(*param_1 + 0x158);
  *(int **)(iVar1 + 0x44) = param_1;
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(*param_1 + 0x154);
  *(int **)(iVar1 + 0x4c) = param_1;
  *(code **)(iVar1 + 0x48) = FUN_00514f28;
  iVar1 = FUN_004fda68(PTR_PTR_004fcbe8,1,param_1);
  param_1[0x9f] = iVar1;
  param_1[0x9e] = iVar1;
  *(int *)(iVar1 + 8) = param_1[0x82];
  FUN_004070b8(0xffffffff,0xffffffff,&local_10);
  param_1[0xa0] = local_10;
  param_1[0xa1] = local_c;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 1;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0xa4] = 0;
  iVar1 = FUN_004fda68(PTR_PTR_004fccd4,1,param_1);
  param_1[0xa5] = iVar1;
  param_1[0x138] = 0;
  param_1[0xa6] = 0x12;
  param_1[0xa7] = -1;
  param_1[0xa8] = -0xfffff1;
  *(undefined2 *)(param_1 + 0x139) = DAT_0050dbfc;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0x12;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)((int)param_1 + 0x2c5) = 1;
  param_1[0xb2] = -0xfffff2;
  param_1[0x13a] = 0;
  param_1[0xb3] = -0xfffff1;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  param_1[0xb7] = -1;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  param_1[0xb9] = 0x10;
  param_1[0x13c] = 0;
  iVar1 = FUN_004fda68(PTR_PTR_004fcdb4,1,param_1);
  param_1[0xba] = iVar1;
  iVar1 = FUN_004fda68(PTR_PTR_004fce9c,1,param_1);
  param_1[0xbb] = iVar1;
  iVar1 = FUN_004fda68(PTR_PTR_004fcf84,1,param_1);
  param_1[0xbc] = iVar1;
  iVar1 = FUN_004fda68(PTR_PTR_004fd060,1,param_1);
  param_1[0x125] = iVar1;
  param_1[0x124] = DAT_0050dc00;
  *(undefined1 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0x10;
  param_1[0x128] = 0;
  param_1[0x13f] = -1;
  param_1[0x129] = -0xfffff3;
  *(undefined1 *)(param_1 + 0x12a) = 2;
  param_1[0x133] = -0xffffef;
  *(undefined1 *)((int)param_1 + 0x4a9) = DAT_0050dc04;
  param_1[299] = -0xfffffb;
  param_1[300] = 0x50;
  param_1[0x12d] = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  param_1[0x12f] = 0;
  FUN_00404928(param_1 + 0x130,&DAT_0050dc10);
  iVar1 = FUN_004fda68(PTR_PTR_004fd148,1,param_1);
  param_1[0x131] = iVar1;
  *(undefined1 *)((int)param_1 + 0x4c9) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined1 *)((int)param_1 + 0x4d2) = 1;
  FUN_0046cd14(param_1,1);
  FUN_004659c4(param_1,0xfa);
  FUN_004659e8(param_1,0x96);
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}

