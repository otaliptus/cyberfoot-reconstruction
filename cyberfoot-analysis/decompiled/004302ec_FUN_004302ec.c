// Address: 004302ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004302ec(int param_1)

{
  int iVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if ((*(int *)(iVar1 + 8) == 0) || (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x14))) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar2 = CONCAT31(uVar3,1);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT31(uVar3,1);
  }
  return uVar2;
}

