// Address: 0049eff4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049eff4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  if (((iVar1 != 0x2a) && (((iVar1 != 0x45 && (iVar1 != 0x49)) && (iVar1 != 0x5b)))) &&
     (((iVar1 != 0x67 && (iVar1 != 0x71)) && (iVar1 != 0x29a)))) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x44);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x40);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
  }
  (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar1 == 0x71) {
    uVar3 = 0xfffffffd;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

