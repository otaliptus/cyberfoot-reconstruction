// Address: 00628210
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00628210(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_14;
  
  puVar1 = PTR_DAT_0066b718;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  local_1c = 0;
  local_14 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < local_14) {
    local_14 = local_14 + 1;
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)puVar1 + 0x7c + iVar4 * 0x80) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8);
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar4 * 0x2f8) == '\0') {
        FUN_004030e0(*(int *)puVar1 + iVar4 * 0x80,DAT_006d4940 + 0x8b + iVar4 * 200,
                     CONCAT31((int3)((uint)DAT_006d4940 >> 8),0x19));
        *(undefined4 *)(*(int *)puVar1 + 0x24 + iVar4 * 0x80) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar4 * 0x2f8);
      }
      else {
        local_1c = local_1c + 1;
        iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
        FUN_004030e0(*(int *)puVar1 + (iVar2 + local_1c) * 0x80,DAT_006d4940 + 0x8b + iVar4 * 200,
                     0x19);
        iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
        *(undefined4 *)(*(int *)puVar1 + 0x24 + (iVar2 + local_1c) * 0x80) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar4 * 0x2f8);
        iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
        *(undefined4 *)(*(int *)puVar1 + 0x3c + (iVar2 + local_1c) * 0x80) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8);
        iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
        *(undefined4 *)(*(int *)puVar1 + 0x1c + (iVar2 + local_1c) * 0x80) = 0xffffffff;
        iVar2 = *(int *)PTR_DAT_0066b57c;
        if (0 < iVar2) {
          piVar3 = (int *)(PTR_DAT_0066ac78 + 0x140);
          puVar5 = PTR_DAT_0066b4bc;
          puVar6 = (undefined4 *)PTR_DAT_0066b740;
          do {
            if (iVar4 == *piVar3) {
              FUN_004030e0(*(int *)puVar1 + iVar4 * 0x80,puVar5,0x19);
              *(undefined4 *)(*(int *)puVar1 + 0x7c + iVar4 * 0x80) = *puVar6;
              break;
            }
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 0x1a;
            piVar3 = piVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(undefined1 *)(*(int *)puVar1 + 0x31 + iVar4 * 0x80) = 1;
        *(int *)(PTR_DAT_0066ac78 + local_1c * 4 + 0x10) = iVar4;
      }
      *(undefined4 *)(*(int *)puVar1 + 0x3c + iVar4 * 0x80) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8);
      *(int *)(*(int *)puVar1 + 0x1c + iVar4 * 0x80) = iVar4;
      *(undefined4 *)(*(int *)puVar1 + 0x24 + iVar4 * 0x80) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar4 * 0x2f8);
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar4 * 0x2f8) = iVar4;
      *(undefined1 *)(*(int *)puVar1 + 0x40 + iVar4 * 0x80) = 1;
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

