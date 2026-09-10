// Address: 006284c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006284c8(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_18;
  
  puVar2 = PTR_DAT_0066af70;
  local_18 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066af70);
  if (-1 < local_18 + -1) {
    iVar6 = 0;
    do {
      *(uint *)(*(int *)puVar2 + 0x98 + iVar6 * 0x2f8) =
           (uint)*(byte *)(DAT_006d4940 + 3 + iVar6 * 200);
      FUN_004030e0(*(int *)puVar2 + iVar6 * 0x2f8,DAT_006d4940 + 4 + iVar6 * 200,0x19);
      *(undefined4 *)(*(int *)puVar2 + 0xac + iVar6 * 0x2f8) =
           *(undefined4 *)(DAT_006d4940 + 0xa8 + iVar6 * 200);
      *(undefined4 *)(*(int *)puVar2 + 0xb0 + iVar6 * 0x2f8) =
           *(undefined4 *)(DAT_006d4940 + 0xac + iVar6 * 200);
      FUN_004030e0(*(int *)puVar2 + 0x1a + iVar6 * 0x2f8,DAT_006d4940 + 0x71 + iVar6 * 200,0x1e);
      FUN_004030e0(*(int *)puVar2 + 0x1d0 + iVar6 * 0x2f8,DAT_006d4940 + 0x38 + iVar6 * 200,0x1e);
      *(uint *)(*(int *)puVar2 + 0x40 + iVar6 * 0x2f8) =
           (uint)*(byte *)(DAT_006d4940 + 0xb0 + iVar6 * 200);
      *(undefined4 *)(*(int *)puVar2 + 0x58 + iVar6 * 0x2f8) =
           *(undefined4 *)(DAT_006d4940 + 0xb4 + iVar6 * 200);
      *(undefined4 *)(*(int *)puVar2 + 0x2e4 + iVar6 * 0x2f8) =
           *(undefined4 *)(DAT_006d4940 + 0xb8 + iVar6 * 200);
      *(undefined4 *)(*(int *)puVar2 + 0x2e8 + iVar6 * 0x2f8) = 1;
      if (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca) {
        *(undefined4 *)(*(int *)puVar2 + 0x3c + iVar6 * 0x2f8) = 0xca;
      }
      else {
        *(uint *)(*(int *)puVar2 + 0x3c + iVar6 * 0x2f8) =
             (uint)*(byte *)(DAT_006d4940 + iVar6 * 200);
      }
      *(undefined4 *)(*(int *)puVar2 + 0x50 + iVar6 * 0x2f8) = 100;
      *(undefined4 *)(*(int *)puVar2 + 0x54 + iVar6 * 0x2f8) = 100;
      if (*(int *)(PTR_DAT_0066ac78 + 0x3c) <= iVar6) {
        uVar1 = *(uint *)(*(int *)puVar2 + 0x98 + iVar6 * 0x2f8);
        if (uVar1 < 0xc) {
          *(undefined4 *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) = 4;
        }
        else if (uVar1 - 0xc < 5) {
          *(undefined4 *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) = 3;
        }
        else if (uVar1 - 0x11 < 2) {
          *(undefined4 *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) = 2;
        }
        else if (uVar1 - 0x13 < 7) {
          *(undefined4 *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) = 1;
        }
      }
      iVar3 = *(int *)(DAT_006d4940 + 0xc4 + iVar6 * 200);
      if ((iVar3 < 1) || (119999 < iVar3)) {
        iVar3 = 1;
        puVar4 = &DAT_0066a784;
        do {
          *(undefined4 *)(*(int *)puVar2 + iVar6 * 0x2f8 + 0x200 + iVar3 * 4) =
               *(undefined4 *)(puVar4 + *(int *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) * 0x10 + -4)
          ;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 4;
        } while (iVar3 != 5);
      }
      else {
        FUN_00628410(param_1,iVar6);
      }
      iVar3 = 1;
      puVar5 = &DAT_0066a7d4;
      do {
        *(undefined4 *)(*(int *)puVar2 + iVar6 * 0x2f8 + 0x1f0 + iVar3 * 4) =
             puVar5[*(int *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) * 4 + -1];
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar3 != 5);
      if (PTR_DAT_0066ac78[0x170] == '\0') {
        *(longlong *)(*(int *)puVar2 + 0x48 + iVar6 * 0x2f8) =
             (longlong)
             ROUND((float)*(int *)(&DAT_0066a834 +
                                  *(int *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) * 8) *
                   _DAT_00628770);
      }
      else {
        *(longlong *)(*(int *)puVar2 + 0x48 + iVar6 * 0x2f8) =
             (longlong)
             ROUND((float)*(int *)(&DAT_0066a830 +
                                  *(int *)(*(int *)puVar2 + 0x7c + iVar6 * 0x2f8) * 8) *
                   _DAT_00628770);
      }
      iVar3 = FUN_004032c8(99);
      *(longlong *)(*(int *)puVar2 + 0x48 + iVar6 * 0x2f8) =
           (longlong)
           ROUND((float)*(longlong *)(*(int *)puVar2 + 0x48 + iVar6 * 0x2f8) +
                 ((float)(iVar3 + 1) / _DAT_00628774) * _DAT_00628770);
      iVar6 = iVar6 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

