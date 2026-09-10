// Address: 0061de24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061de24(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ac7c);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066ac7c + 0x14 + iVar4 * 0x18) == param_3) {
        iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b160);
        iVar2 = iVar2 + 1;
        FUN_004060a8(PTR_DAT_0066b160,PTR_DAT_00488d80,1,iVar2);
        puVar5 = (undefined4 *)(*(int *)PTR_DAT_0066ac7c + iVar4 * 0x18);
        puVar6 = (undefined4 *)(*(int *)PTR_DAT_0066b160 + -0x18 + iVar2 * 0x18);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        *(undefined4 *)(*(int *)PTR_DAT_0066b160 + -4 + iVar2 * 0x18) = param_2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

