// Address: 004f0424
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0424(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  
  piVar1 = (int *)FUN_00403c34(*(undefined4 *)(param_1 + 0x270),PTR_PTR_004e9a2c);
  FUN_004eae70(piVar1,*(undefined4 *)(param_1 + 0x29c));
  FUN_004ea600(piVar1,*(undefined4 *)(param_1 + 0x2a0));
  FUN_004eae30(piVar1,*(undefined4 *)(param_1 + 0x2a4));
  *(undefined1 *)(piVar1 + 0x9a) = *(undefined1 *)(param_1 + 0x298);
  *(undefined1 *)(piVar1 + 0xa8) = *(undefined1 *)(param_1 + 0x278);
  FUN_004eab54(piVar1,*(undefined4 *)(param_1 + 0x2b4));
  FUN_004eab5c(piVar1,*(undefined4 *)(param_1 + 0x2a8));
  FUN_004eabe4(piVar1,*(undefined4 *)(param_1 + 0x2ac));
  FUN_004eab64(piVar1,piVar1[0x9f] != 0);
  FUN_004eabfc(piVar1,*(undefined4 *)(param_1 + 0x2c8));
  piVar1[0xa7] = param_1;
  iVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xffaa));
  piVar1[0xa6] = iVar2;
  if (*(int *)(param_1 + 0x2b8) < 1) {
    FUN_004659c4(piVar1,*(undefined4 *)(param_1 + 0x48));
  }
  else {
    FUN_004659c4(piVar1,*(int *)(param_1 + 0x2b8));
  }
  if (piVar1[0x12] < *(int *)(param_1 + 0x48)) {
    FUN_004659c4(piVar1,*(int *)(param_1 + 0x48));
  }
  iVar2 = (**(code **)(*(int *)piVar1[0xa2] + 0x14))();
  if (*(int *)(param_1 + 0x2a0) < iVar2) {
    FUN_00465c68(piVar1,*(int *)(param_1 + 0x2a0) * *(int *)(param_1 + 0x2ac));
  }
  else {
    iVar2 = (**(code **)(*(int *)piVar1[0xa2] + 0x14))();
    FUN_00465c68(piVar1,iVar2 * *(int *)(param_1 + 0x2ac));
  }
  iVar2 = FUN_00465c50(piVar1);
  FUN_00465c68(piVar1,iVar2 + 4);
  (**(code **)(*piVar1 + 0xe8))();
  FUN_004eab6c(piVar1,*(undefined4 *)(param_1 + 0x2b0));
  return;
}

