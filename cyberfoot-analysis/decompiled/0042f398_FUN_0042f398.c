// Address: 0042f398
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042f398(int param_1)

{
  if (((*(byte *)(param_1 + 0x28) & 3) != 0) && (*(int *)(param_1 + 0x40) == 0)) {
    if (*(short *)(param_1 + 0x26) == 0x10) {
      *(undefined4 *)(param_1 + 0x40) = 0xf800;
      *(undefined4 *)(param_1 + 0x44) = 0x7e0;
      *(undefined4 *)(param_1 + 0x48) = 0x1f;
    }
    else if (*(short *)(param_1 + 0x26) == 0x20) {
      *(undefined4 *)(param_1 + 0x40) = 0xff0000;
      *(undefined4 *)(param_1 + 0x44) = 0xff00;
      *(undefined4 *)(param_1 + 0x48) = 0xff;
    }
  }
  return;
}

