// Address: 0046cca0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cca0(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = FUN_0046cc7c(param_1);
  iVar4 = (int)sVar3;
  if (-1 < iVar4) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x194);
    iVar2 = *(int *)(iVar1 + 8);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = (short)iVar2 + -1;
    }
    if (iVar4 != param_2) {
      FUN_0041df0c(iVar1,iVar4);
      FUN_0041e098(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x194),(int)param_2,param_1);
    }
  }
  return;
}

