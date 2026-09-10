// Address: 0049e0b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0049e0b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 0xffff) + (param_2 & 0xffff) + 0xfff0;
  uVar2 = ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1 +
          (((param_1 >> 0x10) + (param_2 >> 0x10) + 0xfff1) - param_3 % 0xfff1);
  if (0xfff1 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  if (0xfff1 < uVar1) {
    uVar1 = uVar1 - 0xfff1;
  }
  if (0x1ffe2 < uVar2) {
    uVar2 = uVar2 - 0x1ffe2;
  }
  if (0xfff1 < uVar2) {
    uVar2 = uVar2 - 0xfff1;
  }
  return uVar2 << 0x10 | uVar1;
}

