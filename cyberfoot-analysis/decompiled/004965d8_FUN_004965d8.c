// Address: 004965d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004965d8(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  puVar3 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar3;
  iVar5 = puVar3[1];
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  bVar2 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  pbVar7 = pbVar6 + 1;
  if ((uint)bVar2 * 0x100 + (uint)*pbVar6 != 4) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)();
  }
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar5 = iVar5 + -1;
  bVar2 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  if (iVar5 == 0) {
    iVar5 = (*(code *)puVar3[3])(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*puVar3;
    iVar5 = puVar3[1];
  }
  iVar1 = (uint)bVar2 * 0x100 + (uint)*pbVar7;
  iVar4 = *param_1;
  *(undefined4 *)(iVar4 + 0x14) = 0x52;
  *(int *)(iVar4 + 0x18) = iVar1;
  (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x45] = iVar1;
  *puVar3 = pbVar7 + 1;
  puVar3[1] = iVar5 + -1;
  return 1;
}

