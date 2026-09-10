// Address: 004a6ae8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a6ae8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_004a66ac(param_1,param_2,param_3,param_4);
  if (((char)uVar1 != '\0') && (2 < param_4)) {
    FUN_00404adc(param_1 + 0x14,*(undefined4 *)(param_1 + 4));
    iVar2 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x14));
    FUN_00404f30(param_1 + 0x18,(param_4 - iVar2) + -1);
    uVar3 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x18));
    iVar4 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x14));
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = thunk_FUN_00404db0(param_1 + 0x18);
    FUN_00408034(uVar5,iVar4 + iVar2 + 1,uVar3);
  }
  return uVar1;
}

