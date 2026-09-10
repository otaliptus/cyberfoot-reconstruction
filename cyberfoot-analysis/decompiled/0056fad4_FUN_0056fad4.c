// Address: 0056fad4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0056fad4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2ec [181];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0x40))(param_2,0xb5);
  (**(code **)(*local_c + 0x34))(local_c,0xb5);
  iVar1 = 0;
  iVar3 = 0xb4;
  do {
    local_2ec[iVar1] = iVar3 * iVar3;
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  local_14 = 0xb4;
  local_10 = 0;
  do {
    iVar1 = FUN_004303f0(local_c,local_10);
    local_18 = local_2ec[local_14];
    iVar3 = 0;
    do {
      iVar2 = FUN_00402c38();
      *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(local_8 + iVar2 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xb5);
    local_14 = local_14 + -1;
    local_10 = local_10 + 1;
  } while (local_10 != 0xb5);
  return;
}

