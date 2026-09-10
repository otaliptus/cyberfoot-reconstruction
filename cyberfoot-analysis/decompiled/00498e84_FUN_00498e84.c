// Address: 00498e84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498e84(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  local_14 = 0;
  iVar3 = param_1[0x10];
  for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
    iVar2 = FUN_00498948(param_1,*(undefined4 *)(iVar3 + 0x10));
    local_14 = local_14 + iVar2;
    iVar3 = iVar3 + 0x54;
  }
  if (((param_1[0x2c] == 0) && (param_1[0x38] == 0)) && (param_1[0xd] == 8)) {
    bVar1 = true;
    iVar3 = param_1[0x10];
    for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
      if ((1 < *(int *)(iVar3 + 0x14)) || (1 < *(int *)(iVar3 + 0x18))) {
        bVar1 = false;
      }
      iVar3 = iVar3 + 0x54;
    }
    if ((local_14 != 0) && (bVar1)) {
      bVar1 = false;
      *(undefined4 *)(*param_1 + 0x14) = 0x4b;
      (**(code **)(*param_1 + 4))(param_1,0);
    }
  }
  else {
    bVar1 = false;
  }
  if (param_1[0x2c] == 0) {
    if (param_1[0x38] == 0) {
      if (bVar1) {
        FUN_00498b38(param_1,0xc0);
      }
      else {
        FUN_00498b38(param_1,0xc1);
      }
    }
    else {
      FUN_00498b38(param_1,0xc2);
    }
  }
  else {
    FUN_00498b38(param_1,0xc9);
  }
  return;
}

