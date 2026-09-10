// Address: 00401df0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00401df0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + -4);
  if ((uVar1 & 0x80000002) != 0x80000002) {
    DAT_0066c5c8 = 4;
  }
  uVar3 = uVar1 & 0x7ffffffc;
  puVar2 = (uint *)(param_1 - uVar3);
  if (((uVar1 ^ *puVar2) & 0xfffffffe) != 0) {
    DAT_0066c5c8 = 5;
  }
  if ((*puVar2 & 1) != 0) {
    uVar1 = puVar2[-1];
    if (uVar1 != *(uint *)((int)puVar2 + (8 - uVar1))) {
      DAT_0066c5c8 = 6;
    }
    FUN_00401ce0();
    uVar3 = uVar3 + uVar1;
  }
  return uVar3;
}

