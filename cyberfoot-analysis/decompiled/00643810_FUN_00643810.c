// Address: 00643810
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00643810(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_14;
  
  FUN_004060a8(&DAT_006d5324,PTR_DAT_006426bc,1,0);
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b1b8);
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar3 = 0;
    do {
      if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
        if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
          if (param_2 < 10) {
            local_14 = *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18);
          }
          else {
            local_14 = 5.0;
          }
        }
        else if (param_2 < 10) {
          local_14 = 10.0;
        }
        else {
          local_14 = 16.0;
        }
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1) {
        if (param_2 < 5) {
          local_14 = *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18);
        }
        else {
          local_14 = 3.0;
        }
      }
      else if (param_2 < 5) {
        local_14 = 5.0;
      }
      else {
        local_14 = 9.0;
      }
      if ((*(int *)(*(int *)PTR_DAT_0066b1b8 + 8 + iVar3 * 0x18) == param_1) &&
         (local_14 <= *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18))) {
        iVar2 = FUN_00405eec(DAT_006d5324);
        FUN_004060a8(&DAT_006d5324,PTR_DAT_006426bc,1,iVar2 + 1);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(undefined4 *)(DAT_006d5324 + 0xc + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 8 + iVar3 * 0x18);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(undefined4 *)(DAT_006d5324 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + iVar3 * 0x18);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(float *)(DAT_006d5324 + 4 + iVar2 * 0x18) =
             *(float *)(*(int *)PTR_DAT_0066b1b8 + 0xc + iVar3 * 0x18) /
             *(float *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(undefined4 *)(DAT_006d5324 + 8 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x10 + iVar3 * 0x18);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(undefined4 *)(DAT_006d5324 + 0x10 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 0x14 + iVar3 * 0x18);
        iVar2 = FUN_00405ef4(DAT_006d5324);
        *(undefined4 *)(DAT_006d5324 + 0x14 + iVar2 * 0x18) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b1b8 + 4 + iVar3 * 0x18);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  DAT_006d5314 = FUN_00405eec(DAT_006d5324);
  FUN_004bcdb0(DAT_006d5324,0x18,0,&LAB_006437a4,DAT_006d5314 + -1);
  return;
}

