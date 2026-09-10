// Address: 00496a08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00496a08(int *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_28;
  uint uStack_24;
  byte abStack_20 [16];
  
  puVar3 = (undefined4 *)param_1[6];
  pbVar7 = (byte *)*puVar3;
  iVar5 = puVar3[1];
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
  iVar5 = iVar5 + -1;
  pbVar8 = pbVar7 + 1;
  uVar1 = ((uint)bVar2 * 0x100 + (uint)*pbVar7) - 2;
  if ((int)uVar1 < 0xe) {
    uStack_24 = uVar1;
    if ((int)uVar1 < 1) {
      uStack_24 = 0;
    }
  }
  else {
    uStack_24 = 0xe;
  }
  uStack_28 = 0;
  pbVar7 = abStack_20;
  if (uStack_24 != 0) {
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar3[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar8 = (byte *)*puVar3;
        iVar5 = puVar3[1];
      }
      iVar5 = iVar5 + -1;
      *pbVar7 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uStack_28 = uStack_28 + 1;
      pbVar7 = pbVar7 + 1;
    } while (uStack_28 < uStack_24);
  }
  iVar6 = uVar1 - uStack_24;
  if (param_1[0x68] == 0xe0) {
    FUN_004966c4(param_1,abStack_20,uStack_24,iVar6);
  }
  else if (param_1[0x68] == 0xee) {
    FUN_00496928(param_1,abStack_20,uStack_24,iVar6);
  }
  else {
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0x44;
    *(int *)(iVar4 + 0x18) = param_1[0x68];
    (**(code **)*param_1)();
  }
  *puVar3 = pbVar8;
  puVar3[1] = iVar5;
  if (0 < iVar6) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar6);
  }
  return 1;
}

