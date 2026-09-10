// Address: 0051a650
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a650(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = param_4 + -0x800;
  local_8 = param_1;
  do {
    *(undefined4 *)(param_4 + -0x804) =
         *(undefined4 *)(iVar4 + ((uint)(local_8 + param_2) >> 1) * 8);
    iVar2 = param_2;
    iVar3 = local_8;
    do {
      while (iVar1 = *(int *)(iVar4 + iVar3 * 8),
            iVar1 != *(int *)(param_4 + -0x804) && -1 < iVar1 - *(int *)(param_4 + -0x804)) {
        iVar3 = iVar3 + 1;
      }
      while (*(int *)(iVar4 + iVar2 * 8) - *(int *)(param_4 + -0x804) < 0) {
        iVar2 = iVar2 + -1;
      }
      iVar1 = param_4;
      if (iVar3 <= iVar2) {
        *(undefined4 *)(param_4 + -0x80c) = *(undefined4 *)(iVar4 + iVar3 * 8);
        *(undefined4 *)(param_4 + -0x808) = *(undefined4 *)(param_4 + -0x7fc + iVar3 * 8);
        *(undefined4 *)(iVar4 + iVar3 * 8) = *(undefined4 *)(iVar4 + iVar2 * 8);
        *(undefined4 *)(param_4 + -0x7fc + iVar3 * 8) =
             *(undefined4 *)(param_4 + -0x7fc + iVar2 * 8);
        *(undefined4 *)(iVar4 + iVar2 * 8) = *(undefined4 *)(param_4 + -0x80c);
        iVar1 = *(int *)(param_4 + -0x808);
        *(int *)(param_4 + -0x7fc + iVar2 * 8) = iVar1;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      }
    } while (iVar3 <= iVar2);
    if (local_8 < iVar2) {
      FUN_0051a650(local_8,iVar2,iVar1,param_4);
    }
    local_8 = iVar3;
  } while (iVar3 < param_2);
  return;
}

