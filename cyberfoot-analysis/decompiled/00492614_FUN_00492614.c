// Address: 00492614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492614(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x13c);
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 3);
  *(int *)(iVar1 + 0x38) = iVar3;
  *(int *)(iVar1 + 0x3c) = iVar3 + *(int *)(param_1 + 0x24) * 4;
  uStack_10 = *(int *)(param_1 + 0xd8);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x24); iVar3 = iVar3 + 1) {
    iVar4 = (*(int *)(uStack_10 + 0xc) * *(int *)(uStack_10 + 0x24)) / *(int *)(param_1 + 0x13c);
    iVar5 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,(iVar2 + 4) * iVar4 * 8);
    iVar5 = iVar5 + iVar4 * 4;
    *(int *)(*(int *)(iVar1 + 0x38) + iVar3 * 4) = iVar5;
    *(int *)(*(int *)(iVar1 + 0x3c) + iVar3 * 4) = iVar5 + (iVar2 + 4) * iVar4 * 4;
    uStack_10 = uStack_10 + 0x54;
  }
  return;
}

