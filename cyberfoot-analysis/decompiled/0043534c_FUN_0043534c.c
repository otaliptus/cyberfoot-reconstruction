// Address: 0043534c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043534c(int param_1)

{
  LPBYTE pBVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  BOOL BVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  byte bVar8;
  DWORD Flags;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  undefined1 local_38;
  char *local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  LPBYTE local_14;
  LPBYTE local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_4c = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  puStack_50 = &LAB_0043557b;
  local_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_54;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x10) == 0) {
    puStack_58 = (undefined1 *)0x43538a;
    uVar3 = FUN_00403a54(PTR_PTR_0041bda0,1);
    *(undefined4 *)(local_8 + 0x10) = uVar3;
    puStack_5c = &LAB_00435538;
    uStack_60 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_60;
    if (*(int *)PTR_DAT_0066b790 == 2) {
      Flags = 6;
      bVar8 = 4;
    }
    else {
      Flags = 2;
      bVar8 = 5;
    }
    local_18 = 0;
    puStack_58 = &stack0xfffffffc;
    EnumPrintersA(Flags,(LPSTR)0x0,(uint)bVar8,(LPBYTE)0x0,0,&local_18,&local_1c);
    if (local_18 == 0) {
      *in_FS_OFFSET = uStack_60;
      puVar2 = puStack_4c;
    }
    else {
      local_10 = (LPBYTE)FUN_004027fc(local_18);
      uVar3 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff94;
      BVar4 = EnumPrintersA(Flags,(LPSTR)0x0,(uint)bVar8,local_10,local_18,&local_18,&local_1c);
      if (BVar4 != 0) {
        local_14 = local_10;
        if (-1 < (int)(local_1c - 1)) {
          local_20 = local_1c;
          do {
            pBVar1 = local_14;
            if (bVar8 == 4) {
              uVar7 = *(undefined4 *)local_14;
              uVar5 = FUN_00434a68(PTR_DAT_004349e8,1,0,0,uVar7);
              FUN_00404adc(&local_24,uVar7);
              (**(code **)(**(int **)(local_8 + 0x10) + 0x3c))
                        (*(int **)(local_8 + 0x10),local_24,uVar5);
              local_14 = local_14 + 0xc;
            }
            else {
              local_c = *(undefined4 *)(local_14 + 4);
              pcVar6 = (char *)FUN_00434978(&local_c);
              while (*pcVar6 != '\0') {
                uVar7 = FUN_00434a68(PTR_DAT_004349e8,1,0,pcVar6,*(undefined4 *)pBVar1);
                puVar9 = &local_28;
                FUN_00406d44(PTR_PTR_0066ae34,&local_2c);
                local_3c = *(undefined4 *)pBVar1;
                local_38 = 6;
                local_30 = 6;
                local_34 = pcVar6;
                FUN_0040ae64(local_2c,&local_3c,1,puVar9);
                (**(code **)(**(int **)(local_8 + 0x10) + 0x3c))
                          (*(int **)(local_8 + 0x10),local_28,uVar7);
                pcVar6 = (char *)FUN_00434978(&local_c);
              }
              local_14 = local_14 + 0x14;
            }
            local_20 = local_20 - 1;
          } while (local_20 != 0);
        }
        *in_FS_OFFSET = uVar3;
        FUN_0040281c(local_10,local_18,puVar10);
        return;
      }
      FUN_004042fc();
      *in_FS_OFFSET = uStack_60;
      puVar2 = puStack_4c;
    }
  }
  puStack_4c = puVar2;
  puVar2 = puStack_4c;
  *in_FS_OFFSET = local_54;
  puStack_4c = &LAB_00435582;
  puStack_50 = (undefined1 *)0x43557a;
  FUN_004048f8(&local_2c,3,puVar2);
  return;
}

