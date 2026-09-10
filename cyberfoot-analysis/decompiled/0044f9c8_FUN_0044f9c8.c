// Address: 0044f9c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044f9c8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x240) == 0) {
    uVar1 = FUN_00403a54(PTR_PTR_0041c090,1);
    *(undefined4 *)(param_1 + 0x240) = uVar1;
  }
  else {
    FUN_00420958();
  }
  if (*(char *)(param_1 + 0x244) != '\0') {
    uVar1 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
    *(undefined4 *)(param_1 + 0x2a0) = uVar1;
  }
  FUN_00420cc4(*(undefined4 *)(param_1 + 0x240),param_1);
  FUN_004208f4(*(undefined4 *)(param_1 + 0x240));
  if (*(char *)(param_1 + 0x274) != '\0') {
    FUN_00450030(param_1);
  }
  FUN_00469d9c(param_1);
  return;
}

