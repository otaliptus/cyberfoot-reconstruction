// Address: 0058d1c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm61_bt2Click(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_0058d312;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (*PTR_DAT_0066b7a4 == '\0') {
    puStack_c = &stack0xfffffffc;
    FUN_00483bc4(DAT_006d221c);
  }
  else {
    (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x334) + 0x1dc))();
    *(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x38 + *(int *)PTR_DAT_0066afb0 * 0x130) =
         (longlong)ROUND((float)DAT_006d2220 * _DAT_0058d31c);
    FUN_00650ec4(*(undefined4 *)PTR_DAT_0066afb0,*(undefined4 *)(PTR_DAT_0066ac78 + 8),
                 *(undefined4 *)PTR_DAT_0066acb8);
    if (*PTR_DAT_0066b35c != '\0') {
      FUN_00646d18(*(undefined4 *)PTR_DAT_0066b2b4,*(undefined4 *)PTR_DAT_0066ac50,
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b5b8 + 0x28 + *(int *)PTR_DAT_0066afb0 * 0x130),
                   *(undefined4 *)PTR_DAT_0066acb8);
    }
    FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
    (**(code **)(**(int **)(*(int *)PTR_DAT_0066ad70 + 0x318) + 0x1dc))();
    FUN_00597468(*(undefined4 *)PTR_DAT_0066ad70);
    FUN_00483bc4(DAT_006d221c);
    FUN_00466128(*(undefined4 *)(*(int *)PTR_DAT_0066ad70 + 0x36c),1);
    FUN_00642c50(0x136,&local_8);
    FUN_004e1414(*(undefined4 *)(*(int *)PTR_DAT_0066ad70 + 0x36c),local_8);
    if (*PTR_DAT_0066b2d0 == '\0') {
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b4f0);
    }
  }
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0058d319;
  puStack_10 = (undefined1 *)0x58d311;
  FUN_00404ff0(&local_8,uStack_14,puVar1);
  return;
}

