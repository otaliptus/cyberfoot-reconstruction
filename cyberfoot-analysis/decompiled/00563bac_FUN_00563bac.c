// Address: 00563bac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00563bac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined *unaff_ESI;
  undefined4 *puVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 7;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_00563dfe;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined *)0x563bdc;
  (**(code **)(**(int **)(param_1 + 0x33c) + 0xd8))();
  local_28 = (undefined *)0x563bea;
  (**(code **)(**(int **)(param_1 + 0x340) + 0xd8))();
  local_28 = (undefined *)0x563bf5;
  iVar4 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
  if (iVar4 == 0) {
    iVar4 = 0;
    puVar5 = (undefined4 *)PTR_DAT_0066b3a4;
    do {
      local_28 = &DAT_00563e14;
      local_2c = (undefined *)0x563c15;
      FUN_00409dd8(iVar4 + 1,&stack0xffffffec);
      local_30 = &DAT_00563e20;
      local_34 = 0x563c2a;
      local_2c = unaff_ESI;
      FUN_00404c64(&stack0xfffffff0,3);
      local_34 = 0x563c35;
      FUN_004051d4(&local_c,unaff_EBX);
      local_34 = 0x563c3f;
      FUN_0040526c(&local_c,*puVar5);
      local_34 = 0x563c4a;
      FUN_00404b6c(&local_8,local_c);
      piVar1 = *(int **)(*(int *)(param_1 + 0x33c) + 0x23c);
      local_34 = 0x563c5e;
      (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
      local_34 = 0x563c68;
      FUN_00409dd8(iVar4,&local_20);
      local_34 = 0x563c75;
      FUN_00404bac(&local_20,&DAT_00563e20);
      local_34 = 0x563c80;
      FUN_004051d4(&local_1c,local_20);
      local_34 = 0x563c8a;
      FUN_0040526c(&local_1c,*puVar5);
      local_34 = 0x563c95;
      FUN_00404b6c(&stack0xffffffe8,local_1c);
      piVar1 = *(int **)(*(int *)(param_1 + 0x340) + 0x23c);
      local_34 = 0x563ca9;
      (**(code **)(*piVar1 + 0x38))(piVar1,unaff_EDI);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 4);
  }
  else {
    iVar4 = 4;
    puVar5 = (undefined4 *)(PTR_DAT_0066b3a4 + 0x10);
    do {
      local_28 = &DAT_00563e14;
      local_2c = (undefined *)0x563cdb;
      FUN_00409dd8(iVar4 + -3,&local_30);
      local_2c = local_30;
      local_30 = &DAT_00563e20;
      local_34 = 0x563cf0;
      FUN_00404c64(&local_2c,3);
      local_34 = 0x563cfb;
      FUN_004051d4(&local_28,local_2c);
      local_34 = 0x563d05;
      FUN_0040526c(&local_28,*puVar5);
      local_34 = 0x563d10;
      FUN_00404b6c(&local_24,local_28);
      piVar1 = *(int **)(*(int *)(param_1 + 0x33c) + 0x23c);
      local_34 = 0x563d24;
      (**(code **)(*piVar1 + 0x38))(piVar1,local_24);
      local_34 = 0x563d31;
      FUN_00409dd8(iVar4 + -4,&local_3c);
      local_34 = 0x563d3e;
      FUN_00404bac(&local_3c,&DAT_00563e20);
      local_34 = 0x563d49;
      FUN_004051d4(&local_38,local_3c);
      local_34 = 0x563d53;
      FUN_0040526c(&local_38,*puVar5);
      local_34 = 0x563d5e;
      FUN_00404b6c(&local_34,local_38);
      uVar2 = local_34;
      piVar1 = *(int **)(*(int *)(param_1 + 0x340) + 0x23c);
      local_34 = 0x563d72;
      (**(code **)(*piVar1 + 0x38))(piVar1,uVar2);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 != 0xe);
  }
  local_28 = (undefined *)0x563d8c;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),0);
  local_28 = (undefined *)0x563d99;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),0);
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00563e05;
  local_20 = (undefined1 *)0x563dae;
  FUN_004048d4(&local_3c,local_24,puVar3);
  local_20 = (undefined1 *)0x563db6;
  FUN_00404ff0(&local_38);
  local_20 = (undefined1 *)0x563dc3;
  FUN_004048f8(&local_34,3);
  local_20 = (undefined1 *)0x563dcb;
  FUN_00404ff0(&local_28);
  local_20 = (undefined1 *)0x563dd8;
  FUN_004048f8(&local_24,2);
  local_20 = (undefined1 *)0x563de0;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x563ded;
  FUN_004048f8(&stack0xffffffe8,3);
  local_20 = (undefined1 *)0x563df5;
  FUN_00404ff0(&local_c);
  local_20 = (undefined1 *)0x563dfd;
  FUN_004048d4(&local_8);
  return;
}

