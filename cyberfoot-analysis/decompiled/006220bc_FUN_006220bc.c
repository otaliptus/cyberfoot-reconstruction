// Address: 006220bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006220bc(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = PTR_DAT_0066afa0;
  puVar2 = PTR_DAT_0066af70;
  iVar8 = *(int *)PTR_DAT_0066b09c;
  PTR_DAT_0066ae98[iVar8 * 0x568 + 0x52e] = 1;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  *(undefined4 *)PTR_DAT_0066af54 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x188) < 6) {
    iVar8 = *(int *)(PTR_DAT_0066ae98 + iVar8 * 0x568 + 0x510);
    if (iVar8 == 1) {
      *(undefined4 *)PTR_DAT_0066aea4 = 3;
    }
    else if (iVar8 == 2) {
      *(undefined4 *)PTR_DAT_0066aea4 = 6;
    }
    else if (iVar8 == 3) {
      *(undefined4 *)PTR_DAT_0066aea4 = 9;
    }
    else if (iVar8 == 4) {
      *(undefined4 *)PTR_DAT_0066aea4 = 0xc;
    }
  }
  else {
    *(undefined4 *)PTR_DAT_0066aea4 = 1;
  }
  local_34 = FUN_00405eec(*(undefined4 *)puVar3);
  iVar8 = 0;
  local_38 = param_1;
  if (-1 < local_34 + -1) {
    iVar7 = 0;
    do {
      if ((((*(int *)(*(int *)puVar3 + 0x38 + iVar7 * 0x48) == *(int *)PTR_DAT_0066b09c) &&
           (*(int *)(*(int *)puVar3 + 0x18 + iVar7 * 0x48) == 3)) &&
          (*(double *)(*(int *)puVar3 + 0x30 + iVar7 * 0x48) ==
           *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
         (*(char *)(*(int *)puVar3 + 0x2c + iVar7 * 0x48) == '\0')) {
        iVar8 = iVar8 + 1;
        FUN_006104c0(iVar7,iVar8,3);
        local_38 = iVar7;
        if ((*(char *)(*(int *)puVar2 + 0x39 + *(int *)(*(int *)puVar3 + iVar7 * 0x48) * 0x2f8) !=
             '\0') ||
           (*(char *)(*(int *)puVar2 + 0x39 + *(int *)(*(int *)puVar3 + 4 + iVar7 * 0x48) * 0x2f8)
            != '\0')) {
          DAT_006d4794 = DAT_006d4794 + 1;
          (&DAT_006d4490)[DAT_006d4794] = iVar8;
        }
      }
      iVar7 = iVar7 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  *(int *)PTR_DAT_0066aea4 = iVar8;
  local_34 = *(int *)PTR_DAT_0066aea4;
  if (0 < local_34) {
    iVar8 = 1;
    do {
      FUN_00404b48(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar8 * 0x1bc,
                   *(int *)puVar2 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x40 + iVar8 * 0x1bc) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x41 + iVar8 * 0x1bc) = 0;
      FUN_006158e0(local_38,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar8 * 0x1bc),&local_30);
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar8 * 0x1bc) = local_30;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar8 * 0x1bc) = local_2c;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar8 * 0x1bc) = local_28;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar8 * 0x1bc) = local_24;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar8 * 0x1bc) =
           local_30 + local_2c + local_28 + local_24;
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)puVar2 + 0x1f8 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      local_20 = (undefined4)lVar1;
      iVar7 = FUN_00402c38(local_20,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)puVar2 + 0x1fc +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      uStack_1c = (undefined4)lVar1;
      iVar4 = FUN_00402c38(uStack_1c,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)puVar2 + 500 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      uStack_18 = (undefined4)lVar1;
      iVar5 = FUN_00402c38(uStack_18,(int)((ulonglong)lVar1 >> 0x20));
      lVar1 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar8 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)puVar2 + 0x200 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar8 * 0x1bc) * 0x2f8);
      uStack_14 = (undefined4)lVar1;
      iVar6 = FUN_00402c38(uStack_14,(int)((ulonglong)lVar1 >> 0x20));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar8 * 0x1bc) = iVar7 + iVar4 + iVar5 + iVar6;
      iVar8 = iVar8 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  FUN_004060a8(&DAT_006d491c,PTR_DAT_0060ee48,1,0);
  local_34 = *(int *)PTR_DAT_0066aea4;
  if (0 < local_34) {
    iVar8 = 1;
    do {
      iVar7 = 1;
      do {
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar8 * 0x1bc + 0xac + iVar7 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b238 +
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar8 * 0x1bc) * 0xf8 + -4 + iVar7 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar8 * 0x1bc + 0xd8 + iVar7 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b238 +
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar8 * 0x1bc) * 0xf8 + -4 + iVar7 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar8 * 0x1bc + 0x104 + iVar7 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b238 +
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar8 * 0x1bc) * 0xf8 + 0x58 + iVar7 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar8 * 0x1bc + 0x130 + iVar7 * 4) =
             *(undefined4 *)
              (*(int *)PTR_DAT_0066b238 +
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar8 * 0x1bc) * 0xf8 + 0x58 + iVar7 * 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0xc);
      FUN_0061c174(local_38,iVar8);
      iVar8 = iVar8 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  DAT_006d479c = 0;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  DAT_006d48f4 = 0;
  iVar8 = 1;
  do {
    local_34 = *(int *)PTR_DAT_0066aea4;
    if (0 < local_34) {
      iVar7 = 1;
      do {
        FUN_00609bc8(iVar7);
        FUN_0061c5c0(local_38,iVar8,iVar7);
        iVar7 = iVar7 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xb7);
  iVar8 = 0xb7;
  do {
    local_34 = *(int *)PTR_DAT_0066aea4;
    if (0 < local_34) {
      iVar7 = 1;
      do {
        if (iVar8 <= *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x184 + iVar7 * 0x1bc)) {
          FUN_00609bc8(iVar7);
        }
        FUN_0061c5c0(local_38,iVar8,iVar7);
        iVar7 = iVar7 + 1;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xbf);
  FUN_0061f604(local_38);
  return;
}

