// Address: 00524238
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00524238(int param_1)

{
  bool bVar1;
  
  if (((*(byte *)(param_1 + 0x3d) & 2) != 0) &&
     (((bVar1 = (*(byte *)(param_1 + 0x3d) & 4) == 0, !bVar1 && (DAT_00669d00 != '\0')) || (bVar1)))
     ) {
    return 1;
  }
  return 0;
}

