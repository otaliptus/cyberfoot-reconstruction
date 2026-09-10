// Address: 0064aa20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064aa20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar11;
  uint *in_FS_OFFSET;
  bool bVar12;
  undefined4 ****in_stack_ffffffa8;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 local_44;
  uint **local_40;
  undefined1 *local_3c;
  uint *local_38;
  uint local_34;
  int *local_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 9;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0064ae66;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  uStack_28 = uStack_28 & 0xffffff;
  local_2c = (undefined1 *)0x64aa4d;
  FUN_004048d4(&local_c);
  local_30 = (int *)&LAB_0064ab2f;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_34;
  local_38 = (uint *)0x64aa67;
  local_2c = &stack0xfffffffc;
  local_8 = FUN_00441830(PTR_DAT_004416c4,1);
  local_38 = (uint *)0x64aa77;
  FUN_004418d0(local_8,0x80000001);
  local_38 = (uint *)0x64aa86;
  FUN_00441a14(local_8,"\\Software\\Cyberfoot2015",1);
  local_38 = (uint *)0x64aa96;
  FUN_00441d94(local_8,&DAT_0064ae9c,&local_c);
  local_38 = (uint *)0x64aa9e;
  FUN_00403a84(local_8);
  local_38 = (uint *)0x64aaaa;
  local_8 = FUN_00441830(PTR_DAT_004416c4,1);
  local_38 = (uint *)0x64aaba;
  FUN_004418d0(local_8,0x80000001);
  local_38 = (uint *)0x64aac9;
  FUN_00441a14(local_8,"\\Software\\Cyberfoot2015",1);
  local_3c = &LAB_0064aaff;
  local_40 = (uint **)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_40;
  local_44 = 0x64aae7;
  local_38 = (uint *)&stack0xfffffffc;
  FUN_00441d94(local_8,&DAT_0064aeac,&local_2c);
  local_44 = 0x64aaef;
  uVar5 = FUN_0040a06c(local_2c);
  puVar3 = local_38;
  *in_FS_OFFSET = (uint)local_40;
  local_38 = (uint *)0x64ab25;
  FUN_00403a84(local_8,local_40,puVar3);
  puVar10 = local_2c;
  *in_FS_OFFSET = local_34;
  local_2c = (undefined1 *)0x64ab4b;
  iVar6 = FUN_0064365c(local_c,local_34,puVar10);
  if (iVar6 + -1 != 0 && 0 < iVar6) goto LAB_0064ae3e;
  local_2c = (undefined1 *)CONCAT31((int3)((uint)(iVar6 + -1) >> 8),DAT_0064aeb4);
  local_30 = &local_10;
  local_34 = 0x64ab6b;
  FUN_0040f7c8(local_c,&DAT_0064aec0,0);
  local_34 = 0x64ab73;
  cVar4 = FUN_00647cec(local_10);
  if (cVar4 != '\0') goto LAB_0064ae3e;
  if ((local_c != 0) && (extraout_EDX != 0 || uVar5 != 0)) {
    bVar12 = extraout_EDX == 0;
    if (bVar12) {
      bVar12 = uVar5 == 100000;
      if (99999 < uVar5) {
LAB_0064abb7:
        local_34 = 0x64abc4;
        FUN_00404cf0(local_c,"Crackx");
        if (!bVar12) {
          local_34 = 0x64abd7;
          FUN_00404cf0(local_c,"CrackX");
          if (!bVar12) {
            local_34 = 0x64abe2;
            FUN_00648a20();
            uVar1 = *(uint *)PTR_DAT_0066b580;
            local_34 = 0;
            local_38 = (uint *)0x7;
            local_3c = (undefined1 *)0x64ac1c;
            local_24 = (undefined1 *)uVar5;
            uVar8 = FUN_00405c40(uVar5,extraout_EDX);
            local_24 = (undefined1 *)(uVar8 - 0x4b);
            local_20 = (undefined1 *)(extraout_EDX_00 - (uint)(uVar8 < 0x4b));
            local_34 = 0;
            local_38 = (uint *)0x7;
            local_3c = (undefined1 *)0x64ac37;
            uVar5 = FUN_00405c40(uVar5 - uVar1,
                                 (extraout_EDX - ((int)uVar1 >> 0x1f)) - (uint)(uVar5 < uVar1));
            iVar11 = 0;
            local_34 = 0x64ac4d;
            iVar6 = FUN_00404ba4(local_c);
            if (6 < iVar6) {
              local_34 = 0x64ac5e;
              iVar6 = FUN_00404ba4(local_c);
              if (0 < iVar6) {
                iVar9 = 1;
                do {
                  if (*(char *)(local_c + -1 + iVar9) == ' ') {
                    uStack_28 = CONCAT13(1,(undefined3)uStack_28);
                  }
                  iVar9 = iVar9 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              if (uStack_28._3_1_ != '\0') {
                local_34 = 0x64ac92;
                FUN_00409724(local_c,&local_30);
                local_34 = 0x64ac9d;
                uVar7 = FUN_0040496c(&local_c,local_30);
                local_34 = CONCAT31((int3)((uint)uVar7 >> 8),DAT_0064aeb4);
                local_38 = &local_34;
                local_3c = (undefined1 *)0x64acb6;
                FUN_0040f7c8(local_c,&DAT_0064aec0,0);
                local_3c = (undefined1 *)0x64acc1;
                uVar7 = FUN_0040496c(&local_c,local_34);
                local_3c = (undefined1 *)CONCAT31((int3)((uint)uVar7 >> 8),DAT_0064aeb4);
                local_40 = &local_38;
                local_44 = 0x64acda;
                FUN_0040f7c8(local_c,&DAT_0064aec0,0);
                local_44 = 0x64ace5;
                FUN_0040496c(&local_c,local_38);
                local_44 = 0x64acf0;
                FUN_0064a6f4(local_c,&local_3c);
                local_44 = 0x64acfb;
                uVar7 = FUN_0040496c(&local_c,local_3c);
                local_44 = CONCAT31((int3)((uint)uVar7 >> 8),DAT_0064aeb4);
                local_48 = &local_40;
                local_4c = 0x64ad14;
                FUN_0040f7c8(local_c,&DAT_0064aeec,0);
                local_4c = 0x64ad1f;
                uVar7 = FUN_0040496c(&local_c,local_40);
                local_4c = CONCAT31((int3)((uint)uVar7 >> 8),DAT_0064aeb4);
                local_50 = &local_44;
                FUN_0040f7c8(local_c,&DAT_0064aef8,0);
                FUN_0040496c(&local_c,local_44);
                in_stack_ffffffa8 = &local_48;
                FUN_0040f7c8(local_c,&DAT_0064af04,0,in_stack_ffffffa8,DAT_0064aeb4);
                FUN_0040496c(&local_c,local_48);
                FUN_00409724(local_c,&local_4c);
                FUN_0040496c(&local_c,local_4c);
                FUN_0064a800(local_c,&local_50);
                FUN_0040496c(&local_c,local_50);
                iVar6 = FUN_00404ba4(local_c);
                if (0 < iVar6) {
                  iVar9 = 1;
                  do {
                    if ((*(char *)(local_c + -1 + iVar9) != ' ') &&
                       (*(char *)(local_c + -1 + iVar9) != 'A')) {
                      iVar11 = iVar11 + (uint)*(byte *)(local_c + -1 + iVar9) * iVar9 + iVar9 + 3;
                    }
                    iVar9 = iVar9 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                puVar10 = (undefined1 *)
                          (((uint)*(byte *)(local_c + 1) + (uint)*(byte *)(local_c + 2) + 5) *
                           iVar11 * 7 + 0x2a705);
                if (((undefined1 *)((int)puVar10 >> 0x1f) ==
                     (undefined1 *)(extraout_EDX_01 - (uint)(uVar5 < 0x4b)) &&
                     puVar10 == (undefined1 *)(uVar5 - 0x4b)) ||
                   (((undefined1 *)((int)puVar10 >> 0x1f) == local_20 && (puVar10 == local_24)))) {
                  iVar6 = FUN_004032c8(1000);
                  *(int *)PTR_DAT_0066b1c0 = iVar6 + 500;
                }
                else {
                  uVar7 = FUN_004032c8(100);
                  *(undefined4 *)PTR_DAT_0066b1c0 = uVar7;
                }
              }
            }
          }
        }
        goto LAB_0064ae3e;
      }
    }
    else if (-1 < extraout_EDX) goto LAB_0064abb7;
  }
  local_34 = 0x64abaa;
  uVar7 = FUN_004032c8(100);
  *(undefined4 *)PTR_DAT_0066b1c0 = uVar7;
LAB_0064ae3e:
  puVar2 = local_50;
  *in_FS_OFFSET = (uint)in_stack_ffffffa8;
  local_50 = (undefined4 *)&LAB_0064ae6d;
  FUN_004048f8(&local_50,10,puVar2);
  FUN_004048f8(&local_10,2);
  return;
}

