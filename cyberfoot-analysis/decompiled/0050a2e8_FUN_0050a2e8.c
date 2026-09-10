// Address: 0050a2e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0050a2e8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  iVar2 = FUN_0050b040(*(undefined4 *)(param_1 + 0x38));
  if (iVar2 + -1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 == 0) {
    uVar3 = CONCAT31((int3)((uint)(iVar2 + -1) >> 8),1);
  }
  else {
    iVar2 = FUN_0050b040(*(undefined4 *)(param_1 + 0x38));
    uVar4 = (undefined3)((uint)(iVar2 + -1) >> 8);
    if (iVar1 == iVar2 + -1) {
      uVar3 = CONCAT31(uVar4,3);
    }
    else {
      uVar3 = CONCAT31(uVar4,2);
    }
  }
  return uVar3;
}

