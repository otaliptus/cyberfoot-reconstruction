// Address: 00493388
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00493388(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_14;
  int local_10;
  
  iVar6 = *(int *)(param_1 + 0x1ac);
  local_14 = 0;
  if ((*(int *)(param_1 + 0xdc) == 0) || (*(int *)(param_1 + 0xa0) == 0)) {
    local_14 = 0;
  }
  else {
    if (*(int *)(iVar6 + 0x70) == 0) {
      uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) * 0x18);
      *(undefined4 *)(iVar6 + 0x70) = uVar2;
    }
    piVar7 = *(int **)(iVar6 + 0x70);
    local_10 = *(int *)(param_1 + 0xd8);
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x24); iVar6 = iVar6 + 1) {
      psVar1 = *(short **)(local_10 + 0x4c);
      if (psVar1 == (short *)0x0) {
        return 0;
      }
      if ((((*psVar1 == 0) || (psVar1[1] == 0)) || (psVar1[8] == 0)) ||
         (((psVar1[0x10] == 0 || (psVar1[9] == 0)) || (psVar1[2] == 0)))) {
        return 0;
      }
      piVar3 = (int *)(*(int *)(param_1 + 0xa0) + iVar6 * 0x100);
      if (*piVar3 < 0) {
        return 0;
      }
      iVar4 = 1;
      piVar5 = piVar7;
      do {
        piVar5 = piVar5 + 1;
        piVar3 = piVar3 + 1;
        *piVar5 = *piVar3;
        if (*piVar3 != 0) {
          local_14 = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      piVar7 = piVar7 + 6;
      local_10 = local_10 + 0x54;
    }
  }
  return local_14;
}

