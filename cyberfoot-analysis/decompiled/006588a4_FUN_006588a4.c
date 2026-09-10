// Address: 006588a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006588a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 *puVar7;
  undefined *puVar8;
  int local_2c;
  int local_24 [2];
  undefined4 local_1c;
  
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b128);
  local_2c = 1;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc + 0xc + local_2c * 4);
    iVar5 = 1;
    fVar6 = in_ST0;
    do {
      in_ST0 = fVar6;
      if (0 < *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4)) {
        iVar2 = iVar2 + 1;
        FUN_004060a8(PTR_DAT_0066b128,PTR_DAT_00488ea0,1,iVar2);
        iVar3 = 5;
        do {
          local_24[0] = 0;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        FUN_00657ac8(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4),
                     local_24);
        puVar8 = &DAT_00658cb8;
        FUN_00650548(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4),
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x20 +
                      *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc));
        *(undefined **)(*(int *)PTR_DAT_0066b128 + -0x20 + iVar2 * 0x20) = puVar8;
        *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0x1c + iVar2 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4);
        *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0x18 + iVar2 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4);
        if (*(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4) == 10) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0x18 + iVar2 * 0x20) = 0xe;
        }
        *(undefined1 *)(*(int *)PTR_DAT_0066b128 + -0x10 + iVar2 * 0x20) =
             *(undefined1 *)
              (*(int *)PTR_DAT_0066b5b8 + 0x86 +
              *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4) * 0x130);
        *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0xc + iVar2 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_1 * 0x1bc + 4 + param_2 * 4);
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        FUN_00657b68(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4),
                     param_1,*(undefined4 *)
                              (*(int *)PTR_DAT_0066b3b8 + param_1 * 0x1bc + 4 + param_2 * 4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4));
        *(float *)(*(int *)PTR_DAT_0066b128 + -0x14 + iVar2 * 0x20) = (float)fVar6;
        *(int *)(*(int *)PTR_DAT_0066b128 + -8 + iVar2 * 0x20) = local_2c;
        *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -4 + iVar2 * 0x20) = local_1c;
        in_ST7 = in_ST6;
        iVar3 = FUN_00405eec(DAT_006d5320);
        FUN_004060a8(&DAT_006d5320,PTR_DAT_0064269c,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(DAT_006d5320);
        *(undefined4 *)(DAT_006d5320 + iVar3 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4);
        iVar3 = FUN_00405ef4(DAT_006d5320);
        *(undefined4 *)(DAT_006d5320 + 4 + iVar3 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0x14 + iVar2 * 0x20);
        iVar3 = FUN_00405ef4(DAT_006d5320);
        *(undefined4 *)(DAT_006d5320 + 0xc + iVar3 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_1 * 0x1bc);
        iVar3 = FUN_00405ef4(DAT_006d5320);
        *(undefined4 *)(DAT_006d5320 + 8 + iVar3 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 4 + param_1 * 0x1bc);
        iVar3 = FUN_00405ef4(DAT_006d5320);
        puVar7 = (undefined4 *)(DAT_006d5320 + 0x14 + iVar3 * 0x1c);
        uVar4 = FUN_004032c8(100);
        *puVar7 = uVar4;
        iVar3 = FUN_00405ef4(DAT_006d5320);
        *(undefined4 *)(DAT_006d5320 + 0x10 + iVar3 * 0x1c) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4);
        FUN_006428ac(*(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar5 * 4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_1 * 0x1bc),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x58 + iVar5 * 4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b128 + -0x14 + iVar2 * 0x20));
      }
      iVar5 = iVar5 + 1;
      fVar6 = in_ST0;
    } while (iVar5 != 0xc);
    local_2c = local_2c + 1;
  } while (local_2c != 3);
  return;
}

