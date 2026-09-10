// Address: 0040201c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040201c(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_00401fd0();
  FUN_00401550(&DAT_0066c628,&local_1c,&local_14);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_14 < local_1c) {
      iVar2 = FUN_00401df0();
      local_1c = local_1c - iVar2;
      local_18 = local_18 + iVar2;
    }
    if (local_1c + local_18 < local_14 + local_10) {
      iVar2 = FUN_00401e60();
      local_18 = local_18 + iVar2;
    }
    if (local_14 + local_10 == local_1c + local_18) {
      FUN_00401d74((local_1c + local_18) - 4,4);
      local_18 = local_18 - 4;
    }
    DAT_0066c620 = local_1c;
    DAT_0066c61c = local_18;
    uVar1 = 1;
  }
  return uVar1;
}

