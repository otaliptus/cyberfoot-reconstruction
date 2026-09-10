// Address: 0056fb8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0056fb8c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_2ec [180];
  int local_1c [4];
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0x40))(param_2,0xb5);
  (**(code **)(*local_c + 0x34))(local_c,0xb5);
  iVar3 = 0xb4;
  piVar1 = local_1c;
  do {
    *piVar1 = iVar3 * iVar3;
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + -1;
  } while (iVar3 != -1);
  local_1c[2] = 0xb4;
  local_1c[3] = 0;
  do {
    iVar3 = FUN_004303f0(local_c,local_1c[3]);
    local_1c[1] = local_2ec[local_1c[2]];
    iVar4 = 0;
    do {
      iVar2 = FUN_00402c38();
      *(undefined4 *)(iVar3 + iVar4 * 4) = *(undefined4 *)(local_8 + iVar2 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xb5);
    local_1c[2] = local_1c[2] + -1;
    local_1c[3] = local_1c[3] + 1;
  } while (local_1c[3] != 0xb5);
  return;
}

