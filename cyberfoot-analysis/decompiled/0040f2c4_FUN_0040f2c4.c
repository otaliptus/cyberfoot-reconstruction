// Address: 0040f2c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040f2c4(void)

{
  bool bVar1;
  
  bVar1 = DAT_0066c748 < 0x1f;
  if (DAT_0066c748 < 0x20) {
    bVar1 = ((byte)(&DAT_00662330)[(int)DAT_0066c748 >> 3] >> (DAT_0066c748 & 7) & 1) != 0;
  }
  return CONCAT31((int3)(DAT_0066c748 >> 8),bVar1);
}

