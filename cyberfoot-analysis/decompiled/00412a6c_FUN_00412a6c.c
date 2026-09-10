// Address: 00412a6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00412a6c(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint local_c;
  ushort *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00412e8d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar1 = *param_1;
  local_8 = param_1;
  switch(uVar1) {
  case 0:
    local_c = 0;
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      puStack_1c = &stack0xfffffffc;
      FUN_00411500(1,3);
    }
    local_c = 0;
    break;
  case 2:
    local_c = (uint)(short)param_1[4];
    break;
  case 3:
    local_c = *(uint *)(param_1 + 4);
    break;
  case 4:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00402c38();
    if ((int)local_c >> 0x1f != extraout_EDX) {
      local_c = thunk_FUN_00402958();
    }
    break;
  case 5:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00402c38();
    if ((int)local_c >> 0x1f != extraout_EDX_00) {
      local_c = thunk_FUN_00402958();
    }
    break;
  case 6:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00402c38();
    if ((int)local_c >> 0x1f != extraout_EDX_01) {
      local_c = thunk_FUN_00402958();
    }
    break;
  case 7:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00402c38();
    if ((int)local_c >> 0x1f != extraout_EDX_02) {
      local_c = thunk_FUN_00402958();
    }
    break;
  case 8:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_004128d4(param_1);
    break;
  case 9:
  case 0xd:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00412988(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      puStack_1c = &stack0xfffffffc;
      local_c = FUN_004128d4(param_1);
    }
    else if (uVar1 == 0x101) {
      puStack_1c = &stack0xfffffffc;
      local_c = FUN_004129c4(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      puStack_1c = &stack0xfffffffc;
      cVar2 = FUN_00412a28(param_1,&local_c);
      if (cVar2 == '\0') {
        local_c = FUN_00412988(local_8);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00412988(param_1);
        break;
      case 2:
        local_c = (uint)**(short **)(param_1 + 4);
        break;
      case 3:
        local_c = **(uint **)(param_1 + 4);
        break;
      case 4:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00402c38();
        if ((int)local_c >> 0x1f != extraout_EDX_03) {
          local_c = thunk_FUN_00402958();
        }
        break;
      case 5:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00402c38();
        if ((int)local_c >> 0x1f != extraout_EDX_04) {
          local_c = thunk_FUN_00402958();
        }
        break;
      case 6:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00402c38();
        if ((int)local_c >> 0x1f != extraout_EDX_05) {
          local_c = thunk_FUN_00402958();
        }
        break;
      case 7:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00402c38();
        if ((int)local_c >> 0x1f != extraout_EDX_06) {
          local_c = thunk_FUN_00402958();
        }
        break;
      case 8:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_004128d4(param_1);
        break;
      case 0xb:
        local_c = (uint)**(short **)(param_1 + 4);
        break;
      case 0xc:
        puStack_1c = &stack0xfffffffc;
        local_c = FUN_00412a6c(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        local_c = (uint)**(char **)(param_1 + 4);
        break;
      case 0x11:
        local_c = (uint)**(byte **)(param_1 + 4);
        break;
      case 0x12:
        local_c = (uint)**(ushort **)(param_1 + 4);
        break;
      case 0x13:
        local_c = **(uint **)(param_1 + 4);
        if ((int)local_c < 0) {
          puStack_1c = &stack0xfffffffc;
          local_c = thunk_FUN_00402958(local_c,param_1);
        }
        break;
      case 0x14:
        local_c = **(uint **)(param_1 + 4);
        if ((int)local_c >> 0x1f != (*(uint **)(param_1 + 4))[1]) {
          puStack_1c = &stack0xfffffffc;
          local_c = thunk_FUN_00402958();
        }
      }
    }
    break;
  case 0xb:
    local_c = (uint)(short)param_1[4];
    break;
  case 0xc:
    puStack_1c = &stack0xfffffffc;
    local_c = FUN_00412a6c(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    local_c = (uint)(char)param_1[4];
    break;
  case 0x11:
    local_c = (uint)(byte)param_1[4];
    break;
  case 0x12:
    local_c = (uint)param_1[4];
    break;
  case 0x13:
    local_c = *(uint *)(param_1 + 4);
    if ((int)local_c < 0) {
      puStack_1c = &stack0xfffffffc;
      local_c = thunk_FUN_00402958();
    }
    break;
  case 0x14:
    local_c = *(uint *)(param_1 + 4);
    if ((int)local_c >> 0x1f != *(int *)(param_1 + 6)) {
      local_c = thunk_FUN_00402958();
    }
  }
  *in_FS_OFFSET = uStack_24;
  return local_c;
}

