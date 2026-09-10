// Address: 00469d9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469d9c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0046617c(param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_0040a9a8(&DAT_00469df0);
    param_1[0x19] = iVar1;
  }
  else {
    iVar1 = FUN_0040a988(iVar1 + 1);
    param_1[0x19] = iVar1;
    uVar2 = FUN_0040a99c(iVar1);
    FUN_0046618c(param_1,iVar1,uVar2);
  }
  FUN_00464c30();
  (**(code **)(*param_1 + 0xac))();
  return;
}

