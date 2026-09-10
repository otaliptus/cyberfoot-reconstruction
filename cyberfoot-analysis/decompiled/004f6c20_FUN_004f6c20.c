// Address: 004f6c20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6c20(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(*(int *)(param_4 + -4) + 0x1028);
  if (0 < (int)uVar1) {
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_004f6b54(iVar3,(*(int *)(*(int *)(param_4 + -4) + 0x1028) + -1) - iVar3,param_3);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
        param_3 = param_4;
      } while (iVar2 != 0);
    }
  }
  return;
}

