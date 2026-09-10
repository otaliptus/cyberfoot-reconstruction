// Address: 004c0b8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c0b8c(undefined4 param_1)

{
  if ((char)param_1 == '/') {
    param_1 = CONCAT31((int3)((uint)PTR_DAT_0066aedc >> 8),*PTR_DAT_0066aedc);
  }
  else if ((char)param_1 == ':') {
    return CONCAT31((int3)((uint)PTR_DAT_0066ac84 >> 8),*PTR_DAT_0066ac84);
  }
  return param_1;
}

