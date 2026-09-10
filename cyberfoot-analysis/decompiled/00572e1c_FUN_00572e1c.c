// Address: 00572e1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00572e1c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00573016;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_2 < 0xc) {
    puStack_1c = &stack0xfffffffc;
    FUN_00465978((&DAT_006d1f38)[param_2],*(undefined4 *)(PTR_DAT_0066b388 + param_3 * 4 + -4));
    FUN_0046599c((&DAT_006d1f38)[param_2],*(undefined4 *)(PTR_DAT_0066b3bc + param_3 * 4 + -4));
    FUN_00465978(*(undefined4 *)(&DAT_006d1f80 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + -0xd);
    FUN_0046599c(*(undefined4 *)(&DAT_006d1f80 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x2a);
    if (0 < param_5) {
      FUN_00409dd8(param_5,&local_8);
      FUN_00466238(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),local_8);
    }
    FUN_00465978(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + 0x15);
    FUN_0046599c(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0xf);
    FUN_00465978(*(undefined4 *)(&DAT_006d2010 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + 0x11);
    FUN_0046599c(*(undefined4 *)(&DAT_006d2010 + param_2 * 4),
                 *(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x20);
    puVar1 = puStack_1c;
  }
  else {
    puVar1 = &stack0xfffffffc;
    if (0xb < param_2) {
      FUN_00465978((&DAT_006d1f38)[param_2],0x186);
      FUN_0046599c((&DAT_006d1f38)[param_2],*(undefined4 *)(PTR_DAT_0066b384 + param_4 * 4 + -4));
      FUN_00465978(*(undefined4 *)(&DAT_006d1f80 + param_2 * 4),
                   *(int *)((&DAT_006d1f38)[param_2] + 0x40) + -0xd);
      FUN_0046599c(*(undefined4 *)(&DAT_006d1f80 + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0x2a);
      if (0 < param_5) {
        FUN_00409dd8(param_5,&local_c);
        FUN_00466238(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),local_c);
      }
      FUN_00465978(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),0x19c);
      FUN_0046599c(*(undefined4 *)(&DAT_006d1fc8 + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0xf);
      FUN_00465978(*(undefined4 *)(&DAT_006d2010 + param_2 * 4),0x197);
      FUN_0046599c(*(undefined4 *)(&DAT_006d2010 + param_2 * 4),
                   *(int *)(PTR_DAT_0066b384 + param_4 * 4 + -4) + 0x20);
      puVar1 = puStack_1c;
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0057301d;
  puStack_20 = (undefined1 *)0x573015;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

