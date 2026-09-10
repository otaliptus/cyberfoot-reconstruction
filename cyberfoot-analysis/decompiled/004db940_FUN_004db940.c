// Address: 004db940
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db940(ushort param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined *puVar4;
  
  local_1c = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uStack_8 = (uint)param_1 << 0x10;
  local_20 = &LAB_004dbaf6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar4 = PTR_DAT_0066adfc;
  if (*PTR_DAT_0066adfc != '\0') {
    uStack_8._2_1_ = (char)param_1;
    cVar2 = uStack_8._2_1_;
    bVar3 = uStack_8._2_1_ - 8;
    puVar4 = (undefined *)CONCAT31((int3)((uint)PTR_DAT_0066adfc >> 8),bVar3);
    bVar6 = bVar3 < 0x7f;
    if (bVar3 < 0x80) {
      puVar4 = (undefined *)(uint)bVar3;
      bVar6 = ((byte)(&DAT_004dbb04)[(int)puVar4 >> 3] >> ((uint)puVar4 & 7) & 1) != 0;
    }
    if (!bVar6) {
      if ((byte)(uStack_8._2_1_ - 0x30U) < 10) {
        local_28 = 0x4db9c4;
        uVar5 = FUN_004db894(cVar2);
        local_28 = 0x4db9ce;
        FUN_00405118(&local_c,uVar5);
      }
      else if ((byte)(uStack_8._2_1_ + 0xbfU) < 0x1a) {
        local_28 = 0x4db9d9;
        local_1c = &stack0xfffffffc;
        uVar5 = FUN_004db894(cVar2);
        local_28 = 0x4db9e3;
        FUN_00405118(&local_c,uVar5);
      }
      else if ((byte)(uStack_8._2_1_ + 0xa0U) < 10) {
        local_28 = 0x4db9ee;
        local_1c = &stack0xfffffffc;
        uVar5 = FUN_004db894(cVar2);
        local_28 = 0x4db9f8;
        FUN_00405118(&local_c,uVar5);
      }
      else {
        local_28 = 0x4dba06;
        local_1c = &stack0xfffffffc;
        FUN_004db7a4(param_1,&local_c);
      }
      bVar6 = true;
      local_28 = 0x4dba10;
      FUN_00405378(local_c);
      if (bVar6) {
        local_28 = 0x4dbaa8;
        FUN_00404ff0(param_2);
      }
      else {
        local_28 = 0x4dba1d;
        FUN_00404ff0(param_2);
        if ((uStack_8 & 0x20000000) != 0) {
          local_28 = 0x4dba30;
          FUN_00406d44(PTR_PTR_0066ac9c,&stack0xffffffe8);
          local_28 = 0x4dba3b;
          FUN_004051d4(&stack0xffffffec,unaff_ESI);
          local_28 = 0x4dba45;
          FUN_0040526c(param_2,unaff_EBX);
        }
        if ((uStack_8 & 0x40000000) != 0) {
          local_28 = 0x4dba58;
          FUN_00406d44(PTR_PTR_0066adb8,&local_20);
          local_28 = 0x4dba63;
          FUN_004051d4(&local_1c,local_20);
          local_28 = 0x4dba6d;
          FUN_0040526c(param_2,local_1c);
        }
        if ((uStack_8 & 0x80000000) != 0) {
          local_28 = 0x4dba80;
          FUN_00406d44(PTR_PTR_0066aebc,&local_28);
          uVar5 = local_28;
          local_28 = 0x4dba8b;
          FUN_004051d4(&local_24,uVar5);
          local_28 = 0x4dba95;
          FUN_0040526c(param_2,local_24);
        }
        local_28 = 0x4dba9f;
        FUN_0040526c(param_2,local_c);
      }
      goto LAB_004dbaa8;
    }
  }
  local_28 = 0x4db993;
  local_1c = &stack0xfffffffc;
  FUN_00476234(CONCAT22((short)((uint)puVar4 >> 0x10),param_1),&local_10);
  local_28 = 0x4db99d;
  FUN_004051d4(param_2,local_10);
LAB_004dbaa8:
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_004dbafd;
  local_20 = (undefined1 *)0x4dbabd;
  FUN_004048d4(&local_28,local_24,puVar1);
  local_20 = (undefined1 *)0x4dbac5;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x4dbacd;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x4dbad5;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x4dbadd;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x4dbae5;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x4dbaed;
  FUN_004048d4(&local_10);
  local_20 = (undefined1 *)0x4dbaf5;
  FUN_00404ff0(&local_c);
  return;
}

