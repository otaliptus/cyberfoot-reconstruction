// Address: 004726dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004726dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_0047266c(param_1);
  if (-1 < iVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x30);
    iVar2 = *(int *)(iVar1 + 8);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar3 != param_2) {
      FUN_0041df0c(iVar1,iVar3);
      FUN_0041e098(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x30),param_2,param_1);
    }
  }
  return;
}

