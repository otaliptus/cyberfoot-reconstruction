// Address: 004c45e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c45e0(int param_1,char *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  ushort local_c;
  char local_a;
  undefined1 local_9;
  char *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004c47b5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = *PTR_DAT_0066b70c;
  uVar3 = (uint)PTR_DAT_0066b70c >> 8;
  local_8 = param_2;
  FUN_00404da4(param_1);
  cVar5 = FUN_004c4560();
  bVar10 = cVar5 == '\0';
  if (bVar10) {
    FUN_00404cf0(param_1,&DAT_004c47d0);
    if ((bVar10) || (param_1 == 0)) {
      local_9 = 1;
      *local_8 = '\b';
      local_8[1] = '\x02';
      FUN_004032a8(local_8 + 2,0x20,0);
    }
    else {
      local_9 = 1;
      local_a = '\0';
      FUN_00404abc(&local_10,CONCAT31((int3)uVar3,uVar1));
      uVar6 = FUN_00404ee8(local_10,param_1);
      pbVar7 = (byte *)FUN_00404da4(param_1);
      while( true ) {
        bVar2 = *pbVar7;
        if ((((byte)(&DAT_006695d4)[(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) == 0) &&
           (bVar2 != 0x30)) break;
        pbVar7 = pbVar7 + 1;
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
        }
      }
      iVar8 = FUN_0040a760(pbVar7);
      pbVar9 = pbVar7 + iVar8 + -1;
      while (((byte)(&DAT_006695d4)[(int)(uint)*pbVar9 >> 3] >> (*pbVar9 & 7) & 1) != 0) {
        *pbVar9 = 0;
        pbVar9 = pbVar9 + -1;
      }
      if ((*pbVar7 == 0x2d) && (local_a = '\x01', uVar6 != 0)) {
        uVar6 = uVar6 - 1;
      }
      if ((*pbVar7 == 0x2d) || (*pbVar7 == 0x2b)) {
        pbVar7 = pbVar7 + 1;
      }
      FUN_004032a8(local_8 + 2,0x20,0);
      if ((*pbVar7 == 0x30) && (pbVar7 = pbVar7 + 1, uVar6 != 0)) {
        uVar6 = uVar6 - 1;
      }
      local_c = FUN_0040a760(pbVar7);
      if (0x40 < local_c) {
        if ((uVar6 == 0) || (0x40 < uVar6)) {
          *local_8 = (char)local_c;
          goto LAB_004c479f;
        }
        local_c = 0x40;
      }
      if (local_c == 0) {
        *local_8 = '\n';
        local_8[1] = '\x02';
      }
      else {
        FUN_004c4514();
      }
      if (uVar6 == 0) {
        *local_8 = (char)local_c;
        if (local_a == '\0') {
          local_8[1] = '\0';
        }
        else {
          local_8[1] = -0x80;
        }
      }
      else {
        *local_8 = (char)local_c + -1;
        if (local_a == '\0') {
          local_8[1] = (char)local_c - (char)uVar6;
        }
        else {
          local_8[1] = ((char)local_c - (char)uVar6) + -0x80;
        }
      }
    }
  }
  else {
    local_9 = 0;
  }
LAB_004c479f:
  puVar4 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004c47bc;
  puStack_24 = (undefined1 *)0x4c47b4;
  FUN_004048d4(&local_10,uStack_28,puVar4);
  return;
}

