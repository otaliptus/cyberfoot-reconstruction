// Address: 004039e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004039e8(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (uint)**(byte **)(param_1 + -0x2c);
    if (uVar1 == *(uint *)(param_2 + -4)) {
      do {
        sVar2 = (((*(byte **)(param_1 + -0x2c))[uVar1] ^ *(byte *)(uVar1 + param_2 + -1)) & 0xdf) *
                0x100;
        if ((char)((ushort)sVar2 >> 8) != '\0') goto LAB_00403a0b;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      sVar2 = sVar2 + 1;
    }
  }
LAB_00403a0b:
  return (char)sVar2;
}

