// Address: 0054d5d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054d5d8(int param_1,undefined4 param_2,LONG *param_3,char param_4,uint param_5,
                 char param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  tagRECT *ptVar5;
  tagRECT local_14;
  
  local_14.left = *param_3;
  local_14.top = param_3[1];
  local_14.right = param_3[2];
  local_14.bottom = param_3[3];
  FUN_0042ac88(*(undefined4 *)(param_1 + 0x14),1);
  if (param_6 == '\x01') {
    OffsetRect(&local_14,1,1);
    FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),0xff000014);
    if (param_4 == '\0') {
      ptVar5 = &local_14;
      uVar1 = param_5 | 5;
      uVar2 = FUN_00405260(param_2);
      uVar3 = FUN_0042b5a8(param_1);
      uVar4 = FUN_00405250(param_2);
      FUN_004d4104(uVar3,uVar4,uVar2,uVar1,ptVar5);
    }
    else {
      ptVar5 = &local_14;
      uVar1 = param_5 | 0x15;
      uVar2 = FUN_00405260(param_2);
      uVar3 = FUN_0042b5a8(param_1);
      uVar4 = FUN_00405250(param_2);
      FUN_004d4104(uVar3,uVar4,uVar2,uVar1,ptVar5);
    }
    OffsetRect(&local_14,-1,-1);
    FUN_0042a3a0(*(undefined4 *)(param_1 + 0xc),0xff000010);
    if (param_4 == '\0') {
      ptVar5 = &local_14;
      param_5 = param_5 | 5;
      uVar2 = FUN_00405260(param_2);
      uVar3 = FUN_0042b5a8(param_1);
      uVar4 = FUN_00405250(param_2);
      FUN_004d4104(uVar3,uVar4,uVar2,param_5,ptVar5);
    }
    else {
      ptVar5 = &local_14;
      param_5 = param_5 | 0x11;
      uVar2 = FUN_00405260(param_2);
      uVar3 = FUN_0042b5a8(param_1);
      uVar4 = FUN_00405250(param_2);
      FUN_004d4104(uVar3,uVar4,uVar2,param_5,ptVar5);
    }
  }
  else if (param_4 == '\0') {
    ptVar5 = &local_14;
    param_5 = param_5 | 5;
    uVar2 = FUN_00405260(param_2);
    uVar3 = FUN_0042b5a8(param_1);
    uVar4 = FUN_00405250(param_2);
    FUN_004d4104(uVar3,uVar4,uVar2,param_5,ptVar5);
  }
  else {
    ptVar5 = &local_14;
    param_5 = param_5 | 0x11;
    uVar2 = FUN_00405260(param_2);
    uVar3 = FUN_0042b5a8(param_1);
    uVar4 = FUN_00405250(param_2);
    FUN_004d4104(uVar3,uVar4,uVar2,param_5,ptVar5);
  }
  return;
}

