// Address: 00499b00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x148);
  (**(code **)(*(int *)(param_1 + 0x168) + 8))();
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x14) = 2;
    if (*(int *)(param_1 + 0xb4) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
    }
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x14) = 2;
  }
  else if (iVar2 == 2) {
    if (*(int *)(param_1 + 0xb4) != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 1;
    }
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  }
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return;
}

