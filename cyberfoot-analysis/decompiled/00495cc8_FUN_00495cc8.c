// Address: 00495cc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00495cc8(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iStack_28;
  int *piStack_14;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar4 = puVar3[1];
  pbVar9 = (byte *)*puVar3;
  if (*(int *)(param_1[0x6e] + 0x10) == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3e;
    (**(code **)*param_1)();
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  bVar2 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  uVar5 = (uint)*pbVar9;
  pbVar9 = pbVar9 + 1;
  iVar7 = *param_1;
  *(undefined4 *)(iVar7 + 0x14) = 0x67;
  *(uint *)(iVar7 + 0x18) = uVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar5 * 2 + 6) || (uVar5 == 0)) || (4 < uVar5)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)();
  }
  param_1[0x52] = uVar5;
  iStack_28 = 0;
  piStack_14 = param_1 + 0x53;
  if (uVar5 != 0) {
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = puVar3[1];
        pbVar9 = (byte *)*puVar3;
      }
      iVar4 = iVar4 + -1;
      uVar6 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar3[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = puVar3[1];
        pbVar9 = (byte *)*puVar3;
      }
      iVar4 = iVar4 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      puVar8 = (uint *)param_1[0x36];
      for (iVar7 = 0; iVar7 < param_1[9]; iVar7 = iVar7 + 1) {
        if (uVar6 == *puVar8) goto LAB_00495e84;
        puVar8 = puVar8 + 0x15;
      }
      iVar7 = *param_1;
      *(undefined4 *)(iVar7 + 0x14) = 5;
      *(uint *)(iVar7 + 0x18) = uVar6;
      (**(code **)*param_1)();
LAB_00495e84:
      *piStack_14 = (int)puVar8;
      puVar8[5] = (int)(uint)bVar1 >> 4;
      puVar8[6] = bVar1 & 0xf;
      iVar7 = *param_1;
      *(uint *)(iVar7 + 0x18) = uVar6;
      *(uint *)(iVar7 + 0x1c) = puVar8[5];
      *(uint *)(iVar7 + 0x20) = puVar8[6];
      *(undefined4 *)(*param_1 + 0x14) = 0x68;
      (**(code **)(*param_1 + 4))(param_1,1);
      iStack_28 = iStack_28 + 1;
      piStack_14 = piStack_14 + 1;
    } while (iStack_28 < (int)uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar10 = pbVar9 + 1;
  param_1[100] = (uint)*pbVar9;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  iVar4 = iVar4 + -1;
  pbVar9 = pbVar10 + 1;
  param_1[0x65] = (uint)*pbVar10;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar3[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = puVar3[1];
    pbVar9 = (byte *)*puVar3;
  }
  bVar1 = *pbVar9;
  param_1[0x66] = (int)(uint)bVar1 >> 4;
  param_1[0x67] = bVar1 & 0xf;
  iVar7 = *param_1;
  *(int *)(iVar7 + 0x18) = param_1[100];
  *(int *)(iVar7 + 0x1c) = param_1[0x65];
  *(int *)(iVar7 + 0x20) = param_1[0x66];
  *(int *)(iVar7 + 0x24) = param_1[0x67];
  *(undefined4 *)(*param_1 + 0x14) = 0x69;
  (**(code **)(*param_1 + 4))(param_1,1);
  *(undefined4 *)(param_1[0x6e] + 0x14) = 0;
  param_1[0x24] = param_1[0x24] + 1;
  *puVar3 = pbVar9 + 1;
  puVar3[1] = iVar4 + -1;
  return 1;
}

