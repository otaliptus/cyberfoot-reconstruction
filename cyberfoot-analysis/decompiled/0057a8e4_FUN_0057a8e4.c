// Address: 0057a8e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057a8e4(int param_1)

{
  char cVar1;
  undefined2 extraout_var;
  float10 in_ST0;
  float10 fVar2;
  
  cVar1 = FUN_0057b128(param_1);
  if (cVar1 != '\0') {
    FUN_0057b204(param_1);
    fVar2 = ABS((float10)*(double *)(param_1 + 0x218) - in_ST0);
    if (_DAT_0057a91c < fVar2 || (_DAT_0057a91c == fVar2) != 0) {
      return CONCAT31((int3)(CONCAT22(extraout_var,
                                      (ushort)(_DAT_0057a91c < fVar2) << 8 |
                                      (ushort)(NAN(_DAT_0057a91c) || NAN(fVar2)) << 10 |
                                      (ushort)(_DAT_0057a91c == fVar2) << 0xe) >> 8),1);
    }
  }
  return 0;
}

