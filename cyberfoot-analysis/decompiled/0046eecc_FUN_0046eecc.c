// Address: 0046eecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046eecc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0046eeb8(param_1,param_2);
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    iVar2 = FUN_0046e968(iVar1);
    if (0 < iVar2) {
      uVar3 = FUN_0046eebc(iVar1);
      FUN_0046eecc(uVar3,param_2);
    }
  }
  return;
}

