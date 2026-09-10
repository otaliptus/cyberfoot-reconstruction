// Address: 00519b7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00519b7c(int *param_1,char param_2,undefined1 param_3,undefined4 param_4,byte param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined4 *in_FS_OFFSET;
  HGDIOBJ pvVar10;
  undefined4 uVar11;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined2 local_2b;
  undefined1 local_29;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  HGDIOBJ local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_3c = (undefined1 *)0x519b99;
  local_9 = param_3;
  local_8 = param_1;
  local_10 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_40 = &LAB_00519fe0;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  if (param_2 == '\0') {
    puStack_48 = (undefined1 *)0x519bb9;
    puStack_3c = &stack0xfffffffc;
    (**(code **)(*local_10 + 8))(local_10,local_8);
    puStack_48 = (undefined1 *)0x519bc3;
    FUN_00516c18(local_10,6);
    *in_FS_OFFSET = uStack_44;
  }
  else {
    puStack_48 = (undefined1 *)0x519bd8;
    puStack_3c = &stack0xfffffffc;
    iVar3 = (**(code **)(*local_8 + 0x2c))();
    puStack_48 = (undefined1 *)0x519be2;
    iVar4 = (**(code **)(*local_8 + 0x20))();
    if (500000 < iVar3 * iVar4) {
      puStack_48 = (undefined1 *)0x519bf7;
      FUN_00516c18(local_10,1);
    }
    local_18 = 0;
    local_1c = (int *)0x0;
    local_24 = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_14 = (HGDIOBJ)0x0;
    puStack_4c = &LAB_00519fcf;
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    puStack_48 = &stack0xfffffffc;
    local_28 = (undefined4 *)FUN_00516d7c(PTR_PTR_00516c7c,1,local_8,6);
    switch(param_2) {
    default:
      FUN_004042fc();
      *in_FS_OFFSET = uStack_44;
      return local_10;
    case '\x01':
      local_14 = GetStockObject(0xf);
      break;
    case '\x02':
      local_14 = (HGDIOBJ)FUN_00519b24();
      break;
    case '\x03':
      local_14 = (HGDIOBJ)FUN_00519ac8();
      break;
    case '\x04':
      local_14 = (HGDIOBJ)FUN_00519a6c();
      break;
    case '\x05':
      local_14 = (HGDIOBJ)FUN_00519a1c();
      break;
    case '\x06':
      local_14 = (HGDIOBJ)FUN_0051678c();
      break;
    case '\a':
      local_14 = (HGDIOBJ)FUN_00519874(local_28,1 << (param_5 & 0x1f),8,0);
      break;
    case '\b':
      local_14 = (HGDIOBJ)FUN_005199b4(local_8,0x100,8,1);
      break;
    case '\t':
      local_14 = (HGDIOBJ)FUN_0042fa48(param_4);
    }
    if (param_2 == '\x04') {
      local_18 = FUN_005177d4(PTR_PTR_005174dc,1,local_14);
    }
    else if (param_2 == '\x05') {
      local_18 = FUN_00517758(PTR_PTR_00517474,1,local_14);
    }
    else if (param_2 == '\x06') {
      local_18 = FUN_00517698(PTR_PTR_00517408,1,local_14);
    }
    else if (param_2 == '\a') {
      local_18 = FUN_00517580(PTR_PTR_005173a0,1,local_14);
    }
    else {
      local_18 = FUN_00517580(PTR_PTR_005173a0,1,local_14);
    }
    if (*(int *)(local_18 + 4) != 0) {
      switch(local_9) {
      case 0:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_00517bcc(PTR_LAB_00517870,1,uVar5,iVar3);
        break;
      case 1:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_00517c80(PTR_PTR_005178d8,1,uVar5,iVar3);
        break;
      case 2:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_00518530(PTR_PTR_005179b4,1,uVar5,iVar3);
        break;
      case 3:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_005185e8(PTR_PTR_00517a20,1,uVar5,iVar3);
        break;
      case 4:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_0051869c(PTR_PTR_00517a8c,1,uVar5,iVar3);
        break;
      case 5:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_00518760(PTR_PTR_00517af8,1,uVar5,iVar3);
        break;
      case 6:
        iVar3 = local_18;
        uVar5 = (**(code **)(*local_8 + 0x2c))();
        local_1c = (int *)FUN_00518f00(PTR_PTR_00517b64,1,uVar5,iVar3);
        break;
      default:
        FUN_004042fc();
        *in_FS_OFFSET = uStack_44;
        return local_10;
      }
      uVar11 = 3;
      uVar5 = (**(code **)(*local_8 + 0x2c))();
      uVar6 = (**(code **)(*local_8 + 0x20))();
      pvVar10 = local_14;
      local_24 = (undefined4 *)FUN_00516e04(PTR_PTR_00516cd8,1,local_10,local_14,uVar6,uVar5,uVar11)
      ;
      local_20 = 0;
      while (iVar3 = (**(code **)(*local_8 + 0x20))(), local_20 < iVar3) {
        iVar3 = (**(code **)*local_28)(local_28,local_20);
        iVar4 = (**(code **)*local_24)(local_24,local_20);
        puVar8 = (undefined2 *)(local_1c[2] * 3 + iVar3);
        puVar9 = (undefined1 *)(local_1c[2] + iVar4);
        while ((iVar3 = local_1c[2], iVar3 < local_1c[4] && (-1 < iVar3))) {
          uVar1 = *puVar8;
          local_29 = *(undefined1 *)(puVar8 + 1);
          local_2b._0_1_ = (undefined1)uVar1;
          uVar6 = CONCAT31((int3)(CONCAT22((short)((uint)iVar3 >> 0x10),uVar1) >> 8),
                           (undefined1)local_2b);
          local_2b._1_1_ = (undefined1)((ushort)uVar1 >> 8);
          uVar2 = local_2b._1_1_;
          local_2b = uVar1;
          uVar2 = (**(code **)(*local_1c + 4))
                            (local_1c,local_29,uVar2,&local_2b,(int)&local_2b + 1,&local_29,uVar6);
          *puVar9 = uVar2;
          puVar8 = (undefined2 *)((int)puVar8 + local_1c[1] * 3);
          puVar9 = puVar9 + local_1c[1];
        }
        local_20 = local_20 + 1;
        (**(code **)(*local_1c + 8))();
      }
      piVar7 = (int *)0x0;
      *in_FS_OFFSET = pvVar10;
      if (local_18 != 0) {
        piVar7 = (int *)FUN_00403a84(local_18,pvVar10,uVar5,&DAT_00519fd6);
      }
      if (local_1c != (int *)0x0) {
        piVar7 = (int *)FUN_00403a84(local_1c);
      }
      if (local_24 != (undefined4 *)0x0) {
        piVar7 = (int *)FUN_00403a84(local_24);
      }
      if (local_28 != (undefined4 *)0x0) {
        piVar7 = (int *)FUN_00403a84(local_28);
      }
      if (local_14 != (HGDIOBJ)0x0) {
        piVar7 = (int *)DeleteObject(local_14);
      }
      return piVar7;
    }
    FUN_004042fc();
    *in_FS_OFFSET = uStack_44;
  }
  return local_10;
}

