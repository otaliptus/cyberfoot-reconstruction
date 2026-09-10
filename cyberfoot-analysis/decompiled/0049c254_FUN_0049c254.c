// Address: 0049c254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c254(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    iVar3 = 0;
    while (iVar2 = iVar2 >> 1, iVar2 != 0) {
      iVar3 = iVar3 + 1;
    }
    if (0xe < iVar3) {
      piVar1 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(*piVar1 + 0x14) = 0x28;
      (**(code **)*piVar1)();
    }
    FUN_0049c1fc(param_1,*(undefined4 *)(param_1 + 0x34),iVar3 << 4);
    if (iVar3 != 0) {
      FUN_0049c140(param_1,*(undefined4 *)(param_1 + 0x38),iVar3);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_0049c228(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

