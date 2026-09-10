// Address: 0064d890
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0064d890(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_18;
  
  puVar3 = PTR_DAT_0066b5b8;
  local_18 = 0;
  iVar7 = 0;
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x40);
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar6 = 0;
    do {
      if (((*(int *)(*(int *)puVar3 + 0x1c + iVar6 * 0x130) == param_1) &&
          (*(int *)(*(int *)puVar3 + 0x20 + iVar6 * 0x130) < iVar1 + iVar2)) &&
         (-1 < *(int *)(*(int *)puVar3 + 0x20 + iVar6 * 0x130))) {
        if (*(double *)(*(int *)puVar3 + 0x68 + iVar6 * 0x130) <=
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
          iVar7 = iVar7 + 1;
          if (*(int *)(*(int *)puVar3 + 0x24 + iVar6 * 0x130) == 0) {
            local_18 = local_18 + 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((iVar7 - local_18 < 0x12) || (local_18 < 2)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

