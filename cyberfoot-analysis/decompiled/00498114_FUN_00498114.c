// Address: 00498114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498114(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  iVar1 = param_1[0xe];
  if (param_1[5] != 100) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((iVar1 == 3) && (param_1[0xf] == 3)) {
    local_10 = 10;
  }
  else if (iVar1 < 5) {
    local_10 = iVar1 * 4 + 2;
  }
  else {
    local_10 = iVar1 * 6;
  }
  if ((param_1[0x5b] == 0) || (param_1[0x5c] < local_10)) {
    iVar2 = local_10;
    if (local_10 < 0xb) {
      iVar2 = 10;
    }
    param_1[0x5c] = iVar2;
    iVar2 = (**(code **)param_1[1])(param_1,0,iVar2 * 0x24);
    param_1[0x5b] = iVar2;
  }
  iVar2 = param_1[0x5b];
  param_1[0x2a] = iVar2;
  param_1[0x29] = local_10;
  if ((iVar1 == 3) && (param_1[0xf] == 3)) {
    uVar3 = FUN_004980c8(iVar2,3,0,1);
    uVar3 = FUN_00498064(uVar3,0,1,2,0,5);
    uVar3 = FUN_00498064(uVar3,2,1,1,0,0x3f);
    uVar3 = FUN_00498064(uVar3,1,1,1,0,0x3f);
    uVar3 = FUN_00498064(uVar3,0,6,2,0,0x3f);
    uVar3 = FUN_00498064(uVar3,0,1,1,2,0x3f);
    uVar3 = FUN_004980c8(uVar3,3,1,0);
    uVar3 = FUN_00498064(uVar3,2,1,0,1,0x3f);
    uVar3 = FUN_00498064(uVar3,1,1,0,1,0x3f);
    FUN_00498064(uVar3,0,1,0,1,0x3f);
  }
  else {
    uVar3 = FUN_004980c8(iVar2,iVar1,0,1);
    uVar3 = FUN_0049808c(uVar3,iVar1,1,2,0,5);
    uVar3 = FUN_0049808c(uVar3,iVar1,6,2,0,0x3f);
    uVar3 = FUN_0049808c(uVar3,iVar1,1,1,2,0x3f);
    uVar3 = FUN_004980c8(uVar3,iVar1,1,0);
    FUN_0049808c(uVar3,iVar1,1,0,1,0x3f);
  }
  return;
}

