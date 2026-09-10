// Address: 0063ad9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063ad9c(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  puStack_24 = &LAB_0063b0f0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  DAT_006d52e0 = 0;
  DAT_006d52e4 = 0;
  DAT_006d52e8 = 0;
  local_10 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
    local_8 = 10;
  }
  else {
    local_8 = 7;
  }
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar3 = iVar3 + -1;
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      iVar4 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
      if ((-1 < iVar4) && (iVar4 == *(int *)(PTR_DAT_0066ac78 + 8))) {
        local_10 = local_10 + 1;
        FUN_004060a8(&local_c,PTR_DAT_0063ad7c,1,local_10);
        *(int *)(local_c + -4 + local_10 * 4) = iVar5;
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar5 * 0x130) == 1) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130);
          *piVar1 = *piVar1 + 1;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar5 * 0x130) = 0;
        }
        if (1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar5 * 0x130)) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar5 * 0x130);
          *piVar1 = *piVar1 + -1;
        }
        if ((local_8 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + iVar5 * 0x130)) &&
           (iVar4 = FUN_004032c8(10), 5 < iVar4)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + iVar5 * 0x130) = 0;
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xec + iVar5 * 0x130) = 1;
          piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130);
          *piVar1 = *piVar1 + -1;
          FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,2,0,0,iVar5);
        }
        if (3 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 3;
        }
        if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) < 1) {
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  iVar5 = FUN_004032c8(100);
  if (iVar5 == 1) {
    do {
      FUN_00405ef4(local_c);
      iVar5 = FUN_004032c8();
      iVar5 = *(int *)(local_c + iVar5 * 4);
    } while (iVar5 == 0);
    for (; (iVar3 == 0 || (iVar5 == iVar3)); iVar3 = *(int *)(local_c + iVar3 * 4)) {
      FUN_00405ef4(local_c);
      iVar3 = FUN_004032c8();
    }
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 1;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar5 * 0x130) = 4;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar3 * 0x130) = 1;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar3 * 0x130) = 4;
    FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,4,0,iVar3,iVar5);
  }
  if ((*(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 0x14) &&
     (iVar3 = FUN_004032c8(0x1e), iVar3 == 1)) {
    do {
      FUN_00405ef4(local_c);
      iVar3 = FUN_004032c8();
      iVar3 = *(int *)(local_c + iVar3 * 4);
    } while (iVar3 == 0);
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar3 * 0x130) = 1;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + iVar3 * 0x130) = 4;
    FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,5,0,0,iVar3);
  }
  iVar3 = FUN_00405ef4(local_c);
  puVar2 = puStack_20;
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar5 = 0;
    do {
      (&DAT_006d52dc)
      [*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + *(int *)(local_c + iVar5 * 4) * 0x130)] =
           (&DAT_006d52dc)
           [*(int *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + *(int *)(local_c + iVar5 * 4) * 0x130)] + 1;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0063b0f7;
  puStack_24 = (undefined1 *)0x63b0ef;
  FUN_004061c8(&local_c,PTR_DAT_0063ad7c,puVar2);
  return;
}

