// Address: 004c2e10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2e10(undefined4 param_1,short param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_004c2f2e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = *PTR_DAT_0066b70c;
  local_c = param_3;
  local_8 = param_1;
  FUN_00404abc(&local_10,CONCAT31((int3)((uint)PTR_DAT_0066b70c >> 8),bVar1));
  sVar3 = FUN_00404ee8(local_10,local_8);
  if (sVar3 == 0) {
    sVar3 = FUN_00404ba4(local_8);
  }
  else {
    param_2 = param_2 + sVar3;
  }
  iVar4 = FUN_00404ba4(local_8);
  if ((param_2 < iVar4) && (sVar3 < param_2)) {
    iVar4 = FUN_00404da4(local_8);
    pbVar5 = (byte *)(iVar4 + param_2 + -1);
    if (0x34 < pbVar5[1]) {
      *pbVar5 = *pbVar5 + 1;
    }
    while ((0 < param_2 && ((0x39 < *pbVar5 || (bVar1 == *pbVar5))))) {
      if (bVar1 != *pbVar5) {
        *pbVar5 = 0x30;
      }
      param_2 = param_2 + -1;
      pbVar5 = pbVar5 + -1;
      if (bVar1 != *pbVar5) {
        *pbVar5 = *pbVar5 + 1;
      }
    }
    if (*pbVar5 < 0x3a) {
      FUN_00404e04(local_8,1,(int)param_2,local_c);
    }
    else {
      *pbVar5 = 0x30;
      FUN_00404e04(local_8,1,param_2 + -1,&local_14);
      FUN_00404bf0(local_c,&DAT_004c2f44,local_14);
    }
  }
  else {
    FUN_00404928(local_c,local_8);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004c2f35;
  puStack_28 = (undefined1 *)0x4c2f2d;
  FUN_004048f8(&local_14,2,puVar2);
  return;
}

