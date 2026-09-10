// Address: 00496e70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00496e70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar1 = (undefined4 *)param_1[6];
  iVar3 = puVar1[1];
  pbVar5 = (byte *)*puVar1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar1[3])(param_1,param_2,param_3,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar5 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  iVar3 = iVar3 + -1;
  pbVar6 = pbVar5 + 1;
  iVar4 = (uint)*pbVar5 << 8;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar1[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  iVar4 = iVar4 + (uint)*pbVar6 + -2;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x14) = 0x5b;
  *(int *)(iVar2 + 0x18) = param_1[0x68];
  *(int *)(iVar2 + 0x1c) = iVar4;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar1 = pbVar6 + 1;
  puVar1[1] = iVar3 + -1;
  if (0 < iVar4) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar4);
  }
  return 1;
}

