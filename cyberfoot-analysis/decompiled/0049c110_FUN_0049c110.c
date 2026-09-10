// Address: 0049c110
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c110(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x18);
  iVar3 = (*(code *)puVar1[3])();
  if (iVar3 == 0) {
    piVar2 = *(int **)(param_1 + 0x20);
    *(undefined4 *)(*piVar2 + 0x14) = 0x18;
    (**(code **)*piVar2)();
  }
  *(undefined4 *)(param_1 + 0x10) = *puVar1;
  *(undefined4 *)(param_1 + 0x14) = puVar1[1];
  return;
}

