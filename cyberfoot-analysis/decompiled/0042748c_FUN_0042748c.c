// Address: 0042748c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042748c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = FUN_0041e078(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),param_1);
    if (-1 < iVar3) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      iVar2 = *(int *)(iVar1 + 8);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar2 <= param_2) {
        param_2 = iVar2 + -1;
      }
      if (iVar3 != param_2) {
        FUN_0041df0c(iVar1,iVar3);
        FUN_0041e098(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),param_2,param_1);
      }
    }
  }
  return;
}

