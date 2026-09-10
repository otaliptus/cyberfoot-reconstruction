// Address: 0051c5ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c5ec(int *param_1,int param_2,undefined1 param_3,int param_4,int param_5,
                 undefined1 param_6,int param_7,int param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  param_1[4] = param_4;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 5) = param_3;
  param_1[7] = param_8;
  param_1[8] = param_7;
  *(undefined1 *)(param_1 + 9) = param_6;
  param_1[10] = param_5;
  if (*(byte *)(param_1 + 5) < 2) {
    *(undefined1 *)(param_1 + 5) = 2;
  }
  param_1[0x10] = *(byte *)(param_1 + 5) + 1;
  puStack_14 = (undefined1 *)0x51c664;
  (**(code **)(*(int *)param_1[6] + 0x10))((int *)param_1[6],param_1 + 5,1);
  param_1[0xf] = param_1[0x10];
  puStack_14 = (undefined1 *)0x51c67a;
  uVar2 = FUN_0051c4c0(param_1,param_1[0x10]);
  *(undefined2 *)(param_1 + 0x11) = uVar2;
  sVar3 = 1 << ((char)param_1[0x10] - 1U & 0x1f);
  *(short *)((int)param_1 + 0x46) = sVar3;
  *(short *)(param_1 + 0x12) = sVar3 + 1;
  *(short *)((int)param_1 + 0x4a) = sVar3 + 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((char)param_1[9] == '\0') {
    param_1[0x14] = param_1[7] * param_1[8];
  }
  else {
    param_1[0x14] = param_1[7];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puStack_14 = (undefined1 *)0x51c6ff;
  iVar4 = FUN_0051c2f8(PTR_LAB_0051c284,1,param_2);
  param_1[0xb] = iVar4;
  puStack_18 = &LAB_0051c77e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(iVar4 + 8) = param_1[2];
  *(int *)(iVar4 + 0xc) = param_1[3];
  if (((param_1[10] == 0) || (param_1[8] < 1)) || (param_1[7] < 1)) {
    puStack_14 = &stack0xfffffffc;
    (**(code **)*param_1)(param_1,(int)(short)param_1[0x12]);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 8))();
    (**(code **)*param_1)(param_1,(int)(short)param_1[0x12]);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0051c785;
  puStack_18 = (undefined1 *)0x51c77d;
  FUN_00403a84(param_1[0xb],uStack_1c,puVar1);
  return;
}

