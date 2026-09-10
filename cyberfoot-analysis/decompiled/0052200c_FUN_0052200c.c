// Address: 0052200c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052200c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  BOOL BVar10;
  int iVar11;
  int iVar12;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  MSG local_40;
  DWORD local_24;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  char local_11;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  puStack_50 = &stack0xfffffffc;
  puStack_5c = &stack0xfffffffc;
  puStack_54 = &LAB_005225cf;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_60 = &LAB_005225be;
  puStack_64 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_64;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x58) & 0x20) != 0) {
    uVar6 = FUN_0042b5a8(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(local_8 + 0x74) = uVar6;
    puVar1 = puStack_5c;
    puVar2 = puStack_50;
  }
  puStack_50 = puVar2;
  puStack_5c = puVar1;
  *(undefined1 *)(local_8 + 0x78) = 1;
  do {
    if ((*(char *)(local_8 + 0x78) == '\0') || (*(char *)(local_8 + 0xd) != '\0')) break;
    *(undefined4 *)(local_8 + 0x60) = 0;
    FUN_00521f98();
    *(undefined1 *)(local_8 + 0x79) = 0;
    *(undefined1 *)(local_8 + 0x78) = 0;
    local_c = 1;
    local_10 = *(undefined4 *)(local_8 + 0x60);
    local_11 = '\0';
    local_18 = (DWORD)((*(byte *)(local_8 + 0x58) & 1) == 0);
    *(undefined1 *)(local_8 + 0x65) = 1;
    local_20 = timeGetTime();
    local_1c = 0;
    do {
      if ((((local_c == 0) && ((*(byte *)(local_8 + 0x58) & 0x10) == 0)) ||
          (*(char *)(local_8 + 0xd) != '\0')) || (*(char *)(local_8 + 0x78) != '\0')) break;
      *(undefined4 *)(local_8 + 0x60) = local_10;
      if (*(char *)(local_8 + 0x79) != '\0') {
        FUN_00521f98();
      }
      do {
        iVar12 = FUN_0051aad8(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c));
        if (((iVar12 <= *(int *)(local_8 + 0x60)) || (*(char *)(local_8 + 0xd) != '\0')) ||
           (*(char *)(local_8 + 0x78) != '\0')) break;
        FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                     *(undefined4 *)(local_8 + 0x60));
        cVar3 = FUN_0051d25c();
        if (cVar3 != '\0') break;
        if ((int)local_18 < 1) {
          Sleep(0);
        }
        else {
          FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                       *(undefined4 *)(local_8 + 0x60));
          FUN_0051ded0();
          local_24 = timeGetTime();
          iVar12 = *(int *)(local_8 + 0x5c);
          if (iVar12 < 1) {
            if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
              local_18 = DAT_00669cd8 * DAT_00669ccc;
            }
            else {
              local_18 = 0xffffffff;
            }
          }
          else {
            uVar6 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff88;
            uVar7 = (local_24 - local_20) - local_1c;
            iVar8 = (int)uVar7 >> 1;
            if (iVar8 < 0) {
              iVar8 = iVar8 + (uint)((uVar7 & 1) != 0);
            }
            local_1c = MulDiv(local_18 * DAT_00669ccc - iVar8,100,iVar12);
            *in_FS_OFFSET = uVar6;
            local_18 = local_1c;
          }
          local_20 = local_24;
          if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
            if ((int)local_18 < 1) {
              local_18 = 1;
            }
            local_24 = timeGetTime();
            while (((0 < (int)local_18 && (*(char *)(local_8 + 0xd) == '\0')) &&
                   (*(char *)(local_8 + 0x78) == '\0'))) {
              if ((int)local_18 < 100) {
                Sleep(local_18);
              }
              else {
                Sleep(100);
              }
              DVar9 = timeGetTime();
              local_18 = local_18 - (DVar9 - local_24);
              local_24 = timeGetTime();
              while (((*(char *)(local_8 + 0xd) == '\0' && (*(char *)(local_8 + 0x78) == '\0')) &&
                     (BVar10 = PeekMessageA(&local_40,(HWND)0x0,0,0,1), BVar10 != 0))) {
                if (local_40.message == 0x12) {
                  PostQuitMessage(local_40.wParam);
                  FUN_00426dac(local_8);
                }
                else {
                  TranslateMessage(&local_40);
                  DispatchMessageA(&local_40);
                }
              }
            }
          }
          else if (((0 < (int)local_18) || (*(int *)(local_8 + 0x5c) == 0)) &&
                  (DVar9 = WaitForSingleObject(*(HANDLE *)(local_8 + 0x80),local_18), DVar9 != 0x102
                  )) {
            local_1c = 0;
            local_20 = timeGetTime();
          }
        }
        if (*(char *)(local_8 + 0xd) != '\0') break;
        uVar6 = *(undefined4 *)(local_8 + 0xa0);
        FUN_00521f98();
        if (*(char *)(local_8 + 0xd) != '\0') break;
        *(undefined1 *)(local_8 + 100) = 1;
        iVar12 = FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                              *(undefined4 *)(local_8 + 0x60),uVar6);
        iVar12 = FUN_0051aad8(*(undefined4 *)(iVar12 + 0x30));
        if (-1 < iVar12 + -1) {
          iVar8 = 0;
          do {
            iVar11 = FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                  *(undefined4 *)(local_8 + 0x60));
            iVar11 = FUN_0051cf94(*(undefined4 *)(iVar11 + 0x30),iVar8);
            cVar3 = FUN_00403c10(iVar11,PTR_PTR_005163ac);
            if (cVar3 == '\0') {
              cVar3 = FUN_00403c10(iVar11,PTR_PTR_00515f4c);
              if (cVar3 != '\0') {
                uVar4 = FUN_005207dc(iVar11);
                *(undefined1 *)(local_8 + 100) = uVar4;
              }
            }
            else if (local_11 == '\0') {
              local_11 = '\x01';
              local_c = (uint)*(ushort *)(iVar11 + 0x18);
              if (((local_c == 0) || ((*(byte *)(local_8 + 0x58) & 0x10) != 0)) &&
                 ((*(byte *)(local_8 + 0x58) & 1) != 0)) {
                local_c = 0xffffffff;
              }
              local_10 = *(undefined4 *)(local_8 + 0x60);
            }
            iVar8 = iVar8 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        if (*(int *)(local_8 + 0x68) == 0) {
          FUN_005218dc(local_8);
        }
        else {
          FUN_005218dc(local_8);
        }
        *(undefined1 *)(local_8 + 0x65) = *(undefined1 *)(local_8 + 100);
        if (*(char *)(local_8 + 0xd) != '\0') break;
        local_18 = DAT_00669cd0;
        iVar12 = FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                              *(undefined4 *)(local_8 + 0x60));
        if (*(int *)(iVar12 + 0x38) != 0) {
          iVar12 = FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                *(undefined4 *)(local_8 + 0x60));
          sVar5 = FUN_005207c4(*(undefined4 *)(iVar12 + 0x38));
          if (sVar5 != 0) {
            iVar12 = FUN_005212bc(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                  *(undefined4 *)(local_8 + 0x60));
            uVar7 = FUN_005207c4(*(undefined4 *)(iVar12 + 0x38));
            local_18 = uVar7 & 0xffff;
            if ((int)local_18 < (int)DAT_00669cd4) {
              local_18 = DAT_00669cd4;
            }
            if (((int)DAT_00669cd8 < (int)local_18) && ((*(byte *)(local_8 + 0x58) & 1) == 0)) {
              local_18 = DAT_00669cd8;
            }
          }
        }
        iVar12 = *(int *)(local_8 + 0x60);
        FUN_00521f98();
        if (*(char *)(local_8 + 0xd) != '\0') break;
        if (iVar12 == *(int *)(local_8 + 0x60)) {
          *(int *)(local_8 + 0x60) = *(int *)(local_8 + 0x60) + 1;
        }
      } while ((*(byte *)(local_8 + 0x58) & 4) != 0);
      if (0 < (int)local_c) {
        local_c = local_c - 1;
      }
    } while (DAT_0052261c == (*(ushort *)(local_8 + 0x58) & DAT_0052261c));
  } while (*(char *)(local_8 + 0xd) == '\0');
  *(undefined4 *)(local_8 + 0x60) = 0xffffffff;
  uVar6 = *(undefined4 *)(local_8 + 0xbc);
  FUN_00521f98();
  puVar1 = puStack_64;
  *in_FS_OFFSET = uVar6;
  puStack_64 = &LAB_005225c5;
  if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
    FUN_00403a84(local_8,uVar6,puVar1);
  }
  return;
}

