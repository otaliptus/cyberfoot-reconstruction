// Address: 0048c770
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048c770(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint local_1c;
  uint local_18;
  
  iVar1 = param_1[1];
  local_18 = (uint)(0x3b9ac9f4 / (ulonglong)(uint)(param_3 << 7));
  if (local_18 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)();
  }
  if ((int)param_4 <= (int)local_18) {
    local_18 = param_4;
  }
  *(uint *)(iVar1 + 0x50) = local_18;
  iVar1 = FUN_0048c4cc(param_1,param_2,param_4 << 2);
  local_1c = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - local_1c <= local_18) {
        local_18 = param_4 - local_1c;
      }
      iVar2 = FUN_0048c5fc(param_1,param_2,local_18 * param_3 * 0x80);
      piVar3 = (int *)(iVar1 + local_1c * 4);
      for (uVar4 = local_18; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar3 = iVar2;
        local_1c = local_1c + 1;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + param_3 * 0x80;
      }
    } while (local_1c < param_4);
  }
  return iVar1;
}

