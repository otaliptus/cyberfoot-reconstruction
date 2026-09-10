// Address: 00476234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476234(ushort param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined2 uVar4;
  uint uVar3;
  byte bVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  int local_c;
  undefined4 uStack_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  uStack_8 = (uint)param_1 << 0x10;
  uVar3 = uStack_8;
  puStack_20 = &LAB_0047641d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_8._2_1_ = (byte)param_1;
  bVar5 = uStack_8._2_1_;
  uVar2 = (uint)uStack_8._2_1_;
  uStack_8 = uVar3;
  if (uStack_8._2_1_ < 0x2d) {
    if (uVar2 - 8 < 2) {
      uVar3 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_0040496c(&local_c,*(undefined4 *)(&DAT_006630e8 + uVar3 * 4));
      goto LAB_004763a9;
    }
    if (uVar2 == 0xd) {
      puStack_1c = &stack0xfffffffc;
      FUN_0040496c(&local_c,DAT_00663114);
      goto LAB_004763a9;
    }
    if (uVar2 == 0x1b) {
      puStack_1c = &stack0xfffffffc;
      FUN_0040496c(&local_c,DAT_00663110);
      goto LAB_004763a9;
    }
    uVar4 = (undefined2)(uVar2 - 0x29 >> 0x10);
    if (uVar2 - 0x20 < 9) {
      bVar5 = uStack_8._2_1_ + 4;
      puStack_1c = &stack0xfffffffc;
      FUN_0040496c(&local_c,*(undefined4 *)(&DAT_00663088 + (uint)bVar5 * 4));
      goto LAB_004763a9;
    }
  }
  else if (uStack_8._2_1_ < 0x41) {
    if (uVar2 - 0x2d < 2) {
      bVar5 = uStack_8._2_1_ + 0xd;
      puStack_1c = &stack0xfffffffc;
      FUN_0040496c(&local_c,*(undefined4 *)(&DAT_00663054 + (uint)bVar5 * 4));
      goto LAB_004763a9;
    }
    uVar4 = (undefined2)(uVar2 - 0x3a >> 0x10);
    if (uVar2 - 0x30 < 10) {
      puStack_1c = &stack0xfffffffc;
      FUN_00404abc(&local_c,bVar5);
      goto LAB_004763a9;
    }
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      FUN_00404abc(&local_c,bVar5);
      goto LAB_004763a9;
    }
    if (uVar2 - 0x60 < 10) {
      uVar3 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00404abc(&local_c,uVar3 - 0x30);
      goto LAB_004763a9;
    }
    uVar4 = (undefined2)(uVar2 - 0x88 >> 0x10);
    if (uVar2 - 0x70 < 0x18) {
      uVar3 = (uint)uStack_8._2_1_;
      puStack_1c = &stack0xfffffffc;
      FUN_00409dd8(uVar3 - 0x6f,&local_10);
      FUN_00404bf0(&local_c,&DAT_00476434,local_10);
      goto LAB_004763a9;
    }
  }
  puStack_1c = &stack0xfffffffc;
  FUN_004761e0(CONCAT22(uVar4,param_1),&local_c);
LAB_004763a9:
  if (local_c == 0) {
    FUN_004048d4(param_2);
  }
  else {
    FUN_004048d4(param_2);
    if ((uStack_8 & 0x20000000) != 0) {
      FUN_00404bac(param_2,DAT_00663144);
    }
    if ((uStack_8 & 0x40000000) != 0) {
      FUN_00404bac(param_2,DAT_00663148);
    }
    if ((uStack_8 & 0x80000000) != 0) {
      FUN_00404bac(param_2,DAT_0066314c);
    }
    FUN_00404bac(param_2,local_c);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00476424;
  puStack_20 = (undefined1 *)0x47641c;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

