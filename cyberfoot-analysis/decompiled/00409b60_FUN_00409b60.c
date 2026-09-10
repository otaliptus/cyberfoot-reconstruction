// Address: 00409b60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409b60(byte *param_1,char param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  char local_5;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00409cb9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_c = param_3;
  local_5 = param_2;
  iVar5 = FUN_00404ba4(param_1);
  local_10 = FUN_00404ba4(param_1);
  pbVar6 = param_1;
joined_r0x00409b9d:
  do {
    if (param_1 + iVar5 <= pbVar6) {
      FUN_00404adc(&local_18,pbVar6);
      iVar7 = FUN_00404ba4(local_18);
      if (iVar7 == local_10) {
        FUN_00404928(local_c,param_1);
      }
      else {
        FUN_004049c4(local_c,0,local_10);
        pbVar6 = (byte *)*local_c;
        pbVar4 = param_1;
        while (pbVar2 = pbVar4, pbVar2 < param_1 + iVar5) {
          bVar1 = *pbVar2;
          if (bVar1 == 10) {
            if (local_5 == '\x01') {
              *pbVar6 = 0xd;
              pbVar6 = pbVar6 + 1;
            }
            *pbVar6 = 10;
            pbVar6 = pbVar6 + 1;
            pbVar4 = pbVar2 + 1;
          }
          else if (bVar1 == 0xd) {
            if (local_5 == '\x01') {
              *pbVar6 = 0xd;
              pbVar6 = pbVar6 + 1;
            }
            *pbVar6 = 10;
            pbVar6 = pbVar6 + 1;
            pbVar4 = pbVar2 + 1;
            if (pbVar2[1] == 10) {
              pbVar4 = pbVar2 + 2;
            }
          }
          else if ((*(byte *)((int)&DAT_00662134 + ((int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) == 0
                  ) {
            *pbVar6 = *pbVar2;
            pbVar6 = pbVar6 + 1;
            pbVar4 = pbVar2 + 1;
          }
          else {
            local_14 = FUN_0040ef84(pbVar2);
            FUN_00402a04(pbVar2,pbVar6,local_14);
            pbVar6 = pbVar6 + local_14;
            pbVar4 = pbVar2 + local_14;
          }
        }
      }
      puVar3 = puStack_28;
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_00409cc0;
      puStack_2c = (undefined1 *)0x409cb8;
      FUN_004048d4(&local_18,uStack_30,puVar3);
      return;
    }
    bVar1 = *pbVar6;
    if (bVar1 == 10) {
      if (local_5 == '\x01') {
        local_10 = local_10 + 1;
      }
    }
    else if (bVar1 == 0xd) {
      if (local_5 == '\x01') {
        if (pbVar6[1] == 10) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          local_10 = local_10 + 1;
        }
      }
      else if (pbVar6[1] == 10) {
        local_10 = local_10 + -1;
      }
    }
    else if ((*(byte *)((int)&DAT_00662134 + ((int)(uint)bVar1 >> 3)) >> (bVar1 & 7) & 1) != 0) {
      pbVar6 = (byte *)FUN_0040efa4(pbVar6);
      goto joined_r0x00409b9d;
    }
    pbVar6 = pbVar6 + 1;
  } while( true );
}

