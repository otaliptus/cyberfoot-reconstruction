// Address: 0059affc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0059affc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_20 = &LAB_0059b74c;
  local_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_30 = 0x14;
  }
  else {
    local_30 = 10;
  }
  local_28 = L"䖉ꇨ걸f䂋謼砕暬̀䁂襈\xe445ꂡ暬謀\xe800꺀￦蕈࿀鎌\x04䀀䖉쟐ﱅ";
  local_1c = (undefined1 *)FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  local_20 = (undefined1 *)
             (*(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1);
  local_28 = L"蕈࿀鎌\x04䀀䖉쟐ﱅ";
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar2 + -1) {
    local_8 = 0;
    local_34 = iVar2;
    do {
      local_28 = L"碡暬脀쒸";
      (**(code **)(**(int **)(param_1 + 0x358) + 0x1d0))(*(int **)(param_1 + 0x358),1);
      if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
        local_28 = *(wchar_t **)
                    (PTR_DAT_0066b294 +
                    *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_8 * 0x294) * 4);
        piVar1 = *(int **)(param_1 + 0x358);
        local_2c = 0x59b0dd;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,piVar1[0x167]);
      }
      else {
        local_28 = L"Personalizado";
        local_2c = 0x59b103;
        (**(code **)(**(int **)(param_1 + 0x358) + 0x194))
                  (*(int **)(param_1 + 0x358),1,*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c));
      }
      local_2c = 0x59b116;
      FUN_004f79c8(*(int *)(param_1 + 0x358),*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c),0);
      local_24 = *(undefined1 **)(*(int *)(param_1 + 0x358) + 0x59c);
      iVar2 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + local_8 * 0x294);
      if (0 < iVar2) {
        local_c = 1;
        local_38 = iVar2;
        do {
          if (-1 < *(int *)(*(int *)PTR_DAT_0066aca0 + local_8 * 0x294 + -0x50 + local_c * 0x50)) {
            local_2c = 0x59b185;
            (**(code **)(**(int **)(param_1 + 0x358) + 0x240))
                      (*(int **)(param_1 + 0x358),local_24,1);
            local_2c = 0x59b193;
            FUN_00642c50(local_c + 0x22,&local_3c);
            local_2c = local_3c;
            piVar1 = *(int **)(param_1 + 0x358);
            local_30 = 0x59b1b2;
            (**(code **)(*piVar1 + 0x194))(piVar1,1,piVar1[0x167]);
            local_28 = *(wchar_t **)(*(int *)(param_1 + 0x358) + 0x59c);
            puVar4 = (undefined1 *)0x0;
            if (0 < local_30) {
              iVar2 = 1;
              iVar3 = local_30;
              do {
                puVar4 = puVar4 + 1;
                local_28 = L"쒃贄쁅啩ꗼ";
                local_24 = puVar4;
                FUN_004060a8(&DAT_006d23dc,PTR_DAT_005973f8,1);
                local_24 = (undefined1 *)0x59b229;
                FUN_00404b48(&local_44,
                             *(int *)PTR_DAT_0066af70 +
                             *(int *)(*(int *)PTR_DAT_0066aca0 + local_8 * 0x294 + local_c * 0x50 +
                                      -0x54 + iVar2 * 4) * 0x2f8);
                local_24 = (undefined1 *)0x59b234;
                FUN_0064a6f4(local_44,&local_40);
                local_24 = (undefined1 *)0x59b245;
                FUN_00404928(DAT_006d23dc + -8 + (int)puVar4 * 8,local_40);
                *(undefined4 *)(DAT_006d23dc + -4 + (int)puVar4 * 8) =
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066aca0 + local_8 * 0x294 + local_c * 0x50 + -0x54 +
                      iVar2 * 4);
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_24 = (undefined1 *)0x59b287;
            DAT_006d23e0 = FUN_00405eec(DAT_006d23dc);
            local_24 = (undefined1 *)(DAT_006d23e0 + -1);
            local_28 = (wchar_t *)&LAB_00597418;
            local_2c = 0x59b2a9;
            FUN_004bcdb0(DAT_006d23dc,8,0);
            if (0 < local_30) {
              iVar2 = 1;
              iVar3 = local_30;
              do {
                local_2c = 0x59b2ce;
                (**(code **)(**(int **)(param_1 + 0x358) + 0x240))
                          (*(int **)(param_1 + 0x358),local_28,1);
                local_2c = 0x59b2ef;
                FUN_00405194(&local_48,
                             *(int *)PTR_DAT_0066af70 +
                             *(int *)(DAT_006d23dc + -4 + iVar2 * 8) * 0x2f8);
                local_2c = local_48;
                piVar1 = *(int **)(param_1 + 0x358);
                local_30 = 0x59b30e;
                (**(code **)(*piVar1 + 0x194))(piVar1,1,piVar1[0x167]);
                local_30 = 0x59b322;
                FUN_00409dd8(*(undefined4 *)(DAT_006d23dc + -4 + iVar2 * 8),&local_50);
                local_30 = 0x59b32d;
                FUN_004051d4(&local_4c,local_50);
                local_30 = local_4c;
                piVar1 = *(int **)(param_1 + 0x358);
                local_34 = 0x59b34c;
                (**(code **)(*piVar1 + 0x194))(piVar1,2,piVar1[0x167]);
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            local_2c = 0x59b366;
            FUN_004f79c8(*(undefined4 *)(param_1 + 0x358),local_28,0);
          }
          local_c = local_c + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_2c = 0x59b385;
      (**(code **)(**(int **)(param_1 + 0x358) + 0x240))(*(int **)(param_1 + 0x358),local_24,1);
      if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
        local_2c = 0x59b3a3;
        FUN_00642c50(0x143,&local_54);
        local_2c = local_54;
        local_30 = 0x59b3c6;
        (**(code **)(**(int **)(param_1 + 0x358) + 0x194))
                  (*(int **)(param_1 + 0x358),1,*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c));
      }
      else {
        local_2c = 0x59b3d5;
        FUN_00642c50(0x144,&local_58);
        local_2c = local_58;
        local_30 = 0x59b3f8;
        (**(code **)(**(int **)(param_1 + 0x358) + 0x194))
                  (*(int **)(param_1 + 0x358),1,*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c));
      }
      local_2c = *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c);
      if (-1 < (int)local_20) {
        local_38 = (int)local_20 + 1;
        iVar2 = 0;
        do {
          if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8) ==
               *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_8 * 0x294)) &&
             (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar2 * 0x2f8) == 0)) {
            local_28 = L"䖍讨瀕暯謀贒\xf214ᣨ\xe69d诿ꡅ譐墻\x03謀鲏\x05먀\x01";
            (**(code **)(**(int **)(param_1 + 0x358) + 0x240))
                      (*(int **)(param_1 + 0x358),local_2c,
                       CONCAT31((int3)((uint)*(int *)PTR_DAT_0066aca0 >> 8),1));
            local_28 = L"䖋储뮋͘";
            FUN_00405194(&local_5c,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8);
            local_28 = (wchar_t *)local_5c;
            piVar1 = *(int **)(param_1 + 0x358);
            local_2c = 0x59b49b;
            (**(code **)(*piVar1 + 0x194))(piVar1,1,piVar1[0x167]);
            local_2c = 0x59b4a6;
            FUN_00409dd8(iVar2,&local_64);
            local_2c = 0x59b4b1;
            FUN_004051d4(&local_60,local_64);
            local_2c = local_60;
            piVar1 = *(int **)(param_1 + 0x358);
            local_30 = 0x59b4d0;
            (**(code **)(*piVar1 + 0x194))(piVar1,2,piVar1[0x167]);
          }
          iVar2 = iVar2 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_28 = L"줳喋诠境\x03\xe800쓌\xfff5䗿￼큍蔏ﭸ\xffff碡暬脀쒸";
      FUN_004f79c8(*(undefined4 *)(param_1 + 0x358),local_2c,0);
      local_28 = L"䗿￼큍蔏ﭸ\xffff碡暬脀쒸";
      FUN_004f79c8(*(undefined4 *)(param_1 + 0x358),local_24,0);
      local_8 = local_8 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
    local_28 = L"喍뢜ń";
    (**(code **)(**(int **)(param_1 + 0x358) + 0x1d0))(*(int **)(param_1 + 0x358),1);
    local_28 = L"䖋傜莋͘";
    FUN_00642c50(0x144,&local_68);
    local_28 = (wchar_t *)local_68;
    local_2c = 0x59b560;
    (**(code **)(**(int **)(param_1 + 0x358) + 0x194))
              (*(int **)(param_1 + 0x358),1,*(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c));
    local_2c = *(undefined4 *)(*(int *)(param_1 + 0x358) + 0x59c);
    iVar3 = 0;
    iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    if (iVar2 <= (int)local_20) {
      local_34 = ((int)local_20 - iVar2) + 1;
      do {
        iVar3 = iVar3 + 1;
        local_24 = (undefined1 *)0x59b59e;
        local_20 = (undefined1 *)iVar3;
        FUN_004060a8(&DAT_006d23dc,PTR_DAT_005973f8,1);
        local_20 = (undefined1 *)0x59b5b8;
        FUN_00404b48(&local_70,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8);
        local_20 = (undefined1 *)0x59b5c3;
        FUN_0064a6f4(local_70,&local_6c);
        local_20 = (undefined1 *)0x59b5d4;
        FUN_00404928(DAT_006d23dc + -8 + iVar3 * 8,local_6c);
        *(int *)(DAT_006d23dc + -4 + iVar3 * 8) = iVar2;
        iVar2 = iVar2 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    local_20 = (undefined1 *)0x59b5f2;
    DAT_006d23e0 = FUN_00405eec(DAT_006d23dc);
    local_20 = (undefined1 *)(DAT_006d23e0 + -1);
    local_24 = &LAB_00597418;
    local_28 = L"蕏࿿ꢌ";
    FUN_004bcdb0(DAT_006d23dc,8,0);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      local_34 = iVar3;
      do {
        local_28 = (wchar_t *)0x59b63b;
        (**(code **)(**(int **)(param_1 + 0x358) + 0x240))(*(int **)(param_1 + 0x358),local_2c,1);
        local_28 = L"䖋傐뎋͘";
        FUN_00405194(&local_74,
                     *(int *)PTR_DAT_0066af70 + *(int *)(DAT_006d23dc + 4 + iVar2 * 8) * 0x2f8);
        local_28 = (wchar_t *)local_74;
        piVar1 = *(int **)(param_1 + 0x358);
        local_2c = 0x59b67b;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,piVar1[0x167]);
        local_2c = 0x59b68f;
        FUN_00409dd8(*(undefined4 *)(DAT_006d23dc + 4 + iVar2 * 8),&local_7c);
        local_2c = 0x59b69a;
        FUN_004051d4(&local_78,local_7c);
        local_2c = local_78;
        piVar1 = *(int **)(param_1 + 0x358);
        local_30 = 0x59b6b9;
        (**(code **)(*piVar1 + 0x194))(piVar1,2,piVar1[0x167]);
        iVar2 = iVar2 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    local_28 = L"쀳奚摙ႉ卨妷贀衅\xeae8\xe691跿豅ʺ";
    FUN_004f79c8(*(undefined4 *)(param_1 + 0x358),local_2c,0);
  }
  puVar4 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0059b753;
  local_20 = (undefined1 *)0x59b6ea;
  FUN_004048d4(&local_7c,local_24,puVar4);
  local_20 = (undefined1 *)0x59b6f7;
  FUN_00405008(&local_78,2);
  local_20 = (undefined1 *)0x59b704;
  FUN_004048f8(&local_70,2);
  local_20 = (undefined1 *)0x59b70c;
  FUN_00404ff0(&local_68);
  local_20 = (undefined1 *)0x59b714;
  FUN_004048d4(&local_64);
  local_20 = (undefined1 *)0x59b721;
  FUN_00405008(&local_60,4);
  local_20 = (undefined1 *)0x59b729;
  FUN_004048d4(&local_50);
  local_20 = (undefined1 *)0x59b736;
  FUN_00405008(&local_4c,2);
  local_20 = (undefined1 *)0x59b743;
  FUN_004048f8(&local_44,2);
  local_20 = (undefined1 *)0x59b74b;
  FUN_00404ff0(&local_3c);
  return;
}

