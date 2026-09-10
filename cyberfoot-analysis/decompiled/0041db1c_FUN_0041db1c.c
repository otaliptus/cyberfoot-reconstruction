// Address: 0041db1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041db1c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00406fb0();
  iVar1 = *(int *)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_0041e01c(iVar1,iVar4);
      (**(code **)(*piVar2 + 0xc))();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

