// Address: 005ae33c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ae33c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_c;
  
  if (param_2 <= param_3) {
    local_c = (param_3 - param_2) + 1;
    do {
      iVar1 = 1;
      do {
        FUN_004663a8(*(undefined4 *)(DAT_006d2660 + param_2 * 0x28 + -4 + iVar1 * 4),
                     *(undefined4 *)(PTR_DAT_0066b0cc + param_4 * 4 + -4));
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xb);
      param_2 = param_2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

