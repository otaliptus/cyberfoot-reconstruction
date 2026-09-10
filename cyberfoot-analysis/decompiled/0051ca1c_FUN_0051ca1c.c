// Address: 0051ca1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ca1c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_c;
  
  iVar2 = param_1[0x1c];
  iVar1 = param_2 / iVar2;
  iVar3 = param_2 % iVar2;
  local_c = (uint)(iVar3 != 0);
  if (param_1[0x18] < (int)(param_1[0x1e] + iVar1 + local_c)) {
    iVar1 = param_1[0x18] - param_1[0x1e];
    iVar3 = param_2 - iVar1 * iVar2;
    iVar2 = FUN_0051c8c4(param_1,iVar3,param_1[0x18]);
    local_c = iVar2 + 1;
  }
  iVar2 = FUN_0051c8c4(param_1,param_2,param_1[0x18]);
  if (iVar2 + 1 < (int)(local_c + iVar1)) {
    (**(code **)(*param_1 + 4))();
    FUN_0051c93c(param_1,param_2);
  }
  else {
    FUN_0051c91c(param_1);
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      FUN_0051c830(param_1,(int)*(short *)((int)param_1 + 0x4a) + param_1[0x1c] + -2);
    }
    if (0 < iVar3) {
      if ((char)param_1[0xe] == '\0') {
        if (iVar3 == 1) {
          FUN_0051c830(param_1,param_1[0x1b]);
        }
        else {
          FUN_0051c830(param_1,*(short *)((int)param_1 + 0x4a) + iVar3 + -2);
        }
      }
      else {
        FUN_0051c93c(param_1,iVar3);
      }
    }
    FUN_0051c924(param_1);
  }
  return;
}

