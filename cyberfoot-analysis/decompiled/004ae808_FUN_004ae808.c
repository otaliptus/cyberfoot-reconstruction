// Address: 004ae808
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004ae808(void)

{
  uint uVar1;
  
  uVar1 = FUN_00429e64();
  return uVar1 & 0xff00 | (uVar1 & 0xff0000) >> 0x10 | (uVar1 & 0xff) << 0x10 | 0xff000000;
}

