// Address: 00491154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x70);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x44);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x78); iVar4 = iVar4 + 1) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  }
  return;
}

