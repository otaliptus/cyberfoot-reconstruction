// Address: 0048fc04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048fc04(int param_1,undefined4 param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1c4);
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*(int *)(iVar1 + 0x24) == 0) {
    uVar3 = 2;
    if (*(uint *)(iVar1 + 0x2c) < 2) {
      uVar3 = *(uint *)(iVar1 + 0x2c);
    }
    iVar2 = *param_5;
    if ((uint)(param_4 - iVar2) < uVar3) {
      uVar3 = param_4 - iVar2;
    }
    local_18 = *(undefined4 *)(param_6 + iVar2 * 4);
    if (uVar3 < 2) {
      local_14 = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0x24) = 1;
    }
    else {
      local_14 = *(undefined4 *)(param_6 + 4 + iVar2 * 4);
    }
    (**(code **)(iVar1 + 0xc))(param_1,param_2,*param_3,&local_18);
  }
  else {
    FUN_00497714(iVar1 + 0x20,0,*param_5 * 4 + param_6,*(undefined4 *)(iVar1 + 0x28),1,0);
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *param_5 = *param_5 + uVar3;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) - uVar3;
  if (*(int *)(iVar1 + 0x24) == 0) {
    *local_10 = *local_10 + 1;
  }
  return;
}

