// Address: 00413530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00413530(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_14 [3];
  ushort *local_8;
  
  puStack_24 = &stack0xfffffffc;
  puStack_28 = &LAB_0041393c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = *param_1;
  local_8 = param_1;
  switch(uVar1) {
  case 0:
    local_14[0] = 0;
    break;
  case 1:
    if (DAT_00662450 != '\0') {
      puStack_24 = &stack0xfffffffc;
      FUN_00411500(1,0x14);
    }
    local_14[0] = 0;
    break;
  case 2:
    local_14[0] = (uint)(short)param_1[4];
    break;
  case 3:
    local_14[0] = *(uint *)(param_1 + 4);
    break;
  case 4:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00402c38();
    break;
  case 5:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00402c38();
    break;
  case 6:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00402c38();
    break;
  case 7:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00402c38();
    break;
  case 8:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_00413378(param_1);
    break;
  case 9:
  case 0xd:
    puStack_24 = &stack0xfffffffc;
    local_14[0] = FUN_004132cc(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      puStack_24 = &stack0xfffffffc;
      local_14[0] = FUN_00413378(param_1);
    }
    else if (uVar1 == 0x101) {
      puStack_24 = &stack0xfffffffc;
      local_14[0] = FUN_00413478(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      puStack_24 = &stack0xfffffffc;
      cVar2 = FUN_004134e4(param_1,local_14);
      if (cVar2 == '\0') {
        local_14[0] = FUN_004132cc(local_8);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_004132cc(param_1);
        break;
      case 2:
        local_14[0] = (uint)**(short **)(param_1 + 4);
        break;
      case 3:
        local_14[0] = **(uint **)(param_1 + 4);
        break;
      case 4:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00402c38();
        break;
      case 5:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00402c38();
        break;
      case 6:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00402c38();
        break;
      case 7:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00402c38();
        break;
      case 8:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00413378(param_1);
        break;
      case 0xb:
        local_14[0] = (uint)**(short **)(param_1 + 4);
        break;
      case 0xc:
        puStack_24 = &stack0xfffffffc;
        local_14[0] = FUN_00413530(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        local_14[0] = (uint)**(char **)(param_1 + 4);
        break;
      case 0x11:
        local_14[0] = (uint)**(byte **)(param_1 + 4);
        break;
      case 0x12:
        local_14[0] = (uint)**(ushort **)(param_1 + 4);
        break;
      case 0x13:
        local_14[0] = **(uint **)(param_1 + 4);
        break;
      case 0x14:
        local_14[0] = **(uint **)(param_1 + 4);
      }
    }
    break;
  case 0xb:
    local_14[0] = (uint)(short)param_1[4];
    break;
  case 0xc:
    local_14[0] = FUN_00413530(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    local_14[0] = (uint)(char)param_1[4];
    break;
  case 0x11:
    local_14[0] = (uint)(byte)param_1[4];
    break;
  case 0x12:
    local_14[0] = (uint)param_1[4];
    break;
  case 0x13:
    local_14[0] = *(uint *)(param_1 + 4);
    break;
  case 0x14:
    local_14[0] = *(uint *)(param_1 + 4);
  }
  *in_FS_OFFSET = uStack_2c;
  return local_14[0];
}

