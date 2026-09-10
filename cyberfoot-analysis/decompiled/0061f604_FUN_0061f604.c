// Address: 0061f604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061f604(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_14;
  int local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  puStack_48 = &LAB_006206e8;
  local_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_4c;
  puStack_50 = (undefined1 *)0x61f637;
  local_8 = param_1;
  FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_24);
  puStack_50 = (undefined1 *)0x61f644;
  FUN_0040502c(PTR_DAT_0066b11c,local_24);
  puStack_50 = (undefined1 *)0x61f650;
  FUN_0043b234(DAT_006d4918,0);
  if (*PTR_DAT_0066b6c8 == '\0') {
    puStack_50 = (undefined1 *)0x61f667;
    FUN_00642c50(0x1fc,&local_28);
    puStack_50 = (undefined1 *)0x61f678;
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_28);
  }
  if (0 < *(int *)PTR_DAT_0066aea4) {
    local_14 = 1;
    local_20 = *(int *)PTR_DAT_0066aea4;
    do {
      puStack_50 = (undefined1 *)0x61f6af;
      FUN_0061ef04(local_8,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x17c + local_14 * 0x1bc),
                   local_14);
      if ((0 < *(int *)(PTR_DAT_0066ac78 + 0x88)) &&
         ((iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x88), iVar5 < 7 || (iVar5 == 10)))) {
        if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc) <
            *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc)) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8 + 0x234
                          + iVar5 * 0xc);
          *piVar1 = *piVar1 + 3;
        }
        else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc) <
                 *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc)) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8 +
                           0x234 + iVar5 * 0xc);
          *piVar1 = *piVar1 + 3;
        }
        else {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8 + 0x234
                          + iVar5 * 0xc);
          *piVar1 = *piVar1 + 1;
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8 +
                           0x234 + *(int *)(PTR_DAT_0066ac78 + 0x88) * 0xc);
          *piVar1 = *piVar1 + 1;
        }
      }
      if ((0 < *(int *)(PTR_DAT_0066ac78 + 0x88)) &&
         ((iVar5 = *(int *)(PTR_DAT_0066ac78 + 0x88), iVar5 < 7 || (iVar5 == 10)))) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8 + 0x238 +
                        iVar5 * 0xc);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc);
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8 + 0x23c +
                        *(int *)(PTR_DAT_0066ac78 + 0x88) * 0xc);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc);
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8 + 0x238
                        + *(int *)(PTR_DAT_0066ac78 + 0x88) * 0xc);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc);
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 +
                         *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8 + 0x23c
                        + *(int *)(PTR_DAT_0066ac78 + 0x88) * 0xc);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc);
      }
      uVar7 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_58;
      iVar5 = 1;
      do {
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b238 +
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) * 0xf8 + 0x3c +
         iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 8);
      *in_FS_OFFSET = uVar7;
      puStack_54 = &LAB_0061f99f;
      uStack_58 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_58;
      iVar5 = 1;
      do {
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b238 +
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) * 0xf8 + 0x3c
         + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 8);
      *in_FS_OFFSET = uStack_58;
      if (0 < *(int *)(PTR_DAT_0066ac78 + 0x88)) {
        puStack_50 = *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc);
        puStack_54 = *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc);
        uStack_58 = *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc);
        FUN_0061cdb4(local_8,*(int *)(PTR_DAT_0066ac78 + 0x88),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc));
      }
      puStack_50 = (undefined1 *)0x61fa09;
      iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae84);
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 10)) {
        iVar5 = iVar5 + 1;
        puStack_54 = (undefined1 *)0x61fa41;
        puStack_50 = (undefined1 *)iVar5;
        FUN_004060a8(PTR_DAT_0066ae84,PTR_DAT_00488b40,1);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -0x18 + iVar5 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -0x14 + iVar5 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -0x10 + iVar5 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -0xc + iVar5 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -8 + iVar5 * 0x18) =
             *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae84 + -4 + iVar5 * 0x18) =
             *(undefined4 *)(PTR_DAT_0066ac78 + 0x88);
      }
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3)) {
        puStack_50 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
        puStack_54 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
        uStack_58 = 0x61fb1b;
        sVar4 = FUN_0040c3a8();
        if (sVar4 == 1) {
          if (*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38) < 1) {
            *(longlong *)
             (*(int *)PTR_DAT_0066af70 + 0x48 +
             *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
                 (longlong)
                 ROUND((float)*(longlong *)
                               (*(int *)PTR_DAT_0066af70 + 0x48 +
                               *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) +
                       (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) *
                                      0x38) * _DAT_006206f8);
          }
          else {
            *(longlong *)
             (*(int *)PTR_DAT_0066af70 + 0x48 +
             *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
                 (longlong)
                 ROUND((float)*(longlong *)
                               (*(int *)PTR_DAT_0066af70 + 0x48 +
                               *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) -
                       (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) *
                                      0x38) * _DAT_006206f8);
          }
          if (*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38) < 1) {
            *(longlong *)
             (*(int *)PTR_DAT_0066af70 + 0x48 +
             *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
                 (longlong)
                 ROUND((float)*(longlong *)
                               (*(int *)PTR_DAT_0066af70 + 0x48 +
                               *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) +
                       (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) *
                                      0x38) * _DAT_006206f8);
          }
          else {
            *(longlong *)
             (*(int *)PTR_DAT_0066af70 + 0x48 +
             *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) =
                 (longlong)
                 ROUND((float)*(longlong *)
                               (*(int *)PTR_DAT_0066af70 + 0x48 +
                               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8)
                       - (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc)
                                        * 0x38) * _DAT_006206f8);
          }
          piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 8 +
                          *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38);
          *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) *
                                      0x38);
          piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 8 +
                          *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38);
          *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) *
                                      0x38);
        }
      }
      iVar5 = local_14;
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) && (*(int *)(PTR_DAT_0066ac78 + 0x16c) < 10)) {
        iVar6 = *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc);
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar6 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar6 * 0x2f8) -
                   (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 + iVar6 * 0x38) * _DAT_006206f8);
        *(longlong *)
         (*(int *)PTR_DAT_0066af70 + 0x48 +
         *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) -
                   (float)*(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38
                                  ) * _DAT_006206f8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 8 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38
                                    );
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 8 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066afec + 4 +
                                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) *
                                    0x38);
      }
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
        uVar2 = *(uint *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + local_14 * 0x1bc);
        iVar6 = (int)uVar2 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar2 & 1) != 0);
        }
        *(longlong *)
         (*(int *)PTR_DAT_0066af70 + 0x48 +
         *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) +
                   (float)iVar6 * _DAT_006206f8);
        puStack_50 = (undefined1 *)0x61ff73;
        iVar6 = FUN_00402c38();
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x10 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x38);
        *piVar1 = *piVar1 + iVar6;
        uVar2 = *(uint *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar5 * 0x1bc);
        iVar6 = (int)uVar2 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar2 & 1) != 0);
        }
        *(longlong *)
         (*(int *)PTR_DAT_0066af70 + 0x48 +
         *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc) * 0x2f8) +
                   (float)iVar6 * _DAT_006206f8);
        puStack_50 = (undefined1 *)0x620005;
        iVar6 = FUN_00402c38();
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x10 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc) * 0x38);
        *piVar1 = *piVar1 + iVar6;
      }
      else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 10))
      {
        *(longlong *)
         (*(int *)PTR_DAT_0066af70 + 0x48 +
         *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)
                           (*(int *)PTR_DAT_0066af70 + 0x48 +
                           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) +
                   (float)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + local_14 * 0x1bc) *
                   _DAT_006206f8);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x10 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38);
        *piVar1 = *piVar1 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + local_14 * 0x1bc);
      }
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3)) {
        puStack_50 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
        puStack_54 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
        uStack_58 = 0x6200fe;
        sVar4 = FUN_0040c3a8();
        if ((sVar4 == 1) &&
           (0 < *(int *)(*(int *)PTR_DAT_0066afec + 0x20 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38))) {
          puStack_50 = (undefined1 *)0x620162;
          uVar7 = FUN_00402c38();
          *(longlong *)
           (*(int *)PTR_DAT_0066af70 + 0x48 +
           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) =
               (longlong)
               ROUND((float)*(longlong *)
                             (*(int *)PTR_DAT_0066af70 + 0x48 +
                             *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x2f8) -
                     (float)CONCAT44(extraout_EDX,uVar7) * _DAT_006206f8);
          puStack_50 = (undefined1 *)0x6201de;
          uVar7 = FUN_00402c38();
          *(undefined4 *)
           (*(int *)PTR_DAT_0066afec + 0x28 +
           *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_14 * 0x1bc) * 0x38) = uVar7;
        }
      }
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3)) {
        puStack_50 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
        puStack_54 = *(undefined1 **)
                      (PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
        uStack_58 = 0x620241;
        sVar4 = FUN_0040c3a8();
        if ((sVar4 == 1) &&
           (0 < *(int *)(*(int *)PTR_DAT_0066afec + 0x20 +
                        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38))) {
          puStack_50 = (undefined1 *)0x6202a5;
          uVar7 = FUN_00402c38();
          *(longlong *)
           (*(int *)PTR_DAT_0066af70 + 0x48 +
           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) =
               (longlong)
               ROUND((float)*(longlong *)
                             (*(int *)PTR_DAT_0066af70 + 0x48 +
                             *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x2f8) -
                     (float)CONCAT44(extraout_EDX_00,uVar7) * _DAT_006206f8);
          puStack_50 = (undefined1 *)0x620321;
          uVar7 = FUN_00402c38();
          *(undefined4 *)
           (*(int *)PTR_DAT_0066afec + 0x28 +
           *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + local_14 * 0x1bc) * 0x38) = uVar7;
        }
      }
      iVar5 = local_14;
      if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x90 + local_14 * 0x1bc) == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x90 + local_14 * 0x1bc) = 1;
      }
      if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x94 + local_14 * 0x1bc) == 0) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x94 + local_14 * 0x1bc) = 1;
      }
      if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc) <
          *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc)) {
        puStack_50 = (undefined1 *)0x6203c2;
        uVar7 = FUN_00402c38();
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x8c + iVar5 * 0x1bc) = uVar7;
      }
      else if (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x48 + local_14 * 0x1bc) <
               *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x4c + local_14 * 0x1bc)) {
        puStack_50 = (undefined1 *)0x620410;
        uVar7 = FUN_00402c38();
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x88 + iVar5 * 0x1bc) = uVar7;
      }
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x220 +
                  *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) * 0x2f8) == 2) {
        puStack_50 = (undefined1 *)0x620458;
        uVar7 = FUN_00402c38();
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x88 + iVar5 * 0x1bc) = uVar7;
      }
      iVar6 = *(int *)PTR_DAT_0066af70;
      if (*(int *)(iVar6 + 0x220 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc) * 0x2f8)
          == 2) {
        puStack_50 = (undefined1 *)0x6204a0;
        uVar7 = FUN_00402c38();
        iVar6 = *(int *)PTR_DAT_0066b3b8;
        *(undefined4 *)(iVar6 + 0x8c + iVar5 * 0x1bc) = uVar7;
      }
      puStack_50 = (undefined1 *)0x6204ba;
      FUN_00621e48(local_8,CONCAT31((int3)((uint)iVar6 >> 8),(undefined1)local_14));
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (PTR_DAT_0066ac78[0xdc] != '\0')) {
    puStack_50 = (undefined1 *)0x6204e8;
    FUN_0055d080("fimjogo");
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) && (*(int *)(PTR_DAT_0066ac78 + 0x118) == 2)) {
    puStack_50 = (undefined1 *)0x62050c;
    FUN_0061dfe4(local_8);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) && (3 < *(int *)(PTR_DAT_0066ac78 + 0x194))) &&
     (*(int *)(PTR_DAT_0066ac78 + 0x198) == 2)) {
    puStack_50 = (undefined1 *)0x62053e;
    FUN_0061dfe4(local_8);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
    if ((*(int *)PTR_DAT_0066b484 == 1) && (*(int *)(PTR_DAT_0066ac78 + 0x1a4) == 2)) {
      puStack_50 = (undefined1 *)0x62056c;
      FUN_0061dfe4(local_8);
    }
    else if ((*(int *)PTR_DAT_0066b484 == 2) &&
            ((3 < *(int *)(PTR_DAT_0066ac78 + 0x1a0) && (*(int *)(PTR_DAT_0066ac78 + 0x1a4) == 2))))
    {
      puStack_50 = (undefined1 *)0x62059c;
      FUN_0061dfe4(local_8);
    }
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) &&
     (10 < *(int *)(PTR_DAT_0066b3b0 +
                   *(int *)PTR_DAT_0066b080 * 4 +
                   *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 +
                   -0x54))) {
    puStack_50 = (undefined1 *)0x620619;
    FUN_0061e4fc(local_8,*(undefined4 *)
                          (PTR_DAT_0066b3b0 +
                          *(int *)PTR_DAT_0066b080 * 4 +
                          *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) *
                          0x50 + -0x54));
  }
  puStack_54 = &LAB_00620639;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_50 = &stack0xfffffffc;
  FUN_0061efa4(local_8);
  puVar3 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88)) {
  case 0:
    puStack_50 = (undefined1 *)0x62068e;
    FUN_00621ec8(local_8);
    break;
  case 1:
  case 2:
  case 4:
  case 6:
    puStack_50 = (undefined1 *)0x620698;
    FUN_00621ed0(local_8);
    break;
  case 3:
    puStack_50 = (undefined1 *)0x6206a2;
    FUN_00622bd4(local_8);
    break;
  case 5:
    puStack_50 = (undefined1 *)0x6206ac;
    FUN_0062341c(local_8);
    break;
  case 7:
    puStack_50 = (undefined1 *)0x6206b6;
    FUN_00620858(local_8);
    break;
  case 8:
  case 9:
    puStack_50 = (undefined1 *)0x6206c0;
    FUN_00620fa4(local_8);
    break;
  case 10:
    puStack_50 = (undefined1 *)0x6206ca;
    FUN_00623898(local_8,uStack_58,puVar3);
  }
  puVar3 = puStack_44;
  *in_FS_OFFSET = local_4c;
  puStack_44 = &LAB_006206ef;
  puStack_48 = (undefined1 *)0x6206df;
  FUN_00404ff0(&local_28,local_4c,puVar3);
  puStack_48 = (undefined1 *)0x6206e7;
  FUN_00404ff0(&local_24);
  return;
}

