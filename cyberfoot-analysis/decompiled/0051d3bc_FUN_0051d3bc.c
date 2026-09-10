// Address: 0051d3bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051d3bc(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_0051d418(param_1);
  uVar1 = FUN_0051d4c8(param_1,4);
  uVar2 = FUN_0051d4c8(param_1,3);
  iVar4 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar3 = FUN_004027fc(iVar4);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    FUN_004032a8(uVar3,iVar4,0);
  }
  *(int *)(param_1 + 0x1c) = iVar4;
  return;
}

