// Address: 0041db4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041db4c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00406fb0();
  FUN_00403a84(*(undefined4 *)(iVar1 + 8));
  iVar1 = FUN_00406fb0();
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar2 = FUN_0041e104(iVar1);
  iVar3 = FUN_00406fb0();
  *(undefined4 *)(iVar3 + 8) = uVar2;
  FUN_0041df0c(iVar1,*(int *)(iVar1 + 8) + -1);
  if (*(int *)(iVar1 + 8) == 0) {
    iVar3 = FUN_00406fb0();
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_00403a84(iVar1);
  }
  return;
}

