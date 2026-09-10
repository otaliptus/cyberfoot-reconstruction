// Address: 0049e72c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049e72c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x14);
  if (*(uint *)(param_1 + 0x10) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  if (uVar3 != 0) {
    FUN_0049de20();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar3;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *piVar1 = *piVar1 + uVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar3;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x14);
    *piVar1 = *piVar1 - uVar3;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}

