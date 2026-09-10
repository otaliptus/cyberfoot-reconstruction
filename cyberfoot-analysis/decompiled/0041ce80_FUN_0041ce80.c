// Address: 0041ce80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ce80(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar3);
        uVar1 = FUN_0041ccb8(iVar2,param_2);
        *(undefined1 *)(iVar2 + 0x10) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

