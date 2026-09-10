// Address: 00495948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00495948(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_18;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar4 = puVar3[1];
  pbVar7 = (byte *)*puVar3;
  param_1[0x37] = param_2;
  param_1[0x38] = param_3;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar2 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  param_1[0x35] = (uint)*pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar8 = pbVar7 + 1;
  param_1[8] = (uint)*pbVar7 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  param_1[8] = param_1[8] + (uint)*pbVar8;
  pbVar8 = pbVar8 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar8 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar7 = pbVar8 + 1;
  param_1[7] = (uint)*pbVar8 << 8;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  param_1[7] = param_1[7] + (uint)*pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar7 = (byte *)*puVar3;
  }
  param_1[9] = (uint)*pbVar7;
  iVar5 = *param_1;
  *(int *)(iVar5 + 0x18) = param_1[0x68];
  *(int *)(iVar5 + 0x1c) = param_1[7];
  *(int *)(iVar5 + 0x20) = param_1[8];
  *(int *)(iVar5 + 0x24) = param_1[9];
  *(undefined4 *)(*param_1 + 0x14) = 100;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6e] + 0x10) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    (**(code **)*param_1)();
  }
  if (((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x20;
    (**(code **)*param_1)();
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != param_1[9] * 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)();
  }
  if (param_1[0x36] == 0) {
    iVar5 = (**(code **)param_1[1])(param_1,1,param_1[9] * 0x54);
    param_1[0x36] = iVar5;
  }
  uStack_18 = 0;
  puVar6 = (uint *)param_1[0x36];
  do {
    iVar4 = iVar4 + -1;
    pbVar7 = pbVar7 + 1;
    if (param_1[9] <= (int)uStack_18) {
      *(undefined4 *)(param_1[0x6e] + 0x10) = 1;
      *puVar3 = pbVar7;
      puVar3[1] = iVar4;
      return 1;
    }
    puVar6[1] = uStack_18;
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar3[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    iVar4 = iVar4 + -1;
    *puVar6 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar3[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    iVar4 = iVar4 + -1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    puVar6[2] = (int)(uint)bVar1 >> 4;
    puVar6[3] = bVar1 & 0xf;
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar3[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = puVar3[1];
      pbVar7 = (byte *)*puVar3;
    }
    puVar6[4] = (uint)*pbVar7;
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x18) = *puVar6;
    *(uint *)(iVar5 + 0x1c) = puVar6[2];
    *(uint *)(iVar5 + 0x20) = puVar6[3];
    *(uint *)(iVar5 + 0x24) = puVar6[4];
    *(undefined4 *)(*param_1 + 0x14) = 0x65;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_18 = uStack_18 + 1;
    puVar6 = puVar6 + 0x15;
  } while( true );
}

