// Address: 0057eacc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm8_upgClick(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_0057ebec;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (param_3 == '\0') {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 500 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
    *piVar1 = *piVar1 + 1;
    puStack_24 = &stack0xfffffffc;
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 500 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),
                 &local_10);
    FUN_00404bf0(&local_c,&DAT_0057ec00,local_10);
    FUN_004051d4(&local_8,local_c);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_8);
  }
  else {
    piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 500 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
    *piVar1 = *piVar1 + -1;
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 500 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),
                 &local_1c);
    FUN_00404bf0(&local_18,&DAT_0057ec00,local_1c);
    FUN_004051d4(&local_14,local_18);
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_14);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0057ebf3;
  puStack_28 = (undefined1 *)0x57ebce;
  FUN_004048f8(&local_1c,2,puVar2);
  puStack_28 = (undefined1 *)0x57ebd6;
  FUN_00404ff0(&local_14);
  puStack_28 = (undefined1 *)0x57ebe3;
  FUN_004048f8(&local_10,2);
  puStack_28 = (undefined1 *)0x57ebeb;
  FUN_00404ff0(&local_8);
  return;
}

