// Address: 004942c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004942c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54,param_3);
  *(undefined4 **)(param_1 + 0x1c0) = puVar1;
  *puVar1 = &LAB_00494070;
  puVar1 = puVar1 + 0xb;
  iVar3 = *(int *)(param_1 + 0xd8);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x24); iVar4 = iVar4 + 1) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(undefined4 *)(iVar3 + 0x50) = uVar2;
    FUN_0048aaf4();
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 0x54;
  }
  return;
}

