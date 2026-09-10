// Address: 0064fd5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0064fd5c(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(PTR_DAT_0066ac78 + 0xc0) + 0x7deU & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  return uVar1 == 0;
}

