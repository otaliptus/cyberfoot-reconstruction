// Address: 0048cab8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048cab8(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  iVar1 = param_2[2];
  local_10 = param_2[6] * iVar1;
  iVar4 = 0;
  while( true ) {
    if (param_2[4] <= iVar4) {
      return;
    }
    if (param_2[5] < param_2[4] - iVar4) {
      iVar2 = param_2[5];
    }
    else {
      iVar2 = param_2[4] - iVar4;
    }
    iVar3 = param_2[6] + iVar4;
    if (param_2[7] - iVar3 <= iVar2) {
      iVar2 = param_2[7] - iVar3;
    }
    if (param_2[1] - iVar3 <= iVar2) {
      iVar2 = param_2[1] - iVar3;
    }
    if (iVar2 < 1) break;
    iVar2 = iVar2 * iVar1;
    if (param_3 == 0) {
      (*(code *)param_2[0xc])
                (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar4 * 4),iVar2,local_10);
    }
    else {
      (*(code *)param_2[0xd])
                (param_1,param_2 + 0xc,*(undefined4 *)(*param_2 + iVar4 * 4),iVar2,local_10);
    }
    local_10 = local_10 + iVar2;
    iVar4 = iVar4 + param_2[5];
  }
  return;
}

