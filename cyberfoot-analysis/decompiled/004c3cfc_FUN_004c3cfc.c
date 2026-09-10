// Address: 004c3cfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3cfc(undefined4 param_1,short param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 4;
  do {
    local_c = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_004c3e81;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  uVar1 = *PTR_DAT_0066b70c;
  uVar2 = (uint)PTR_DAT_0066b70c >> 8;
  local_8 = param_1;
  FUN_00404928(0,param_1);
  while (*pcRam00000000 == '0') {
    uVar4 = 0;
    iVar5 = FUN_00404ba4(pcRam00000000);
    FUN_00404e04(pcRam00000000,2,iVar5 + -1,uVar4);
  }
  if (param_2 == 0) {
    FUN_00404bf0(0,&DAT_004c3e98,pcRam00000000);
  }
  else if (param_2 < 1) {
    iVar5 = FUN_00404ba4(pcRam00000000);
    if (-(int)param_2 < iVar5) {
      iVar5 = FUN_00404ba4(pcRam00000000);
      if (-(int)param_2 < iVar5) {
        FUN_00404e04(pcRam00000000,1,-(int)param_2,&local_20);
        FUN_00404abc(&local_24,CONCAT31((int3)uVar2,uVar1));
        puVar6 = &local_28;
        uVar4 = FUN_00404ba4(pcRam00000000);
        FUN_00404e04(pcRam00000000,1 - param_2,uVar4,puVar6);
        FUN_00404c64(0,3);
      }
    }
    else {
      iVar5 = FUN_00404ba4(pcRam00000000);
      FUN_00404f94(0x30,-iVar5 - (int)param_2,&stack0xffffffe4);
      FUN_00404bac(0,unaff_EDI);
    }
  }
  else {
    FUN_004030d4(local_10,&DAT_004c3e9c);
    FUN_004030a4(local_10,&stack0xffffffec,2);
    FUN_00404b48(&local_c,local_10);
    FUN_00404f94(0x30,(int)param_2,&stack0xffffffe8,local_c);
    FUN_00404c64(0,3);
  }
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_004c3e88;
  local_24 = (undefined1 *)0x4c3e78;
  FUN_004048f8(&local_28,5,puVar3);
  local_24 = (undefined1 *)0x4c3e80;
  FUN_004048d4(&local_c);
  return;
}

