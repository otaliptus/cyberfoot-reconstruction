// Address: 00656abc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00656abc(void)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_68 [15];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  double local_c;
  
  local_10 = 0;
  puStack_6c = (undefined1 *)0x656ada;
  FUN_00405658(local_2c,PTR_DAT_004010e8,7);
  puStack_70 = &LAB_00656c18;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  iVar1 = 0xf;
  puVar3 = local_68;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puStack_6c = &stack0xfffffffc;
  FUN_00404ff0(&local_10);
  thunk_FUN_0040502c(local_2c,L"domingo");
  thunk_FUN_0040502c(local_28,L"segunda");
  thunk_FUN_0040502c(local_24,&DAT_00656c50);
  thunk_FUN_0040502c(local_20,L"quarta");
  thunk_FUN_0040502c(local_1c,L"quinta");
  thunk_FUN_0040502c(local_18,L"sexta");
  thunk_FUN_0040502c(local_14,&DAT_00656c98);
  FUN_0040c20c(*(short *)(PTR_DAT_0066ac78 + 0xc0) + 0x7de,CONCAT22(extraout_var_00,1),
               CONCAT22(extraout_var,1));
  local_c = (double)in_ST0;
  *(double *)(PTR_DAT_0066b574 + 8) = local_c;
  *(undefined4 *)PTR_DAT_0066b574 = 1;
  iVar1 = 2;
  piVar2 = (int *)PTR_DAT_0066b574;
  do {
    local_c = local_c + (double)_DAT_00656ca8;
    piVar2[6] = iVar1;
    *(double *)(piVar2 + 8) = local_c;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar1 != 0x16f);
  iVar1 = 0x16e;
  puVar3 = (undefined4 *)(PTR_DAT_0066b574 + 0x10);
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 6;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00653a40(0);
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_00656c1f;
  puStack_70 = (undefined1 *)0x656c0f;
  FUN_00405744(local_2c,PTR_DAT_004010e8,7);
  puStack_70 = (undefined1 *)0x656c17;
  FUN_00404ff0(&local_10);
  return;
}

