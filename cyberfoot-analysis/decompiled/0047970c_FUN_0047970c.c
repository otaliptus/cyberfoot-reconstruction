// Address: 0047970c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047970c(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int *local_24;
  undefined1 local_1e;
  char local_1d;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_5c = &stack0xfffffffc;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_8 = 0;
  local_1c = 0;
  puStack_60 = &LAB_00479bab;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  local_1e = 0;
  puVar8 = &stack0xfffffffc;
  local_1d = param_2;
  if (param_2 != '\0') {
LAB_00479768:
    puStack_5c = puVar8;
    puStack_68 = (undefined1 *)0x479776;
    FUN_0040496c(&local_8,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_006630f4);
    local_10 = (int *)0x0;
    local_18 = (int *)0x0;
    local_24 = (int *)0x0;
    local_c = (int *)0x0;
    local_14 = 0;
    puStack_6c = &LAB_00479b6c;
    uStack_70 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_70;
    puStack_68 = &stack0xfffffffc;
    local_10 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    local_18 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    local_24 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    local_c = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    iVar2 = FUN_00478b4c(param_1);
    if (-1 < iVar2 + -1) {
      iVar6 = 0;
      local_3c = iVar2;
      do {
        iVar2 = FUN_00478b5c(param_1,iVar6);
        uVar7 = *(char *)(iVar2 + 0x3e) == '\0';
        if (!(bool)uVar7) {
          iVar2 = FUN_00478b5c(param_1,iVar6);
          FUN_00404cf0(*(undefined4 *)(iVar2 + 0x30),&DAT_00479bc4);
          if ((!(bool)uVar7) && (iVar2 = FUN_00478b5c(param_1,iVar6), *(int *)(iVar2 + 0x30) != 0))
          {
            iVar2 = FUN_00478b5c(param_1,iVar6);
            FUN_0047b6ac(*(undefined4 *)(iVar2 + 0x30),&local_40);
            FUN_004095b0(local_40,&local_30);
            if (local_30 == 0) {
              uVar3 = FUN_00478b5c(param_1,iVar6);
              iVar2 = FUN_00478b5c(param_1,iVar6);
              (**(code **)(*local_24 + 100))(local_24,0,*(undefined4 *)(iVar2 + 0x30),uVar3);
            }
            else {
              iVar2 = FUN_0040f024(local_30,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_006630f4);
              if ((iVar2 != 0) &&
                 (puVar8 = &stack0xfffffffc, cVar1 = FUN_004794f8(local_30), cVar1 == '\0')) {
                iVar2 = FUN_00478b5c(param_1,iVar6,puVar8);
                iVar2 = iVar2 + 0x30;
                iVar5 = FUN_00478b5c(param_1,iVar6);
                FUN_0047b618(*(undefined4 *)(iVar5 + 0x30),&local_44);
                FUN_00404928(iVar2,local_44);
                uVar3 = FUN_00478b5c(param_1,iVar6);
                iVar2 = FUN_00478b5c(param_1,iVar6);
                (**(code **)(*local_24 + 100))(local_24,0,*(undefined4 *)(iVar2 + 0x30),uVar3);
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    FUN_0040496c(&local_38,local_8);
    iVar2 = (**(code **)(*local_24 + 0x14))();
    if (-1 < iVar2 + -1) {
      do {
        local_3c = iVar2;
        FUN_0040496c(&local_8,local_38);
        (**(code **)(*local_18 + 8))(local_18,local_24);
        (**(code **)(*local_10 + 0x44))();
        iVar2 = (**(code **)(*local_18 + 0x14))();
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) {
          do {
            (**(code **)(*local_18 + 0xc))(local_18,iVar2,&local_34);
            for (iVar6 = 1; iVar5 = FUN_00404ba4(local_34), iVar6 <= iVar5; iVar6 = iVar6 + 1) {
              uVar4 = (uint)*(byte *)(local_34 + -1 + iVar6);
              if (((byte)PTR_DAT_0066b77c[(int)uVar4 >> 3] >> (uVar4 & 7) & 1) == 0) {
                FUN_00404e04(local_34,iVar6,1,&local_48);
                FUN_004095b0(local_48,&local_30);
                cVar1 = FUN_004794f8(local_30);
                if (cVar1 != '\0') {
                  if (PTR_DAT_0066b7ac[0xc] == '\0') {
                    FUN_00404e8c(&DAT_00479bd0,&local_34,iVar6);
                  }
                  else {
                    FUN_004795ac(&local_34,local_30,iVar6);
                  }
                  uVar3 = (**(code **)(*local_18 + 0x18))(local_18,iVar2);
                  (**(code **)(*local_10 + 0x3c))(local_10,local_34,uVar3);
                  (**(code **)(*local_18 + 0x48))(local_18,iVar2);
                  break;
                }
              }
              else {
                iVar6 = iVar6 + 1;
              }
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
        iVar2 = (**(code **)(*local_10 + 0x14))();
        if (local_14 < iVar2) {
          FUN_00479528();
        }
        iVar2 = (**(code **)(*local_18 + 0x14))();
        if (iVar2 < 1) break;
        iVar2 = (**(code **)(*local_18 + 0x14))();
        if (-1 < iVar2 + -1) {
          iVar6 = 0;
          do {
            uVar3 = (**(code **)(*local_18 + 0x18))(local_18,iVar6);
            local_2c = (**(code **)(*local_24 + 0x5c))(local_24,uVar3);
            iVar5 = (**(code **)(*local_24 + 0x14))();
            (**(code **)(*local_24 + 0x70))(local_24,local_2c,iVar5 + -1);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_3c = local_3c + -1;
        iVar2 = local_3c;
      } while (local_3c != 0);
    }
    if (local_14 == 0) {
      FUN_00479528();
    }
    iVar2 = (**(code **)(*local_c + 0x14))();
    local_1e = 0 < iVar2;
    iVar2 = (**(code **)(*local_c + 0x14))();
    if (-1 < iVar2 + -1) {
      iVar6 = 0;
      local_3c = iVar2;
      do {
        (**(code **)(*local_c + 0xc))(local_c,iVar6,&local_34);
        if ((((PTR_DAT_0066b7ac[0xc] != '\0') &&
             (iVar2 = FUN_0040f024(&DAT_00479bd0,local_34), iVar2 == 0)) && (local_1c != 0)) &&
           (iVar2 = FUN_0040f024(&DAT_00479bd0,local_34), iVar2 == 0)) {
          puVar9 = &local_4c;
          uVar3 = FUN_00404ba4(local_1c);
          FUN_00404e04(local_1c,uVar3,1,puVar9);
          FUN_004795ac(&local_34,local_4c,0);
          uVar3 = FUN_00404ba4(local_1c);
          FUN_00404e44(&local_1c,uVar3,1);
        }
        iVar2 = (**(code **)(*local_c + 0x18))(local_c,iVar6);
        FUN_00404928(iVar2 + 0x30,local_34);
        iVar6 = iVar6 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    puVar8 = puStack_68;
    *in_FS_OFFSET = uStack_70;
    puStack_68 = (undefined1 *)0x479b73;
    puStack_6c = (undefined1 *)0x479b53;
    FUN_00403a84(local_c,uStack_70,puVar8);
    puStack_6c = (undefined1 *)0x479b5b;
    FUN_00403a84(local_24);
    puStack_6c = (undefined1 *)0x479b63;
    FUN_00403a84(local_18);
    puStack_6c = (undefined1 *)0x479b6b;
    FUN_00403a84(local_10);
    return;
  }
  puVar8 = &stack0xfffffffc;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    puStack_68 = (undefined1 *)0x479760;
    cVar1 = FUN_00479d60(param_1);
    puVar8 = puStack_5c;
    if (cVar1 != '\0') goto LAB_00479768;
  }
  puStack_5c = puVar8;
  puVar8 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_00479bb2;
  puStack_60 = (undefined1 *)0x479b8d;
  FUN_004048f8(&local_4c,4,puVar8);
  puStack_60 = (undefined1 *)0x479b9a;
  FUN_004048f8(&local_38,3);
  puStack_60 = (undefined1 *)0x479ba2;
  FUN_004048d4(&local_1c);
  puStack_60 = (undefined1 *)0x479baa;
  FUN_004048d4(&local_8);
  return;
}

