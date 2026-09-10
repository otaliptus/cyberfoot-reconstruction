// Address: 004c4a7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c4a7c(byte *param_1,byte *param_2,ushort param_3,ushort param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 local_7;
  byte local_6;
  
  local_7 = 1;
  if ((*param_1 == param_3) && ((param_1[1] & 0x3f) == param_4)) {
    pbVar5 = param_2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pbVar5 = pbVar5 + 4;
    }
    *(undefined2 *)pbVar5 = *(undefined2 *)param_1;
  }
  else {
    bVar1 = param_1[1];
    local_6 = (byte)param_3;
    *param_2 = local_6;
    param_2[1] = (byte)param_4;
    FUN_004032a8(param_2 + 2,0x20,0);
    if (param_3 < *param_1) {
      uVar2 = FUN_004c47d4();
      if (param_3 < uVar2) {
        local_7 = 0;
        goto LAB_004c4b57;
      }
    }
    FUN_004c4430();
    if (((bVar1 & 0x80) != 0) && ((param_2[1] & 0x80) == 0)) {
      bVar1 = FUN_004c4a30(param_2[1]);
      param_2[1] = bVar1;
    }
  }
LAB_004c4b57:
  bVar1 = *param_2 >> 1;
  uVar2 = (ushort)bVar1;
  if ((*param_2 & 1) == 1) {
    uVar2 = bVar1 + 1;
  }
  uVar3 = (uint)(short)uVar2;
  if (uVar3 < 0x20) {
    do {
      param_2[uVar3 + 2] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x20);
  }
  return CONCAT31((int3)(uVar3 >> 8),local_7);
}

