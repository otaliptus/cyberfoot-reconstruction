// Address: 004c38a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c38a4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  char **local_5c;
  char **local_58;
  char **local_54;
  char ***local_50;
  char **local_4c;
  char ***local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  char *local_38;
  undefined4 local_34;
  undefined1 **ppuStack_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = 10;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_004c3b08;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  ppuStack_30 = &local_24;
  local_34 = 0x4c38e4;
  local_8 = local_14;
  local_34 = FUN_00404ba4(param_1);
  local_38 = (char *)0x4c38ec;
  local_38 = (char *)FUN_00404ba4(param_2);
  local_3c = &local_c;
  local_40 = &local_10;
  local_44 = &local_8;
  local_48 = (char ***)0x4c3905;
  FUN_004c3038(param_1,param_2,&stack0xffffffe0);
  local_48 = (char ***)0x4c390d;
  local_28 = (undefined1 *)FUN_00404ba4(unaff_EDI);
  local_48 = (char ***)0x4c3918;
  local_2c = FUN_00404ba4(local_24);
  local_48 = (char ***)0x4c3923;
  iVar2 = FUN_00404da4(local_24);
  local_48 = (char ***)0x4c392d;
  FUN_004048d4(&local_14);
  iVar4 = local_10 + -1;
  if (-1 < iVar4) {
    do {
      if (local_c < 9) {
        local_48 = (char ***)0x4c3948;
        iVar3 = FUN_00409ff8(unaff_EDI);
        local_4c = (char **)(iVar3 * (*(byte *)(iVar2 + iVar4) - 0x30));
        local_48 = (char ***)0x0;
        local_50 = (char ***)0x4c395e;
        FUN_00409fa8(&local_34);
        local_48 = (char ***)0x4c396c;
        FUN_00404bf0(&stack0xffffffe4,local_34,local_14);
      }
      else {
        local_4c = (char **)CONCAT31((int3)((uint)unaff_EDI >> 8),*(char *)(iVar2 + iVar4) + -0x30);
        local_50 = (char ***)&local_38;
        local_54 = (char **)0x4c3981;
        FUN_004c37f0();
        local_48 = (char ***)0x4c398f;
        FUN_00404bf0(&stack0xffffffe4,local_38,local_14);
      }
      local_48 = (char ***)0x4c399d;
      FUN_004c32a0(unaff_ESI,unaff_EBX,&local_3c);
      local_48 = (char ***)0x4c39a8;
      FUN_0040496c(&stack0xffffffe8,local_3c);
      local_48 = (char ***)0x4c39b5;
      FUN_00404bac(&local_14,&DAT_004c3b20);
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  local_48 = (char ***)0x4c39c9;
  FUN_00404928(0,unaff_EBX);
  while (*(char *)pppcRam00000000 == '0') {
    local_48 = (char ***)0x0;
    local_4c = (char **)0x4c39d3;
    iVar2 = FUN_00404ba4(pppcRam00000000);
    local_4c = (char **)0x4c39e2;
    FUN_00404e04(pppcRam00000000,2,iVar2 + -1);
  }
  if (local_8 != -0xff) {
    local_48 = (char ***)0x4c39fd;
    iVar2 = FUN_00404ba4(pppcRam00000000);
    iVar2 = iVar2 - local_8;
    if (iVar2 == 0) {
      local_48 = (char ***)0x4c3a13;
      FUN_004030d4(&local_44,&DAT_004c3b24);
      local_48 = (char ***)0x4c3a2c;
      FUN_004030a4(&local_44,&local_48,2);
      local_48 = (char ***)0x4c3a37;
      FUN_00404b48(&local_40,&local_44);
      local_48 = (char ***)0x4c3a43;
      FUN_00404bf0(0,local_40,pppcRam00000000);
    }
    else if (iVar2 < 1) {
      if (iVar2 < 0) {
        local_48 = (char ***)0x4c3a9d;
        FUN_00404abc(&local_58,(uint)ppuStack_30 >> 0x18);
        local_48 = (char ***)local_58;
        local_4c = (char **)0x4c3aae;
        FUN_00404f94(0x30,-iVar2,&local_5c);
        local_4c = local_5c;
        local_50 = pppcRam00000000;
        local_54 = (char **)0x4c3abf;
        FUN_00404c64(0,3);
      }
    }
    else {
      local_48 = &local_4c;
      local_4c = (char **)0x4c3a5b;
      FUN_00404e04(pppcRam00000000,1,iVar2);
      local_48 = (char ***)local_4c;
      local_4c = (char **)0x4c3a69;
      FUN_00404abc(&local_50,(uint)ppuStack_30 >> 0x18);
      local_4c = (char **)local_50;
      local_50 = &local_54;
      local_54 = (char **)0x4c3a7d;
      FUN_00404e04(pppcRam00000000,iVar2 + 1,local_8);
      local_50 = (char ***)local_54;
      local_54 = (char **)0x4c3a8c;
      FUN_00404c64(0,3);
    }
    if (0x400 < (int)local_28 + local_2c) {
      local_48 = (char ***)0x4c3ad3;
      FUN_004048d4(0);
    }
  }
  piVar1 = local_3c;
  *in_FS_OFFSET = (int)local_44;
  local_3c = (int *)&LAB_004c3b0f;
  local_40 = (int *)0x4c3aed;
  FUN_004048f8(&local_5c,5,piVar1);
  local_40 = (int *)0x4c3afa;
  FUN_004048f8(&local_40,4);
  local_40 = (int *)0x4c3b07;
  FUN_004048f8(&local_24,5);
  return;
}

