// Address: 00607ca0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00607ca0(int param_1,int param_2,undefined *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 local_18;
  int local_14;
  undefined *local_10;
  
  local_10 = (undefined *)0xffffffff;
  local_18 = 0xffffffff;
  iVar4 = 0xb;
  do {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar4 * 4);
    if ((0 < iVar1) && (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130))) {
      puVar3 = *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130);
      break;
    }
    iVar4 = iVar4 + -1;
    puVar3 = param_3;
  } while (iVar4 != 0);
  puVar2 = *(undefined **)(*(int *)PTR_DAT_0066af70 + 0xa8 + (int)puVar3 * 0x2f8);
  if ((((int)puVar2 < 1) ||
      (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + (int)puVar2 * 0x130) == '\0')) ||
     (puVar3 != *(undefined **)(*(int *)PTR_DAT_0066b5b8 + 0x20 + (int)puVar2 * 0x130))) {
    iVar4 = 10;
    do {
      puVar2 = *(undefined **)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar4 * 4);
      puVar3 = PTR_DAT_0066b238;
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + (int)puVar2 * 0x130) != '\0') break;
      iVar4 = iVar4 + -1;
      puVar3 = (undefined *)((int)puVar2 * 0x26);
      puVar2 = local_10;
    } while (iVar4 != 0);
  }
  local_10 = puVar2;
  if (0 < (int)param_3) {
    local_10 = param_3;
  }
  if (0 < (int)local_10) {
    if (param_2 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + (int)local_10 * 0x130)) {
      local_14 = 0x55;
    }
    else {
      local_14 = 0x4b;
    }
    iVar4 = FUN_004032c8(100,*(int *)PTR_DAT_0066b5b8,puVar3);
    if (local_14 < iVar4) {
      local_18 = 2;
    }
    else {
      local_18 = 1;
    }
  }
  *param_4 = local_10;
  param_4[1] = local_18;
  return;
}

