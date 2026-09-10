// Address: 005eb518
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005eb518(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  puStack_18 = (undefined1 *)0x5eb52d;
  FUN_00405608(&param_5);
  puStack_18 = (undefined1 *)0x5eb535;
  FUN_00405608(&param_4);
  puStack_1c = &LAB_005eb703;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(int *)(&DAT_006d3668 + param_2 * 0x10) = param_3;
  puStack_18 = &stack0xfffffffc;
  if ((-1 < param_3) && (puStack_18 = &stack0xfffffffc, param_3 < 0x1a)) {
    if (param_2 < 0xc) {
      puStack_18 = &stack0xfffffffc;
      FUN_00465978((&DAT_006d35e4)[param_2],*(undefined4 *)(PTR_DAT_0066b388 + param_3 * 4 + -4));
      FUN_0046599c((&DAT_006d35e4)[param_2],*(undefined4 *)(PTR_DAT_0066b3bc + param_3 * 4 + -4));
      FUN_00404b6c(&local_8,param_5);
      FUN_00466238((&DAT_006d34f4)[param_2],local_8);
      FUN_00465978((&DAT_006d34f4)[param_2],*(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + -0x12);
      if (param_2 == 1) {
        FUN_00465978(DAT_006d34f8,*(int *)(PTR_DAT_0066b388 + param_3 * 4 + -4) + -0x22);
      }
      if (param_2 < 2) {
        FUN_0046599c((&DAT_006d34f4)[param_2],*(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x2a);
      }
      else {
        FUN_0046599c((&DAT_006d34f4)[param_2],*(int *)(PTR_DAT_0066b3bc + param_3 * 4 + -4) + 0x30);
      }
    }
    else {
      puStack_18 = &stack0xfffffffc;
      if (0xb < param_2) {
        puStack_18 = &stack0xfffffffc;
        FUN_00465978((&DAT_006d35e4)[param_2],0x186);
        FUN_0046599c((&DAT_006d35e4)[param_2],
                     *(undefined4 *)(PTR_DAT_0066b384 + param_2 * 4 + -0x30));
        FUN_00404b6c(&local_c,param_5);
        FUN_00466238((&DAT_006d34f4)[param_2],local_c);
        FUN_00465978((&DAT_006d34f4)[param_2],*(int *)((&DAT_006d35e4)[param_2] + 0x40) + -0x12);
        FUN_0046599c((&DAT_006d34f4)[param_2],
                     *(int *)(PTR_DAT_0066b384 + param_2 * 4 + -0x30) + 0x2a);
        FUN_004e1414(*(undefined4 *)(&DAT_006d353c + param_2 * 4),param_5);
        FUN_00465978(*(undefined4 *)(&DAT_006d353c + param_2 * 4),
                     *(int *)((&DAT_006d35e4)[param_2] + 0x40) + 0x14);
        FUN_0046599c(*(undefined4 *)(&DAT_006d353c + param_2 * 4),
                     *(int *)((&DAT_006d35e4)[param_2] + 0x44) + -8);
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005eb70a;
  puStack_1c = (undefined1 *)0x5eb6f5;
  FUN_004048f8(&local_c,2,puVar1);
  puStack_1c = (undefined1 *)0x5eb702;
  FUN_00405008(&param_4,2);
  return;
}

