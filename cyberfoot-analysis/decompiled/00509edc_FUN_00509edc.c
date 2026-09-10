// Address: 00509edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00509edc(int *param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x30))();
    iVar1 = (**(code **)(iVar1 + 0x2c))(iVar1,1,param_1);
    param_1[0x14] = iVar1;
    FUN_00466128(iVar1,0);
  }
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  iVar1 = (**(code **)(*param_1 + 0x34))();
  iVar1 = (**(code **)(iVar1 + 0xc))(iVar1,1,param_1);
  param_1[0x12] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0x38))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x38))();
    iVar1 = (**(code **)(iVar1 + 0xc))(iVar1,1,param_1);
    param_1[0x21] = iVar1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0x50;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0xd] = -0xfffffb;
  iVar1 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  param_1[0x16] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(code **)(iVar1 + 8) = FUN_0050a3e0;
  iVar1 = FUN_00509b68(PTR_PTR_00508c04,1,param_1);
  param_1[0x17] = iVar1;
  *(int **)(iVar1 + 0x24) = param_1;
  *(undefined1 **)(iVar1 + 0x20) = &LAB_0050a3c4;
  iVar1 = FUN_00509cc8(PTR_PTR_00508dbc,1,param_1);
  param_1[0x18] = iVar1;
  *(int **)(iVar1 + 0x24) = param_1;
  *(undefined1 **)(iVar1 + 0x20) = &LAB_0050a3c4;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00404ff0(param_1 + 0x1b);
  param_1[0x1d] = 0;
  param_1[0x2f] = 8;
  *(undefined2 *)(param_1 + 0x1f) = DAT_0050a0b4;
  param_1[0x30] = 0;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)((int)param_1 + 0x7f) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x22] = -1;
  *(undefined1 *)((int)param_1 + 0xc5) = DAT_0050a0b8;
  iVar1 = FUN_00509dd8(PTR_PTR_00508f04,1,param_1);
  param_1[0x24] = iVar1;
  FUN_004048d4(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 2;
  *(undefined1 *)((int)param_1 + 0xa9) = 1;
  param_1[0x2c] = 0x50;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  (**(code **)(*param_1 + 0x44))(param_1,8);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

