// Address: 006148f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006148f4(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 **local_34;
  int local_30;
  undefined *local_2c;
  undefined1 **local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *piVar11;
  int *piVar12;
  
  puVar2 = PTR_DAT_0066afa0;
  local_1c = &stack0xfffffffc;
  iVar8 = 0xc;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_20 = &LAB_00614e15;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined1 **)0x614922;
  iVar8 = FUN_00645408();
  *(undefined4 *)PTR_DAT_0066aea4 = 2;
  local_28 = (undefined1 **)0x614935;
  cVar4 = FUN_00657408();
  if (cVar4 == '\0') {
    local_28 = (undefined1 **)0x614967;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
  }
  else {
    local_28 = (undefined1 **)0x61494f;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  }
  *(undefined4 *)PTR_DAT_0066b2cc = 1;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  *(undefined4 *)PTR_DAT_0066af54 = 0;
  local_28 = (undefined1 **)0x614995;
  FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_2c);
  local_28 = (undefined1 **)0x6149a2;
  FUN_0040502c(PTR_DAT_0066aee8,local_2c);
  local_28 = (undefined1 **)0x6149af;
  FUN_00642c50(0x3e4,&local_34);
  local_28 = (undefined1 **)local_34;
  local_2c = &DAT_00614e28;
  local_30 = 0x6149c4;
  FUN_00642c50(0x3e5,&local_38);
  local_30 = local_38;
  local_34 = (undefined4 **)0x6149d4;
  FUN_00405330(&local_30,3);
  local_34 = (undefined4 **)0x6149e5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_30);
  local_34 = (undefined4 **)0x6149ec;
  iVar5 = FUN_00405eec(*(undefined4 *)puVar2);
  iVar10 = 0;
  if (-1 < iVar5 + -1) {
    iVar9 = 0;
    do {
      if ((((*(int *)(*(int *)puVar2 + 0x18 + iVar9 * 0x48) == 10) &&
           (*(int *)(*(int *)puVar2 + 0x1c + iVar9 * 0x48) == iVar8)) &&
          (*(double *)(*(int *)puVar2 + 0x30 + iVar9 * 0x48) ==
           *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
         (*(char *)(*(int *)puVar2 + 0x2c + iVar9 * 0x48) == '\0')) {
        iVar10 = iVar10 + 1;
        local_34 = *(undefined4 ***)(*(int *)puVar2 + iVar9 * 0x48);
        local_38 = *(int *)(*(int *)puVar2 + 4 + iVar9 * 0x48);
        local_40 = 0x614a66;
        local_30 = iVar9;
        FUN_006104c0(param_1,iVar10,10);
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)puVar2 + iVar9 * 0x48) * 0x2f8) != '\0') ||
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)puVar2 + 4 + iVar9 * 0x48) * 0x2f8) != '\0')) {
          DAT_006d4794 = DAT_006d4794 + 1;
          (&DAT_006d4490)[DAT_006d4794] = iVar10;
        }
      }
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar8 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar8) {
    iVar5 = 1;
    piVar12 = &DAT_006d47b0;
    piVar11 = &DAT_006d4850;
    do {
      local_34 = (undefined4 **)0x614aeb;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc),&local_3c);
      if (local_3c != 0) {
        local_34 = (undefined4 **)0x614b04;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc),&local_40);
        local_34 = (undefined4 **)0x614b17;
        FUN_0042d6c0(*(undefined4 *)(*piVar12 + 0x168),local_40);
      }
      local_34 = (undefined4 **)0x614b2a;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc),&local_44);
      if (local_44 != 0) {
        local_34 = (undefined4 **)0x614b43;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc),&local_48);
        local_34 = (undefined4 **)0x614b56;
        FUN_0042d6c0(*(undefined4 *)(*piVar11 + 0x168),local_48);
      }
      local_34 = (undefined4 **)0x614b7a;
      FUN_00404b48(&local_4c,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      local_34 = (undefined4 **)0x614b8a;
      FUN_00466238(*(undefined4 *)(DAT_006d4760 + iVar5 * 4),local_4c);
      local_34 = (undefined4 **)0x614bb6;
      FUN_00404b48(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar5 * 0x1bc,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x40 + iVar5 * 0x1bc) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x41 + iVar5 * 0x1bc) = 0;
      local_34 = &local_28;
      local_38 = 0x614bf0;
      FUN_006158e0(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc));
      *(undefined1 ***)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar5 * 0x1bc) = local_28;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar5 * 0x1bc) = local_24;
      *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar5 * 0x1bc) = local_20;
      *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar5 * 0x1bc) = local_1c;
      *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar5 * 0x1bc) =
           local_1c + (int)(local_20 + (int)local_28 + local_24);
      local_34 = (undefined4 **)0x614c57;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar5 * 0x1bc),&local_54);
      local_34 = (undefined4 **)0x614c67;
      FUN_00404bf0(&local_50,&DAT_00614e34,local_54);
      local_34 = (undefined4 **)0x614c77;
      FUN_00466238(*(undefined4 *)(DAT_006d4788 + iVar5 * 4),local_50);
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar5 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1f8 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      local_34 = (undefined4 **)0x614ca9;
      iVar10 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar5 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1fc +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      local_34 = (undefined4 **)0x614ce0;
      iVar9 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar5 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 500 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      local_34 = (undefined4 **)0x614d17;
      iVar6 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar5 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x200 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8);
      local_34 = (undefined4 **)0x614d4e;
      iVar7 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar5 * 0x1bc) = iVar10 + iVar9 + iVar6 + iVar7;
      iVar5 = iVar5 + 1;
      piVar11 = piVar11 + 1;
      piVar12 = piVar12 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar8) {
    iVar5 = 1;
    do {
      local_34 = (undefined4 **)0x614d8f;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + iVar5 * 4),0);
      local_34 = (undefined4 **)0x614d9e;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar5 * 4),0);
      iVar10 = *(int *)(DAT_006d492c + iVar5 * 4);
      if (*(int *)(iVar10 + 0x168) != 0) {
        local_34 = (undefined4 **)0x614db6;
        FUN_0043aa68(iVar10,0);
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    local_34 = (undefined4 **)0x614dd9;
    FUN_0043b244(DAT_006d4918,1);
  }
  local_34 = (undefined4 **)0x614de5;
  FUN_0043b234(DAT_006d4918,1);
  ppuVar3 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 **)&LAB_00614e1c;
  local_2c = (undefined *)0x614dff;
  FUN_004048f8(&local_54,7,ppuVar3);
  local_2c = (undefined *)0x614e0c;
  FUN_00405008(&local_38,3);
  local_2c = (undefined *)0x614e14;
  FUN_00404ff0(&local_2c);
  return;
}

