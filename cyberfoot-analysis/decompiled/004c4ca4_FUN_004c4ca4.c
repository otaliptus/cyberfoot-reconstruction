// Address: 004c4ca4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 local_70 [9];
  byte local_4c [34];
  byte local_2a [34];
  undefined4 local_8;
  
  bVar10 = 0;
  local_8 = param_3;
  FUN_004c4c28(param_1,local_2a);
  FUN_004c4c28(param_2,local_4c);
  if ((0x20 < local_2a[0]) || (0x20 < local_4c[0])) {
    uVar3 = FUN_004c4b8c(param_2);
    uVar4 = FUN_004c4b8c(param_1);
    uVar1 = FUN_004323b8(uVar4,uVar3);
    if (uVar1 < local_2a[0]) {
      uVar1 = (ushort)local_2a[0];
    }
    if (uVar1 < local_4c[0]) {
      uVar1 = (ushort)local_4c[0];
    }
    FUN_004c4ba8(local_2a,uVar1,local_70);
    puVar8 = local_70;
    pbVar9 = local_2a;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pbVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pbVar9 = pbVar9 + ((uint)bVar10 * -2 + 1) * 4;
    }
    *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
    FUN_004c4ba8(local_4c,uVar1,local_70);
    puVar8 = local_70;
    pbVar9 = local_4c;
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pbVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pbVar9 = pbVar9 + ((uint)bVar10 * -2 + 1) * 4;
    }
    *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
  }
  uVar1 = FUN_004323b8(local_2a[0],local_4c[0]);
  uVar5 = FUN_004c5670(local_4c);
  uVar5 = uVar5 & 0xffff;
  uVar2 = FUN_004c5670(local_2a);
  uVar5 = FUN_004323b8(uVar2,uVar5);
  for (; uVar1 < 0x40; uVar1 = uVar1 + 2) {
    uVar6 = FUN_004c5670(local_2a);
    iVar7 = (uint)uVar1 - (uVar5 & 0xffff);
    if ((int)((uint)local_2a[0] - (uVar6 & 0xffff)) <= iVar7) {
      uVar6 = FUN_004c5670(local_4c);
      if ((int)((uint)local_4c[0] - (uVar6 & 0xffff)) <= iVar7) break;
    }
  }
  FUN_004c4a7c(local_2a,local_8,uVar1,uVar5);
  FUN_004c4a7c(local_4c,param_5,uVar1,uVar5);
  return;
}

