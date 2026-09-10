// Address: 0041dac4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041dac4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00406fb0();
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
    iVar2 = FUN_00406fb0();
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  iVar2 = FUN_00406fb0();
  FUN_0041dec0(iVar1,*(undefined4 *)(iVar2 + 8));
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  iVar1 = FUN_00406fb0();
  *(undefined4 *)(iVar1 + 8) = uVar3;
  return;
}

