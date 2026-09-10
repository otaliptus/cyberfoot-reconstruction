// Address: 0064901c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064901c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  
  local_c = param_3;
  do {
    iVar1 = *(int *)(param_1 + ((uint)(local_c + param_4) >> 1) * 4);
    iVar4 = param_4;
    iVar5 = local_c;
    do {
      while (*(int *)(param_1 + iVar5 * 4) - iVar1 < 0) {
        iVar5 = iVar5 + 1;
      }
      while (iVar2 = *(int *)(param_1 + iVar4 * 4), iVar2 != iVar1 && -1 < iVar2 - iVar1) {
        iVar4 = iVar4 + -1;
      }
      if (iVar5 <= iVar4) {
        uVar3 = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = uVar3;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      }
    } while (iVar5 <= iVar4);
    if (local_c < iVar4) {
      FUN_0064901c(param_1,param_2,local_c,iVar4);
    }
    local_c = iVar5;
  } while (iVar5 < param_4);
  return;
}

