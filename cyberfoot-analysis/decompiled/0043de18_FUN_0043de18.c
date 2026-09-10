// Address: 0043de18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043de18(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar2);
      if ((param_2 == *(int *)(iVar1 + 0x34)) && (*(int *)(iVar1 + 0x30) == param_3)) {
        return iVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar2 = FUN_0043dc78(PTR_PTR_0043db04,1,param_2,param_3);
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),iVar2);
  return iVar2;
}

