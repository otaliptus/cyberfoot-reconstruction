// Address: 0058a828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058a828(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int aiStack_3c [7];
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = PTR_DAT_0066b058;
  bVar6 = 0;
  piVar5 = aiStack_3c + 1;
  iVar3 = 10;
  do {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  aiStack_3c[0] = 0x58a84f;
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)puVar2 + 8 + iVar4 * 0x14) == *(int *)PTR_DAT_0066b194) &&
         (*(int *)(*(int *)puVar2 + 0xc + iVar4 * 0x14) == 1)) {
        if (*(int *)(*(int *)PTR_DAT_0066b6ac + *(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14) * 0xc)
            == 1) {
          iVar1 = *(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14);
          if ((*(int *)(*(int *)PTR_DAT_0066b6ac + iVar1 * 0xc) == 1) &&
             (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar1 * 0xc) == 1)) {
            aiStack_3c[1] = aiStack_3c[1] + 1;
          }
          else {
            iVar1 = *(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14);
            if ((*(int *)(*(int *)PTR_DAT_0066b6ac + iVar1 * 0xc) == 1) &&
               (1 < *(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar1 * 0xc))) {
              iVar1 = *(int *)(*(int *)PTR_DAT_0066b6ac + 8 + iVar1 * 0xc);
              if (iVar1 == 2) {
                local_20 = local_20 + 1;
              }
              else if (iVar1 == 3) {
                local_1c = local_1c + 1;
              }
              else if (iVar1 == 4) {
                local_18 = local_18 + 1;
              }
            }
          }
        }
        else {
          aiStack_3c
          [*(int *)(*(int *)PTR_DAT_0066b6ac + *(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14) * 0xc)] =
               aiStack_3c
               [*(int *)(*(int *)PTR_DAT_0066b6ac +
                        *(int *)(*(int *)puVar2 + 4 + iVar4 * 0x14) * 0xc)] + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar5 = aiStack_3c + 1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *piVar5;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    param_1 = param_1 + (uint)bVar6 * -2 + 1;
  }
  return;
}

