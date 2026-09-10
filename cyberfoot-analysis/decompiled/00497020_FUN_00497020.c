// Address: 00497020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00497020(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  uVar5 = (uint)*pbVar6;
  if ((bVar1 != 0xff) || (uVar5 != 0xd8)) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x35;
    *(uint *)(iVar3 + 0x18) = (uint)bVar1;
    *(uint *)(iVar3 + 0x1c) = uVar5;
    (**(code **)*param_1)();
  }
  param_1[0x68] = uVar5;
  *puVar2 = pbVar6 + 1;
  puVar2[1] = iVar4 + -1;
  return 1;
}

