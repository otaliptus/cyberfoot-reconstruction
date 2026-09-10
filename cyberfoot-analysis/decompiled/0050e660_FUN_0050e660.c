// Address: 0050e660
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050e660(int *param_1,byte param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int iVar7;
  int iVar8;
  int *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined1 **local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 uStack_c;
  int *local_8;
  
  local_24 = &stack0xfffffffc;
  iVar6 = 7;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  uStack_c = (uint)param_2 << 0x18;
  local_28 = &LAB_0050e937;
  local_2c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_2c;
  iVar8 = 0;
  local_30 = (undefined1 **)0x50e69b;
  local_8 = param_1;
  iVar6 = (**(code **)(*param_1 + 0x11c))();
  if (-1 < iVar6 + -1) {
    local_14 = 0;
    do {
      local_30 = (undefined1 **)0x50e6bd;
      iVar3 = FUN_0050ae9c(local_8[0x135]);
      if (-1 < iVar3 + -1) {
        iVar7 = 0;
        do {
          local_30 = &local_24;
          local_34 = 0x50e6e0;
          (**(code **)(*local_8 + 0x100))(local_8,iVar7,local_14);
          local_30 = (undefined1 **)0x50e6eb;
          FUN_00404b6c(&stack0xffffffe8,local_24);
          local_30 = (undefined1 **)0x50e6f3;
          iVar4 = FUN_00404ba4(unaff_EBX);
          iVar8 = iVar8 + iVar4;
          while( true ) {
            local_30 = (undefined1 **)0x50e737;
            iVar4 = FUN_00404ee8(&DAT_0050e950,unaff_EBX);
            if (iVar4 == 0) break;
            iVar8 = iVar8 + 1;
            local_30 = (undefined1 **)0x50e705;
            iVar4 = FUN_00404ee8(&DAT_0050e950,unaff_EBX);
            local_30 = (undefined1 **)(iVar4 + 1);
            local_34 = 0x50e70f;
            iVar4 = FUN_00404ba4(unaff_EBX);
            iVar4 = iVar4 - (int)local_30;
            local_30 = (undefined1 **)0x50e71f;
            FUN_0043cd38(unaff_EBX,iVar4,&local_28);
            local_30 = (undefined1 **)0x50e72a;
            FUN_0040496c(&stack0xffffffe8,local_28);
          }
          local_30 = (undefined1 **)0x50e749;
          iVar4 = FUN_0050ae9c(local_8[0x135]);
          if (iVar7 == iVar4 + -1) {
            local_30 = (undefined1 **)0x50e759;
            iVar4 = (**(code **)(*local_8 + 0x11c))();
            if (iVar4 + -1 != local_14) {
              local_30 = (undefined1 **)0x50e76a;
              FUN_00404abc(&local_2c,uStack_c >> 0x18);
              local_30 = (undefined1 **)0x50e777;
              FUN_00404bac(&local_2c,&DAT_0050e950);
              local_30 = (undefined1 **)0x50e77f;
              iVar4 = FUN_00404ba4(local_2c);
              iVar8 = iVar8 + iVar4;
            }
          }
          else {
            local_30 = (undefined1 **)0x50e78e;
            FUN_00404abc(&local_30,uStack_c >> 0x18);
            ppuVar1 = local_30;
            local_30 = (undefined1 **)0x50e796;
            iVar4 = FUN_00404ba4(ppuVar1);
            iVar8 = iVar8 + iVar4;
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_30 = (undefined1 **)0x50e7b9;
  FUN_00404abc(&local_34,uStack_c >> 0x18);
  local_30 = (undefined1 **)0x50e7c1;
  iVar6 = FUN_00404ba4(local_34);
  local_30 = (undefined1 **)0x50e7cf;
  FUN_004049c4(0,0,iVar8 + iVar6);
  iVar8 = iRam00000000;
  local_30 = (undefined1 **)0x50e7e3;
  FUN_00402a04((int)&uStack_c + 3,iRam00000000,1);
  iVar8 = iVar8 + 1;
  local_30 = (undefined1 **)0x50e7ef;
  iVar6 = (**(code **)(*local_8 + 0x11c))();
  if (-1 < iVar6 + -1) {
    local_14 = 0;
    do {
      local_30 = (undefined1 **)0x50e811;
      iVar3 = FUN_0050ae9c(local_8[0x135]);
      if (-1 < iVar3 + -1) {
        iVar7 = 0;
        do {
          local_30 = &local_38;
          local_34 = 0x50e834;
          (**(code **)(*local_8 + 0x100))(local_8,iVar7,local_14);
          local_28 = (undefined1 *)0x50e83f;
          uVar5 = FUN_00404b6c(&stack0xffffffe8,local_38);
          local_28 = (undefined1 *)CONCAT31((int3)((uint)uVar5 >> 8),DAT_0050e954);
          local_2c = &local_3c;
          local_30 = (undefined1 **)0x50e85b;
          FUN_0040f7c8(unaff_EBX,&DAT_0050e950,&LAB_0050e960);
          local_30 = (undefined1 **)0x50e866;
          FUN_0040496c(&stack0xffffffe8,local_3c);
          local_30 = (undefined1 **)0x50e874;
          iVar4 = FUN_0050ae9c(local_8[0x135]);
          if (iVar7 == iVar4 + -1) {
            local_30 = (undefined1 **)0x50e884;
            iVar4 = (**(code **)(*local_8 + 0x11c))();
            if (iVar4 + -1 != local_14) {
              local_34 = 0x50e898;
              FUN_00404abc(&local_40,uStack_c >> 0x18);
              local_34 = local_40;
              local_38 = &DAT_0050e950;
              local_3c = 0x50e8ad;
              FUN_00404c64(&stack0xffffffe8,3);
            }
          }
          else {
            local_30 = (undefined1 **)0x50e8ba;
            FUN_00404abc(&local_44,uStack_c >> 0x18);
            local_30 = (undefined1 **)0x50e8c5;
            FUN_00404bac(&stack0xffffffe8,local_44);
          }
          local_30 = (undefined1 **)0x50e8cd;
          iVar4 = FUN_00404ba4(unaff_EBX);
          if (iVar4 != 0) {
            local_30 = (undefined1 **)0x50e8df;
            FUN_00402a04(unaff_EBX,iVar8,iVar4);
            iVar8 = iVar8 + iVar4;
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar2 = local_24;
  *in_FS_OFFSET = (int)local_2c;
  local_24 = &LAB_0050e93e;
  local_28 = (undefined1 *)0x50e911;
  FUN_004048f8(&local_44,3,puVar2);
  local_28 = (undefined1 *)0x50e919;
  FUN_00404ff0(&local_38);
  local_28 = (undefined1 *)0x50e926;
  FUN_004048f8(&local_34,4);
  local_28 = (undefined1 *)0x50e92e;
  FUN_00404ff0(&local_24);
  local_28 = (undefined1 *)0x50e936;
  FUN_004048d4(&stack0xffffffe8);
  return;
}

