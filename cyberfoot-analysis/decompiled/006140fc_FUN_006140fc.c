// Address: 006140fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006140fc(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_FS_OFFSET;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64 [28];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  puVar2 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar8 = 0x12;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_20 = &LAB_006148c8;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  *(undefined4 *)PTR_DAT_0066b508 = 0;
  local_28 = (int *)0x61413a;
  iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b0d4);
  if (-1 < iVar8) {
    local_24 = iVar8 + 1;
    iVar8 = 0;
    do {
      if ((*(double *)(*(int *)PTR_DAT_0066b0d4 + 0x10 + iVar8 * 0x18) ==
           *(double *)(PTR_DAT_0066b574 + *(int *)(puVar2 + 0x16c) * 0x18 + -0x10)) &&
         (*(char *)(*(int *)PTR_DAT_0066b0d4 + 8 + iVar8 * 0x18) == '\0')) {
        *(int *)PTR_DAT_0066b508 = *(int *)PTR_DAT_0066b508 + 1;
        local_28 = (int *)0x61418b;
        iVar4 = FUN_00405eec(local_1c);
        local_28 = (int *)(iVar4 + 1);
        local_2c = (int *)0x6141a0;
        FUN_004060a8(&local_1c,PTR_DAT_006140bc,1);
        local_28 = (int *)0x6141ab;
        iVar4 = FUN_00405ef4(local_1c);
        *(int *)(local_1c + iVar4 * 4) = iVar8;
        *(undefined1 *)(*(int *)PTR_DAT_0066b0d4 + 8 + iVar8 * 0x18) = 1;
      }
      iVar8 = iVar8 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  local_28 = (int *)0x6141cf;
  iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  if (-1 < iVar8) {
    local_24 = iVar8 + 1;
    iVar8 = 0;
    do {
      if ((*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + iVar8 * 0x48) ==
           *(double *)(PTR_DAT_0066b574 + *(int *)(puVar2 + 0x16c) * 0x18 + -0x10)) &&
         (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar8 * 0x48) == '\0')) {
        local_28 = (int *)0x614215;
        iVar4 = FUN_00405eec(local_20);
        local_28 = (int *)(iVar4 + 1);
        local_2c = (int *)0x61422a;
        FUN_004060a8(&local_20,PTR_DAT_006140dc,1);
        local_28 = (int *)0x614235;
        iVar4 = FUN_00405ef4(local_20);
        *(int *)(local_20 + iVar4 * 4) = iVar8;
      }
      iVar8 = iVar8 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *(undefined4 *)PTR_DAT_0066aea4 = *(undefined4 *)PTR_DAT_0066b508;
  local_28 = (int *)0x614260;
  FUN_0043b244(DAT_006d4918,*(undefined4 *)(puVar2 + 200));
  if (*(int *)PTR_DAT_0066aea4 < 2) {
    local_28 = (int *)0x614297;
    FUN_00642c50(0xd4,&local_44);
    local_28 = (int *)0x6142a8;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_44);
  }
  else {
    local_28 = (int *)0x614277;
    FUN_00642c50(0xd4,&local_40);
    local_28 = (int *)0x614288;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_40);
  }
  if (0 < *(int *)PTR_DAT_0066b508) {
    iVar8 = 1;
    local_2c = &DAT_006d46c0;
    local_24 = *(int *)PTR_DAT_0066b508;
    do {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b0d4 + *(int *)(local_1c + iVar8 * 4 + -4) * 0x18);
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b0d4 + 4 + *(int *)(local_1c + iVar8 * 4 + -4) * 0x18);
      local_28 = (int *)0x6142fb;
      FUN_004030d4(local_64,&DAT_006148d8);
      local_28 = (int *)0x614313;
      FUN_004030a4(local_64,*(int *)PTR_DAT_0066af70 + iVar4 * 0x2f8,0x1a);
      local_28 = (int *)0x61431e;
      FUN_00404b48(&local_48,local_64);
      local_28 = (int *)0x61432e;
      FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar8 * 4),local_48);
      local_28 = (int *)0x61433b;
      FUN_004030d4(local_64,&DAT_006148d8);
      local_28 = (int *)0x614353;
      FUN_004030a4(local_64,*(int *)PTR_DAT_0066af70 + iVar5 * 0x2f8,0x1a);
      local_28 = (int *)0x61435e;
      FUN_00404b48(&local_68,local_64);
      local_28 = (int *)0x61436e;
      FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar8 * 4),local_68);
      local_28 = (int *)0x61438d;
      FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar4 * 0x2f8));
      local_28 = (int *)0x6143ac;
      FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar8 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar5 * 0x2f8));
      local_28 = (int *)0x6143ce;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar8 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar4 * 0x2f8));
      local_28 = (int *)0x6143f0;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar8 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar5 * 0x2f8));
      iVar6 = *local_28;
      local_28 = (int *)0x614412;
      FUN_0042ab6c(*(undefined4 *)(iVar6 + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar4 * 0x2f8));
      local_28 = (int *)0x614434;
      FUN_0042ab6c(*(undefined4 *)(*local_2c + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar5 * 0x2f8));
      local_28 = (int *)0x614446;
      FUN_00466238(*(undefined4 *)(DAT_006d4774 + iVar8 * 4),&DAT_006148e4);
      local_28 = (int *)0x614458;
      FUN_00466238(*(undefined4 *)(DAT_006d4778 + iVar8 * 4),&DAT_006148e4);
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) = iVar4;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc) = iVar5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar8 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar4 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar8 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar5 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar8 * 0x1bc) = 5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar8 * 0x1bc) = 5;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x17c + iVar8 * 0x1bc) =
           *(undefined4 *)(local_20 + iVar8 * 4 + -4);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar8 * 0x1bc) = 0;
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc) * 0x2f8) != '\0')) {
        DAT_006d4794 = DAT_006d4794 + 1;
        (&DAT_006d4490)[DAT_006d4794] = iVar8;
      }
      iVar8 = iVar8 + 1;
      local_2c = local_2c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (0 < *(int *)PTR_DAT_0066b508) {
    iVar8 = 1;
    local_2c = &DAT_006d47b0;
    local_24 = *(int *)PTR_DAT_0066b508;
    do {
      local_28 = (int *)0x614587;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc),&local_6c);
      if (local_6c != 0) {
        local_28 = (int *)0x6145a0;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc),&local_70);
        local_28 = (int *)0x6145b3;
        FUN_0042d6c0(*(undefined4 *)(*local_2c + 0x168),local_70);
      }
      local_28 = (int *)0x6145c6;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc),&local_74);
      if (local_74 != 0) {
        local_28 = (int *)0x6145df;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc),&local_78);
        iVar4 = *local_28;
        local_28 = (int *)0x6145f2;
        FUN_0042d6c0(*(undefined4 *)(iVar4 + 0x168),local_78);
      }
      local_28 = (int *)0x614616;
      FUN_00404b48(&local_7c,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_28 = (int *)0x614626;
      FUN_00466238(*(undefined4 *)(DAT_006d4760 + iVar8 * 4),local_7c);
      local_28 = (int *)0x614652;
      FUN_00404b48(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar8 * 0x1bc,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x40 + iVar8 * 0x1bc) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x41 + iVar8 * 0x1bc) = 0;
      local_28 = &local_3c;
      local_2c = (int *)0x61468c;
      FUN_00616cc0(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar8 * 0x1bc) = local_3c;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar8 * 0x1bc) = local_38;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar8 * 0x1bc) = local_34;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar8 * 0x1bc) = local_30;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar8 * 0x1bc) =
           local_3c + local_38 + local_34 + local_30;
      local_28 = (int *)0x6146f3;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar8 * 0x1bc),&local_84);
      local_28 = (int *)0x614703;
      FUN_00404bf0(&local_80,&DAT_006148f0,local_84);
      local_28 = (int *)0x614713;
      FUN_00466238(*(undefined4 *)(DAT_006d4788 + iVar8 * 4),local_80);
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1f8 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_28 = (int *)0x61474b;
      iVar4 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1fc +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_28 = (int *)0x614788;
      iVar5 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 500 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_28 = (int *)0x6147c5;
      iVar6 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x200 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_28 = (int *)0x614802;
      iVar7 = FUN_00402c38((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar8 * 0x1bc) = iVar4 + iVar5 + iVar6 + iVar7;
      iVar8 = iVar8 + 1;
      local_2c = (int *)((int)local_2c + 4);
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (0 < *(int *)PTR_DAT_0066aea4) {
    iVar8 = 1;
    local_24 = *(int *)PTR_DAT_0066aea4;
    do {
      local_28 = (int *)0x614843;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + iVar8 * 4),0);
      local_28 = (int *)0x614852;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar8 * 4),0);
      iVar4 = *(int *)(DAT_006d492c + iVar8 * 4);
      if (*(int *)(iVar4 + 0x168) != 0) {
        local_28 = (int *)0x61486a;
        FUN_0043aa68(iVar4,0);
      }
      iVar8 = iVar8 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  local_28 = (int *)0x61487c;
  FUN_0043b234(DAT_006d4918,1);
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006148cf;
  local_20 = (undefined1 *)0x614896;
  FUN_004048f8(&local_84,8,puVar3);
  local_20 = (undefined1 *)0x61489e;
  FUN_004048d4(&local_48);
  local_20 = (undefined1 *)0x6148ab;
  FUN_00405008(&local_44,2);
  local_20 = (undefined1 *)0x6148b9;
  FUN_004061c8(&local_20,PTR_DAT_006140dc);
  local_20 = (undefined1 *)0x6148c7;
  FUN_004061c8(&local_1c,PTR_DAT_006140bc);
  return;
}

