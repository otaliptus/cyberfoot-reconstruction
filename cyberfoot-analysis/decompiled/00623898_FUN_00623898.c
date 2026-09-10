// Address: 00623898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00623898(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14 [4];
  
  puStack_24 = &stack0xfffffffc;
  local_14[0] = 0;
  puStack_28 = &LAB_00623bcc;
  puStack_2c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  iVar6 = 0;
  local_14[3] = param_1;
  FUN_0043b234(DAT_006d4918,0);
  FUN_00642c50(0x1fc,local_14);
  FUN_004e1414(*(undefined4 *)(local_14[3] + 0x2fc),local_14[0]);
  *(undefined4 *)PTR_DAT_0066aea4 = 2;
  DAT_006d4798 = 0;
  iVar3 = FUN_00645408();
  if (iVar3 == -1) {
    iVar3 = 1;
    do {
      iVar6 = iVar6 + 1;
      if (iVar3 == 1) {
        iVar4 = FUN_0065a250(3,10,1);
      }
      else {
        iVar4 = FUN_0065a250(0x1d,10,1);
      }
      if ((-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48)) &&
         (-1 < *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48))) {
        uVar7 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x54 + iVar4 * 0x48);
        iVar5 = FUN_0061edd0(local_14[3],
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + iVar4 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + iVar4 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48),
                             *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x50 + iVar4 * 0x48),uVar7);
        if ((iVar5 < 3) && (0 < iVar5)) {
          local_14[iVar6] = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48 + -4 + iVar5 * 4);
        }
        else {
          uVar7 = 0x6239e5;
          iVar5 = FUN_0061eb40(local_14[3],iVar4);
          local_14[iVar6] = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48 + -4 + iVar5 * 4);
        }
        if (iVar5 == 1) {
          iVar4 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48);
        }
        else {
          iVar4 = *(int *)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48);
        }
        puStack_2c = &DAT_00623be4;
        FUN_006494f8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_14[iVar6] * 0x2f8),
                     local_14[iVar6],0x14,uVar7);
        FUN_0064c36c(10,local_14[iVar6],
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + local_14[iVar6] * 0x2f8),1,
                     0xffffffff,0xffffffff,0xffffffff);
        FUN_0064c36c(10,iVar4,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar4 * 0x2f8),2,
                     0xffffffff,0xffffffff,0xffffffff);
        FUN_0064c4bc(10,local_14[iVar6],
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + local_14[iVar6] * 0x2f8),
                     iVar3,1,0xffffffff);
        FUN_0064c4bc(10,iVar4,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar4 * 0x2f8),iVar3
                     ,2,0xffffffff);
        FUN_006490a8(local_14[iVar6],1,10,iVar3);
        FUN_006490a8(iVar4,2,10,iVar3);
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x2dc + local_14[iVar6] * 0x2f8);
        *piVar1 = *piVar1 + 10;
        if (local_14[iVar6] < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
          *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + local_14[iVar6] * 0x2f8) =
               (longlong)
               ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + local_14[iVar6] * 0x2f8)
                     + _DAT_00623be8);
        }
        if (iVar4 < *(int *)(PTR_DAT_0066ac78 + 0x3c)) {
          *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar4 * 0x2f8) =
               (longlong)
               ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar4 * 0x2f8) +
                     _DAT_00623bec);
        }
        if (iVar3 == 1) {
          FUN_00657674(10,3,0xffffffff,0xffffffff,0xffffffff);
        }
        else {
          FUN_00657674(10,0x1d,0xffffffff,0xffffffff,0xffffffff);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 3);
  }
  FUN_0060ee88(local_14[3]);
  puVar2 = puStack_24;
  *in_FS_OFFSET = puStack_2c;
  puStack_24 = &LAB_00623bd3;
  puStack_28 = (undefined1 *)0x623bcb;
  FUN_00404ff0(local_14,puStack_2c,puVar2);
  return;
}

