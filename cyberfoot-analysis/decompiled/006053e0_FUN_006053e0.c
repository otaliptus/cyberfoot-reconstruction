// Address: 006053e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006053e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00605624;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_2 < 0xc) {
    puStack_24 = &stack0xfffffffc;
    FUN_00465978((&DAT_006d413c)[param_2],*(undefined4 *)(PTR_DAT_0066b388 + param_3 * 4 + -4));
    FUN_0046599c((&DAT_006d413c)[param_2],*(undefined4 *)(PTR_DAT_0066b3bc + param_3 * 4 + -4));
    FUN_00465978(*(undefined4 *)(&DAT_006d4184 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + -0xd);
    FUN_0046599c(*(undefined4 *)(&DAT_006d4184 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x30);
    if (param_2 == 0xb) {
      FUN_00465978(uRam006d41b0,*(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + -0x22);
    }
    if (0 < param_5) {
      FUN_00409dd8(param_5,&local_c);
      FUN_004051d4(&local_8,local_c);
      FUN_004e1414(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),local_8);
    }
    FUN_00465978(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + 0x15);
    FUN_0046599c(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0xf);
    FUN_00465978(*(undefined4 *)(&DAT_006d4214 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + 0x11);
    FUN_0046599c(*(undefined4 *)(&DAT_006d4214 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x20);
    puVar1 = puStack_24;
  }
  else {
    puVar1 = &stack0xfffffffc;
    if (0xb < param_2) {
      FUN_00465978((&DAT_006d413c)[param_2],0x186);
      FUN_0046599c((&DAT_006d413c)[param_2],*(undefined4 *)(PTR_DAT_0066b384 + param_4 * 4 + -4));
      FUN_00465978(*(undefined4 *)(&DAT_006d4184 + param_2 * 4),
                   *(int *)((&DAT_006d413c)[param_2] + 0x40) + -0xd);
      FUN_0046599c(*(undefined4 *)(&DAT_006d4184 + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0x2b);
      if (0 < param_5) {
        FUN_00409dd8(param_5,&local_14);
        FUN_004051d4(&local_10,local_14);
        FUN_004e1414(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),local_10);
      }
      FUN_00465978(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),0x19c);
      FUN_0046599c(*(undefined4 *)(&DAT_006d41cc + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0xf);
      FUN_00465978(*(undefined4 *)(&DAT_006d4214 + param_2 * 4),0x197);
      FUN_0046599c(*(undefined4 *)(&DAT_006d4214 + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0x20);
      puVar1 = puStack_24;
    }
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0060562b;
  puStack_28 = (undefined1 *)0x60560b;
  FUN_004048d4(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x605613;
  FUN_00404ff0(&local_10);
  puStack_28 = (undefined1 *)0x60561b;
  FUN_004048d4(&local_c);
  puStack_28 = (undefined1 *)0x605623;
  FUN_00404ff0(&local_8);
  return;
}

