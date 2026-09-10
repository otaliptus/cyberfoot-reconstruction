// Address: 004d366c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d366c(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00405260(param_2);
  uVar3 = FUN_00405250(param_1);
  while ((0 < iVar2 &&
         ((sVar1 = *(short *)(param_2 + -2 + iVar2 * 2), sVar1 == 0 ||
          (iVar4 = thunk_FUN_004d33d9(uVar3,sVar1), iVar4 == 0))))) {
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

