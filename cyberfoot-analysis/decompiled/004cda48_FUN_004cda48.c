// Address: 004cda48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cda48(int param_1)

{
  undefined1 uVar1;
  
  FUN_004682d4(param_1);
  if (*(char *)(param_1 + 0x234) != *(char *)(param_1 + 0x233)) {
    FUN_004cfa08(param_1,*(char *)(param_1 + 0x234));
  }
  uVar1 = FUN_004c08d8();
  *(undefined1 *)(param_1 + 0x310) = uVar1;
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    FUN_004cfc00(param_1);
  }
  return;
}

