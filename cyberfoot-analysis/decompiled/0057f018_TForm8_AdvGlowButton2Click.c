// Address: 0057f018
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm8_AdvGlowButton2Click(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar4 = 6;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_0057f2a9;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  if (*(int *)(puVar1 + 0x88) == 4) {
    iVar4 = 1;
    puVar5 = (undefined4 *)PTR_DAT_0066b670;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + *(int *)(puVar1 + 8) * 0x2f8 + 0x1f0 + iVar4 * 4) =
           *puVar5;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 5);
  }
  else {
    iVar4 = 1;
    puVar6 = PTR_DAT_0066b608;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066af70 + *(int *)(puVar1 + 8) * 0x2f8 + 0x1f0 + iVar4 * 4) =
           *(undefined4 *)
            (puVar6 + *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar1 + 8) * 0x2f8) *
                      0x10);
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar4 != 5);
  }
  local_28 = 0x57f0d6;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 500 + *(int *)(puVar1 + 8) * 0x2f8),
               &stack0xfffffff0);
  local_28 = 0x57f0e6;
  FUN_00404bf0(&local_c,&DAT_0057f2c0,unaff_EBX);
  local_28 = 0x57f0f1;
  FUN_004051d4(&local_8,local_c);
  local_28 = 0x57f0ff;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_8);
  local_28 = 0x57f11e;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x324),
               CONCAT22((short)((uint)*(int *)PTR_DAT_0066af70 >> 0x10),
                        *(undefined2 *)
                         (*(int *)PTR_DAT_0066af70 + 500 + *(int *)(puVar1 + 8) * 0x2f8)));
  local_28 = 0x57f139;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1f8 + *(int *)(puVar1 + 8) * 0x2f8),
               &local_1c);
  local_28 = 0x57f149;
  FUN_00404bf0(&stack0xffffffe8,&DAT_0057f2c0,local_1c);
  local_28 = 0x57f154;
  FUN_004051d4(&stack0xffffffec,unaff_EDI);
  local_28 = 0x57f162;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),unaff_ESI);
  local_28 = 0x57f181;
  FUN_0044d38c(*(undefined4 *)(param_1 + 800),
               CONCAT22((short)((uint)*(int *)PTR_DAT_0066af70 >> 0x10),
                        *(undefined2 *)
                         (*(int *)PTR_DAT_0066af70 + 0x1f8 + *(int *)(puVar1 + 8) * 0x2f8)));
  local_28 = 0x57f19c;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x1fc + *(int *)(puVar1 + 8) * 0x2f8),
               &local_28);
  uVar2 = local_28;
  local_28 = 0x57f1ac;
  FUN_00404bf0(&local_24,&DAT_0057f2c0,uVar2);
  local_28 = 0x57f1b7;
  FUN_004051d4(&local_20,local_24);
  local_28 = 0x57f1c5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_20);
  local_28 = 0x57f1e4;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x31c),
               CONCAT22((short)((uint)*(int *)PTR_DAT_0066af70 >> 0x10),
                        *(undefined2 *)
                         (*(int *)PTR_DAT_0066af70 + 0x1fc + *(int *)(puVar1 + 8) * 0x2f8)));
  local_28 = 0x57f1ff;
  FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x200 + *(int *)(puVar1 + 8) * 0x2f8),
               &local_34);
  local_28 = 0x57f20f;
  FUN_00404bf0(&local_30,&DAT_0057f2c0,local_34);
  local_28 = 0x57f21a;
  FUN_004051d4(&local_2c,local_30);
  local_28 = 0x57f228;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_2c);
  local_28 = 0x57f247;
  FUN_0044d38c(*(undefined4 *)(param_1 + 0x328),
               CONCAT22((short)((uint)*(int *)PTR_DAT_0066af70 >> 0x10),
                        *(undefined2 *)
                         (*(int *)PTR_DAT_0066af70 + 0x200 + *(int *)(puVar1 + 8) * 0x2f8)));
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0057f2b0;
  local_20 = (undefined1 *)0x57f261;
  FUN_004048f8(&local_34,2,puVar3);
  local_20 = (undefined1 *)0x57f269;
  FUN_00404ff0(&local_2c);
  local_20 = (undefined1 *)0x57f276;
  FUN_004048f8(&local_28,2);
  local_20 = (undefined1 *)0x57f27e;
  FUN_00404ff0(&local_20);
  local_20 = (undefined1 *)0x57f28b;
  FUN_004048f8(&local_1c,2);
  local_20 = (undefined1 *)0x57f293;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x57f2a0;
  FUN_004048f8(&stack0xfffffff0,2);
  local_20 = (undefined1 *)0x57f2a8;
  FUN_00404ff0(&local_8);
  return;
}

