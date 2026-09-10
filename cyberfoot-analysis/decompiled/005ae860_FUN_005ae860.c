// Address: 005ae860
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ae860(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_44 = 0;
  local_48 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  puStack_5c = &LAB_005aeab1;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = param_3;
  FUN_00404b48(&local_c,*(int *)PTR_DAT_0066af70 +
                        *(int *)(*(int *)PTR_DAT_0066afa0 + param_4 * 0x48) * 0x2f8);
  FUN_00466238(*(undefined4 *)(param_2 * 0x100 + 0x6d2650 + local_8 * 0x20),local_c);
  FUN_00466238((&DAT_006d2654)[param_2 * 0x40 + local_8 * 8],0);
  FUN_00466238((&DAT_006d265c)[param_2 * 0x40 + local_8 * 8],0);
  if (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + param_4 * 0x48) != '\0') {
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 8 + param_4 * 0x48),&local_10);
    FUN_00466238((&DAT_006d2654)[param_2 * 0x40 + local_8 * 8],local_10);
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0xc + param_4 * 0x48),&local_14);
    FUN_00466238((&DAT_006d265c)[param_2 * 0x40 + local_8 * 8],local_14);
  }
  FUN_00404b48(&local_18,
               *(int *)PTR_DAT_0066af70 +
               *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_4 * 0x48) * 0x2f8);
  FUN_00466238((&DAT_006d2660)[param_2 * 0x40 + local_8 * 8],local_18);
  if (0 < *(int *)(*(int *)PTR_DAT_0066afa0 + 0x10 + param_4 * 0x48)) {
    FUN_004030d4(local_40,*(int *)PTR_DAT_0066af70 +
                          *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_4 * 0x48) * 0x2f8);
    FUN_004030a4(local_40,&DAT_005aeac4,0x1d);
    FUN_00404b48(&local_20,local_40);
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x10 + param_4 * 0x48),&local_44);
    FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x14 + param_4 * 0x48),&local_48);
    FUN_00404c64(&local_1c,5);
    FUN_00466238((&DAT_006d2660)[param_2 * 0x40 + local_8 * 8],local_1c);
  }
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_005aeab8;
  puStack_5c = (undefined1 *)0x5aeaa3;
  FUN_004048f8(&local_48,2,puVar1);
  puStack_5c = (undefined1 *)0x5aeab0;
  FUN_004048f8(&local_20,6);
  return;
}

