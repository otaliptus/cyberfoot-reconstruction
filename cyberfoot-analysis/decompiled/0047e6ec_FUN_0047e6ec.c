// Address: 0047e6ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e6ec(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x57) != '\0') {
    if (*(byte *)(param_1 + 0x5b) < 2) {
      if ((*(char *)(param_1 + 0x5b) == '\x01') ||
         (DAT_0047e750 == (DAT_0047e74c & *(byte *)(param_1 + 0x61)))) {
        uVar1 = FUN_004323b8(*(undefined4 *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x44) +
                             *(int *)(param_1 + 0x4c));
        *(undefined4 *)(param_4 + -4) = uVar1;
      }
    }
    else if (*(byte *)(param_1 + 0x5b) == 2) {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x4c);
    }
  }
  return;
}

