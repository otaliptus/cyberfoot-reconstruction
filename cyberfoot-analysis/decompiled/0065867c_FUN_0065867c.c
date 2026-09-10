// Address: 0065867c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065867c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined *puVar6;
  int local_24 [2];
  undefined4 local_1c;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae14);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ac7c);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      fVar5 = in_ST0;
      if ((*(int *)(*(int *)PTR_DAT_0066ac7c + 0x14 + iVar4 * 0x18) == param_2) &&
         ((iVar3 = *(int *)(*(int *)PTR_DAT_0066ac7c + iVar4 * 0x18), iVar3 == 0x13 ||
          (iVar3 == 0x14)))) {
        iVar1 = iVar1 + 1;
        FUN_004060a8(PTR_DAT_0066ae14,PTR_DAT_00488ec0,1,iVar1);
        iVar3 = 5;
        do {
          local_24[0] = 0;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        FUN_00657ac8(*(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 8 + iVar4 * 0x18),local_24);
        puVar6 = &DAT_006588a0;
        FUN_00650548(*(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 8 + iVar4 * 0x18),
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066b5b8 + 0x20 +
                      *(int *)(*(int *)PTR_DAT_0066ac7c + 8 + iVar4 * 0x18) * 0x130),
                     *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_2 * 0x1bc));
        *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + -0x20 + iVar1 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 8 + iVar4 * 0x18);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + -0x1c + iVar1 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 0xc + iVar4 * 0x18);
        *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + -0x18 + iVar1 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 0x10 + iVar4 * 0x18);
        *(undefined **)(*(int *)PTR_DAT_0066ae14 + -0x10 + iVar1 * 0x20) = puVar6;
        *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + -0xc + iVar1 * 0x20) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 4 + iVar4 * 0x18);
        fVar5 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        FUN_00657b68(*(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 8 + iVar4 * 0x18),param_1,
                     *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + 4 + iVar4 * 0x18),0xffffffff);
        *(float *)(*(int *)PTR_DAT_0066ae14 + -0x14 + iVar1 * 0x20) = (float)in_ST0;
        *(int *)(*(int *)PTR_DAT_0066ae14 + -8 + iVar1 * 0x20) = param_2;
        *(undefined4 *)(*(int *)PTR_DAT_0066ae14 + -4 + iVar1 * 0x20) = local_1c;
        in_ST7 = in_ST6;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      in_ST0 = fVar5;
    } while (iVar2 != 0);
  }
  return;
}

