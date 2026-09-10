// Address: 00496f0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00496f0c(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar5 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pbVar5 = (byte *)*puVar2;
      iVar4 = puVar2[1];
    }
    bVar1 = *pbVar5;
    while( true ) {
      iVar4 = iVar4 + -1;
      pbVar5 = pbVar5 + 1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 1;
      *puVar2 = pbVar5;
      puVar2[1] = iVar4;
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      bVar1 = *pbVar5;
    }
    do {
      if (iVar4 == 0) {
        iVar4 = (*(code *)puVar2[3])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = (byte *)*puVar2;
        iVar4 = puVar2[1];
      }
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    *(int *)(param_1[0x6e] + 0x18) = *(int *)(param_1[0x6e] + 0x18) + 2;
    *puVar2 = pbVar5;
    puVar2[1] = iVar4;
  }
  if (*(int *)(param_1[0x6e] + 0x18) != 0) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x74;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1[0x6e] + 0x18);
    *(uint *)(iVar3 + 0x1c) = uVar6;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x6e] + 0x18) = 0;
  }
  param_1[0x68] = uVar6;
  *puVar2 = pbVar5;
  puVar2[1] = iVar4;
  return 1;
}

