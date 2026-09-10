// Address: 0048f624
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048f624(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x1bc);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x1b8) + 0x18);
  *piVar1 = *piVar1 + (iVar3 >> 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1b8) + 8))();
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(iVar2 + 0x14);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x148); iVar3 = iVar3 + 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x114);
  if (*(int *)(param_1 + 0x1a0) == 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return 1;
}

