// Address: 006278c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006278c8(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  puStack_38 = &LAB_00627dab;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if (0 < *(int *)PTR_DAT_0066b57c) {
    local_c = 1;
    puVar3 = (undefined4 *)(PTR_DAT_0066ac78 + 0x14);
    local_1c = *(int *)PTR_DAT_0066b57c;
    do {
      *puVar3 = 0xffffffff;
      local_c = local_c + 1;
      puVar3 = puVar3 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(PTR_DAT_0066ac78 + 0xc4) < 0xca) {
    puStack_40 = (undefined1 *)0x627930;
    FUN_00625098(param_1);
    puVar1 = puStack_34;
  }
  puStack_34 = puVar1;
  puStack_40 = (undefined1 *)0x627938;
  FUN_006273f8(local_8);
  puStack_40 = (undefined1 *)0x627950;
  local_14 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  puStack_40 = (undefined1 *)(local_14 + 10);
  puStack_44 = (undefined1 *)0x62796f;
  FUN_004060a8(PTR_DAT_0066b718,PTR_DAT_00488ba0,1);
  puStack_40 = (undefined1 *)local_14;
  puStack_44 = (undefined1 *)0x62798b;
  FUN_004060a8(&DAT_006d4940,PTR_DAT_00624f90,1);
  puStack_40 = (undefined1 *)local_14;
  puStack_44 = (undefined1 *)0x6279a7;
  FUN_004060a8(&DAT_006d4944,PTR_DAT_00624fb0,1);
  puStack_40 = (undefined1 *)local_14;
  puStack_44 = (undefined1 *)0x6279c3;
  FUN_004060a8(PTR_DAT_0066afec,PTR_DAT_00488bc0,1);
  puStack_40 = (undefined1 *)0x6279d2;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar4) {
    local_1c = iVar4 + 1;
    local_10 = 0;
    do {
      puStack_40 = (undefined1 *)0x6279ff;
      FUN_00404bf0(&local_24,"teams\\",*(undefined4 *)(*(int *)PTR_DAT_0066b4e0 + local_10 * 4));
      puStack_40 = (undefined1 *)0x627a07;
      cVar2 = FUN_0040a43c(local_24);
      if (cVar2 != '\0') {
        puStack_40 = (undefined1 *)0x20;
        puStack_44 = (undefined1 *)0x627a2b;
        FUN_00404bf0(&local_28,"teams\\",*(undefined4 *)(*(int *)PTR_DAT_0066b4e0 + local_10 * 4));
        puStack_44 = (undefined1 *)0x627a3a;
        local_18 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_28);
        puStack_44 = &LAB_00627abd;
        uStack_48 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_48;
        puStack_40 = &stack0xfffffffc;
        (**(code **)(*local_18 + 0xc))(local_18,&local_c,4);
        (**(code **)(*local_18 + 0xc))(local_18,DAT_006d4940 + local_10 * 200,200);
        (**(code **)(*local_18 + 0xc))(local_18,&local_c,4);
        (**(code **)(*local_18 + 0xc))(local_18,DAT_006d4944 + local_10 * 0x708,0x708);
        puVar1 = puStack_40;
        *in_FS_OFFSET = uStack_48;
        puStack_40 = (undefined1 *)0x627ac4;
        puStack_44 = (undefined1 *)0x627abc;
        FUN_00403a84(local_18,uStack_48,puVar1);
        return;
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if ((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x75d] != '\0')) {
    puStack_40 = (undefined1 *)0x627af4;
    FUN_00627434(local_8);
  }
  if ((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x75d] != '\0')) {
    puStack_40 = (undefined1 *)0x627b17;
    FUN_00632c10(1);
    puStack_40 = (undefined1 *)0x627b1e;
    FUN_0063309c(1);
  }
  PTR_DAT_0066ac78[0x173] = 1;
  PTR_DAT_0066ac78[0x174] = 1;
  puStack_40 = (undefined1 *)0x627b4b;
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x14);
  puStack_40 = (undefined1 *)0x627b53;
  FUN_006284c8(local_8);
  puStack_40 = (undefined1 *)0x627b5b;
  FUN_00628210(local_8);
  puStack_40 = (undefined1 *)0x627b63;
  FUN_00627dc8(local_8);
  if (-1 < local_14 + -1) {
    local_1c = local_14;
    local_c = 0;
    do {
      puStack_40 = (undefined1 *)0x627b7e;
      FUN_0062584c(local_c);
      puStack_40 = (undefined1 *)0x627b86;
      FUN_006520d0(local_c);
      puStack_40 = (undefined1 *)0x627b8e;
      FUN_0065156c(local_c);
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puStack_40 = (undefined1 *)0x627bab;
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x1e);
  puStack_40 = (undefined1 *)0x627bb7;
  local_14 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < local_14 + -1) {
    local_c = 0;
    local_1c = local_14;
    do {
      puStack_40 = (undefined1 *)0x627be8;
      uVar5 = FUN_0065387c(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + local_c * 0x294));
      *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x148 + local_c * 0x294) = uVar5;
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  local_14 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1;
  if (-1 < local_14) {
    local_c = 0;
    local_1c = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40);
    do {
      puStack_40 = (undefined1 *)0x627c35;
      FUN_00652900(local_c);
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puStack_40 = (undefined1 *)0x627c49;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar4 + -1) {
    local_c = 0;
    local_1c = iVar4;
    do {
      puStack_40 = (undefined1 *)0x627c61;
      FUN_00652988(local_c);
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (-1 < *(int *)(PTR_DAT_0066ac78 + 0x3c) + -1) {
    local_c = 0;
    local_1c = *(int *)(PTR_DAT_0066ac78 + 0x3c);
    do {
      if (0xf < *(int *)(*(int *)PTR_DAT_0066af70 + 100 + local_c * 0x2f8)) {
        puStack_40 = (undefined1 *)0x627c9c;
        FUN_00652be0(local_c);
      }
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puStack_40 = (undefined1 *)0x627cb0;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < iVar4) {
    local_1c = iVar4 + 1;
    local_c = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x2ec + local_c * 0x2f8) < 7) {
        puStack_40 = (undefined1 *)0x627cdd;
        FUN_0064e694(local_c);
      }
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puStack_40 = (undefined1 *)0x627cea;
  FUN_00652ab8();
  if (((PTR_DAT_0066ac78[0x17f] != '\0') || (PTR_DAT_0066ac78[0x181] != '\0')) ||
     (PTR_DAT_0066ac78[0x180] != '\0')) {
    puStack_40 = (undefined1 *)0x627d19;
    FUN_006266b0();
  }
  local_c = 0;
  piVar7 = (int *)(PTR_DAT_0066ae98 + 0x510);
  do {
    if (0 < *piVar7 + 1) {
      local_20 = piVar7 + -0x144;
      local_1c = *piVar7 + 1;
      do {
        if (0 < *piVar7) {
          iVar4 = 0x14;
          piVar6 = local_20;
          do {
            if ((-1 < *piVar6) &&
               (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar6 * 0x2f8) != '\0')) {
              *(undefined1 *)(piVar7 + 7) = 1;
            }
            piVar6 = piVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_20 = local_20 + 0x14;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    local_c = local_c + 1;
    piVar7 = piVar7 + 0x15a;
  } while (local_c != 0x1b);
  puStack_40 = (undefined1 *)0x627d90;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00627db2;
  puStack_38 = (undefined1 *)0x627daa;
  FUN_004048f8(&local_28,2,puVar1);
  return;
}

