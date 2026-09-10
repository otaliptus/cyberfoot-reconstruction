// Address: 00522978
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00522978(int *param_1,byte param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  tagRECT local_44;
  RECT local_34;
  RECT local_24;
  int local_14;
  int local_10;
  char local_a;
  byte local_9;
  int *local_8;
  
  puStack_88 = &stack0xfffffffc;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  puStack_8c = &LAB_0052322b;
  uStack_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_90;
  puStack_94 = (undefined1 *)0x5229bd;
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  puVar12 = puStack_88;
  if (cVar1 != '\0') {
    *in_FS_OFFSET = uStack_90;
    puStack_88 = &LAB_00523232;
    puStack_8c = (undefined1 *)0x52322a;
    FUN_004048f8(&local_78,9,puVar12);
    return;
  }
  puStack_94 = (undefined1 *)0x5229cd;
  FUN_00524730(local_8);
  puStack_94 = (undefined1 *)0x5229d8;
  FUN_0041e41c(local_8[0xe]);
  puStack_98 = &LAB_00523209;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  uStack_a0 = 0;
  uStack_a4 = 0;
  puStack_a8 = (undefined1 *)0x0;
  puStack_ac = local_54;
  puStack_b0 = (undefined1 *)0x5229fb;
  puStack_94 = &stack0xfffffffc;
  FUN_0041c990(0,0,0);
  puStack_a8 = local_54;
  puStack_ac = (undefined1 *)0x522a0c;
  FUN_00406d44(&PTR_DAT_00516784,&local_58);
  puStack_ac = (undefined1 *)local_58;
  puStack_b0 = (undefined1 *)0x522a21;
  FUN_00403c80(local_8,local_8,0);
  puStack_b4 = &LAB_005231e9;
  uStack_b8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b8;
  local_10 = 0;
  puStack_b0 = &stack0xfffffffc;
  local_14 = FUN_0051aad8(local_8[0xb]);
  local_14 = local_14 * 6;
  if ((local_9 & 8) != 0) {
    iVar5 = FUN_00524230(local_8);
    if (0 < *(int *)(iVar5 + 8)) {
      piVar6 = (int *)FUN_00524230(local_8);
      (**(code **)(*piVar6 + 0x18))();
    }
    iVar5 = FUN_0051aad8(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_005212bc(local_8[0xb],iVar11);
        if (0 < *(int *)(*(int *)(iVar7 + 0x20) + 8)) {
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          (**(code **)(**(int **)(iVar7 + 0x20) + 0x18))();
          iVar7 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_0041c990(0,0,0,local_54,0);
          puVar12 = local_54;
          FUN_00406d44(&PTR_DAT_00516784,&local_5c);
          FUN_00403c80(local_8,local_8,1,local_5c,puVar12,uVar13,iVar7);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 4) == 0) {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    local_10 = local_10 + iVar5 * 2;
  }
  else {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_005212bc(local_8[0xb],iVar11);
        if (*(char *)(iVar7 + 0x34) != '\0') {
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          uVar13 = *(undefined4 *)(iVar7 + 0x1c);
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          uVar8 = FUN_00520744(*(undefined4 *)(iVar7 + 0x38));
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          cVar1 = FUN_00522960(*(undefined4 *)(iVar7 + 0x18),uVar8,uVar13);
          if (cVar1 == '\0') {
            iVar7 = FUN_005212bc(local_8[0xb],iVar11);
            FUN_00520730(*(undefined4 *)(iVar7 + 0x38),0);
            iVar7 = MulDiv(local_10,100,local_14);
            uVar13 = 0;
            FUN_0041c990(0,0,0,local_54,0);
            puVar12 = local_54;
            FUN_00406d44(&PTR_DAT_00516784,&local_60);
            FUN_00403c80(local_8,local_8,1,local_60,puVar12,uVar13,iVar7);
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_0051aad8(local_8[0xb]);
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_005212bc(local_8[0xb],iVar11);
        if (*(int *)(iVar7 + 0x38) != 0) {
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          cVar1 = FUN_005207dc(*(undefined4 *)(iVar7 + 0x38));
          if (((byte)(cVar1 - 2U) < 2) &&
             (iVar7 = FUN_005212bc(local_8[0xb],iVar11 + 1), *(char *)(iVar7 + 0x34) == '\0')) {
            uVar13 = FUN_005212bc(local_8[0xb],iVar11);
            FUN_0051e120(uVar13,&local_24);
            uVar13 = FUN_005212bc(local_8[0xb],iVar11 + 1);
            FUN_0051e120(uVar13,&local_34);
            BVar9 = IntersectRect(&local_44,&local_24,&local_34);
            if (BVar9 != 0) {
              BVar9 = EqualRect(&local_44,&local_34);
              if (BVar9 != 0) {
                iVar7 = FUN_005212bc(local_8[0xb],iVar11);
                FUN_005207ec(*(undefined4 *)(iVar7 + 0x38),0);
              }
              iVar7 = MulDiv(local_10,100,local_14);
              uVar13 = 0;
              FUN_0041c990(0,0,0,local_54,0);
              puVar12 = local_54;
              FUN_00406d44(&PTR_DAT_00516784,&local_64);
              FUN_00403c80(local_8,local_8,1,local_64,puVar12,uVar13,iVar7);
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 2) == 0) {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (0 < iVar5) {
      do {
        local_10 = local_10 + 1;
        iVar11 = iVar5;
        do {
          iVar11 = iVar11 + -1;
          if ((iVar11 < 1) ||
             (iVar7 = FUN_005212bc(local_8[0xb],iVar11), *(int *)(iVar7 + 0x38) == 0)) break;
          iVar7 = FUN_005212bc(local_8[0xb],iVar11);
          cVar1 = FUN_005207dc(*(undefined4 *)(iVar7 + 0x38));
        } while (cVar1 == '\x03');
        uVar13 = FUN_005212bc(local_8[0xb],iVar11);
        uVar8 = FUN_005212bc(local_8[0xb],iVar5);
        FUN_0051ffd0(uVar8,uVar13);
        iVar11 = MulDiv(local_10,100,local_14);
        uVar13 = 0;
        FUN_0041c990(0,0,0,local_54,0);
        puVar12 = local_54;
        FUN_00406d44(&PTR_DAT_00516784,&local_68);
        FUN_00403c80(local_8,local_8,1,local_68,puVar12,uVar13,iVar11);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 1) == 0) {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        local_10 = local_10 + 1;
        FUN_005212bc(local_8[0xb],iVar5);
        cVar1 = FUN_0051d25c();
        if ((cVar1 == '\0') &&
           (iVar11 = FUN_005212bc(local_8[0xb],iVar5), *(char *)(iVar11 + 0x34) != '\0')) {
          iVar11 = FUN_005212bc(local_8[0xb],iVar5);
          sVar3 = FUN_005207c4(*(undefined4 *)(iVar11 + 0x38));
          FUN_005212bc(local_8[0xb],iVar5);
          FUN_0051fc80();
          FUN_005212bc(local_8[0xb],iVar5);
          cVar1 = FUN_0051d25c();
          if (cVar1 != '\0') {
            if ((0 < iVar5) &&
               (iVar11 = FUN_005212bc(local_8[0xb],iVar5 + -1), *(char *)(iVar11 + 0x34) != '\0')) {
              iVar11 = FUN_005212bc(local_8[0xb],iVar5 + -1);
              sVar4 = FUN_005207c4(*(undefined4 *)(iVar11 + 0x38));
              uVar10 = (uint)(ushort)(sVar4 + sVar3);
              iVar11 = FUN_005212bc(local_8[0xb],iVar5 + -1);
              FUN_005207cc(*(undefined4 *)(iVar11 + 0x38),uVar10);
            }
            FUN_0051ab10(local_8[0xb],iVar5);
          }
          iVar11 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_0041c990(0,0,0,local_54,0);
          puVar12 = local_54;
          FUN_00406d44(&PTR_DAT_00516784,&local_6c);
          FUN_00403c80(local_8,local_8,1,local_6c,puVar12,uVar13,iVar11);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  iVar5 = FUN_0051aad8(local_8[0xb]);
  local_10 = local_10 + iVar5;
  if ((local_9 & 4) == 0) {
    if (((local_9 & 0x10) != 0) && (local_a == '\t')) {
      FUN_00406d44(&PTR_DAT_0051674c,&local_74);
      FUN_00516934(local_74);
    }
  }
  else {
    iVar5 = FUN_0051aad8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        iVar11 = FUN_005212bc(local_8[0xb],iVar5);
        iVar11 = FUN_0051aad8(*(undefined4 *)(iVar11 + 0x30));
        iVar11 = iVar11 + -1;
        if (-1 < iVar11) {
          do {
            iVar7 = FUN_005212bc(local_8[0xb],iVar5);
            uVar13 = FUN_0051cf94(*(undefined4 *)(iVar7 + 0x30),iVar11);
            cVar1 = FUN_00403c10(uVar13,PTR_PTR_005160e0);
            if (cVar1 == '\0') {
              iVar7 = FUN_005212bc(local_8[0xb],iVar5);
              uVar13 = FUN_0051cf94(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00403c10(uVar13,PTR_PTR_00516020);
              if (cVar1 != '\0') goto LAB_00523044;
              iVar7 = FUN_005212bc(local_8[0xb],iVar5);
              uVar13 = FUN_0051cf94(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00403c10(uVar13,PTR_PTR_005162d8);
              if (cVar1 != '\0') goto LAB_00523044;
              iVar7 = FUN_005212bc(local_8[0xb],iVar5);
              uVar13 = FUN_0051cf94(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00403c10(uVar13,PTR_PTR_005163ac);
              if ((cVar1 != '\0') &&
                 ((0 < iVar5 || (iVar7 = FUN_0051aad8(local_8[0xb]), iVar7 == 1))))
              goto LAB_00523044;
            }
            else {
LAB_00523044:
              iVar7 = FUN_005212bc(local_8[0xb],iVar5);
              FUN_0051ab10(*(undefined4 *)(iVar7 + 0x30),iVar11);
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != -1);
        }
        iVar11 = FUN_005212bc(local_8[0xb],iVar5);
        if (*(int *)(iVar11 + 0x38) != 0) {
          iVar11 = FUN_005212bc(local_8[0xb],iVar5);
          uVar13 = *(undefined4 *)(iVar11 + 0x38);
          sVar3 = FUN_005207c4(uVar13);
          if ((((sVar3 == 0) || (iVar11 = FUN_0051aad8(local_8[0xb]), iVar11 == 1)) &&
              (cVar1 = FUN_00520728(uVar13), cVar1 == '\0')) &&
             ((cVar1 = FUN_005207d4(uVar13), cVar1 == '\0' &&
              ((bVar2 = FUN_005207dc(uVar13), bVar2 < 2 ||
               (iVar11 = FUN_0051aad8(local_8[0xb]), iVar11 == 1)))))) {
            FUN_00403a84(uVar13);
          }
        }
        FUN_005212bc(local_8[0xb],iVar5);
        cVar1 = FUN_0051d25c();
        if (cVar1 != '\0') {
          iVar11 = FUN_005212bc(local_8[0xb],iVar5);
          iVar11 = FUN_0051aad8(*(undefined4 *)(iVar11 + 0x30));
          if (iVar11 == 0) {
            FUN_005212bc(local_8[0xb],iVar5);
            FUN_00403a84();
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    iVar5 = MulDiv(local_10,100,local_14);
    uVar13 = 0;
    FUN_0041c990(0,0,0,local_54,0);
    puVar12 = local_54;
    FUN_00406d44(&PTR_DAT_00516784,&local_70);
    FUN_00403c80(local_8,local_8,1,local_70,puVar12,uVar13,iVar5);
  }
  puVar12 = puStack_b0;
  *in_FS_OFFSET = uStack_b8;
  puStack_b0 = &LAB_005231f0;
  puStack_b4 = (undefined1 *)0x5231a1;
  iVar5 = FUN_0040288c(0,uStack_b8,puVar12);
  if (iVar5 == 0) {
    puStack_b4 = (undefined1 *)0x64;
  }
  else {
    puStack_b4 = (undefined1 *)0x0;
  }
  uStack_b8 = 0;
  FUN_0041c990(0,0,0,local_54,0);
  puVar12 = local_54;
  FUN_00406d44(&PTR_DAT_00516784,&local_78);
  FUN_00403c80(local_8,local_8,2,local_78,puVar12);
  return;
}

