// Address: 0061086c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061086c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  if (param_2 <= param_3) {
    local_8 = (param_3 - param_2) + 1;
    puVar1 = (undefined4 *)(&DAT_006d457c + param_2 * 4);
    local_c = (undefined4 *)(&DAT_006d461c + param_2 * 4);
    local_10 = (undefined4 *)(&DAT_006d46bc + param_2 * 4);
    local_14 = (undefined4 *)(&DAT_006d47ac + param_2 * 4);
    local_18 = (undefined4 *)(&DAT_006d484c + param_2 * 4);
    do {
      FUN_00466128(*puVar1,param_4);
      FUN_00466128(*local_c,param_4);
      FUN_00466128(*local_10,param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4760 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4788 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4764 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4768 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4784 + param_2 * 4),param_4);
      FUN_00466128(*local_14,param_4);
      FUN_00466128(*local_18,param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d492c + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d476c + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4770 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4774 + param_2 * 4),param_4);
      FUN_00466128(*(undefined4 *)(DAT_006d4778 + param_2 * 4),param_4);
      param_2 = param_2 + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      puVar1 = puVar1 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

