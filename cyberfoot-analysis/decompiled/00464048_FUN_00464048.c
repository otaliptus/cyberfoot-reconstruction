// Address: 00464048
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00464048(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_0066cb74 + 4) != 0) {
    iVar1 = FUN_00463f14(*(undefined4 *)(DAT_0066cb74 + 8),param_1,DAT_0066cb74,DAT_0066cb74 + 0xc,
                         *(int *)(DAT_0066cb74 + 4));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

