// Address: 0049c2b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049c2b8(int param_1,char param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_0049c254(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0049c1dc(param_1);
    puVar2 = *(undefined1 **)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *puVar2 = 0xff;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0049c110(param_1);
    }
    pcVar3 = *(char **)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *pcVar3 = param_2 + -0x30;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0049c110(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x138) == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x24);
    for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_1 + 0x20) + 0xf0); iVar5 = iVar5 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

