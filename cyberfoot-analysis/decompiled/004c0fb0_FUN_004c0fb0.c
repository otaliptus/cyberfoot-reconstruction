// Address: 004c0fb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c0fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,int param_6,int param_7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  
  local_24 = &stack0xfffffffc;
  iVar3 = 4;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_004c1135;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_7 < param_6) {
    local_24 = &stack0xfffffffc;
    bVar1 = FUN_004c0b10(param_1,1);
    local_14 = param_7 + -1;
    if ((bVar1 & 1) != 0) {
      local_14 = -1;
    }
    FUN_00404e04(param_2,1,local_14,param_4);
    param_6 = param_6 - param_7;
    if (0 < param_6) {
      do {
        FUN_00404abc(&stack0xffffffe8,param_5);
        FUN_00404bac(param_4,unaff_EBX);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    puVar5 = &stack0xffffffe4;
    uVar2 = FUN_00404ba4(param_2);
    FUN_00404e04(param_2,local_14 + 1,uVar2,puVar5);
    FUN_00404bac(param_4,unaff_ESI);
  }
  else if (param_6 < param_7) {
    local_24 = &stack0xfffffffc;
    bVar1 = FUN_004c0b10(param_1,1);
    if ((bVar1 & 1) == 0) {
      ppuVar4 = &local_28;
      uVar2 = FUN_00404ba4(param_2);
      FUN_00404e04(param_2,param_7,uVar2,ppuVar4);
      puVar5 = local_28;
      FUN_00404e04(param_2,1,param_6 + -1,&local_2c);
      FUN_00404bf0(param_4,local_2c,puVar5);
    }
    else {
      puVar5 = &stack0xffffffe0;
      uVar2 = FUN_00404ba4(param_2);
      FUN_00404e04(param_2,param_7 - param_6,uVar2,puVar5);
      FUN_00404e04(param_2,1,0xffffffff,&local_24);
      FUN_00404bf0(param_4,local_24,unaff_EDI);
    }
  }
  else {
    FUN_00404928(param_4,param_2);
  }
  puVar5 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_004c113c;
  local_28 = (undefined1 *)0x4c1134;
  FUN_004048f8(&local_2c,6,puVar5);
  return;
}

