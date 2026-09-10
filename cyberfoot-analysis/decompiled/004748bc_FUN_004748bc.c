// Address: 004748bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004748bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(int *)(param_1 + 0x5c) < 1) {
    if ((*(int *)(param_1 + 0x4c) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 8), -1 < iVar2 + -1)) {
      iVar1 = 0;
      do {
        FUN_0041e01c(*(undefined4 *)(param_1 + 0x4c),iVar1);
        FUN_00403c80();
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(short *)(param_1 + 0x62) != 0) {
      (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1);
    }
  }
  return;
}

