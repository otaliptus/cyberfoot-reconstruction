// Address: 0060cd60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0060cd60(undefined4 param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_00402c38();
  iVar2 = FUN_00402c38();
  if (iVar2 < iVar1) {
    iVar1 = FUN_00402c38();
  }
  else if (iVar1 < iVar2) {
    iVar1 = FUN_00402c38();
  }
  else {
    iVar1 = FUN_00402c38();
  }
  if (param_4 != '\0') {
    iVar1 = FUN_00402c38();
  }
  FUN_00402c38();
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_5 * 0x2f8) <
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_3 * 0x2f8)) {
    local_c = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_3 * 0x2f8) -
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_5 * 0x2f8);
  }
  else if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_3 * 0x2f8) <
           *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_5 * 0x2f8)) {
    local_c = *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_3 * 0x2f8) -
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_5 * 0x2f8);
  }
  iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_3 * 0x2f8));
  if (iVar2 == 0) {
    iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_5 * 0x2f8));
    if (iVar2 != 1) {
      local_c = local_c + 5;
    }
  }
  iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_5 * 0x2f8));
  if (iVar2 == 0) {
    iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_3 * 0x2f8));
    if (iVar2 != 1) {
      local_c = local_c + -5;
    }
  }
  iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_3 * 0x2f8));
  if (iVar2 == 1) {
    iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_5 * 0x2f8));
    if (iVar2 != 0) {
      local_c = local_c + 5;
    }
  }
  iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_5 * 0x2f8));
  if (iVar2 == 1) {
    iVar2 = FUN_0064f2d0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_3 * 0x2f8));
    if (iVar2 != 0) {
      local_c = local_c + -5;
    }
  }
  iVar1 = iVar1 + local_c;
  if (0x1e < iVar1) {
    iVar1 = 0x1e;
  }
  if (iVar1 < -0x1e) {
    iVar1 = -0x1e;
  }
  return iVar1;
}

