// Address: 005ecb58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ecb58(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [20];
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 10;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_20 = &LAB_005ecfe2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_28 = (undefined1 *)0x5ecb8c;
  iVar4 = (**(code **)(**(int **)(param_1 + 800) + 0x134))();
  if (0 < iVar4) {
    local_28 = &stack0xffffffe8;
    piVar3 = *(int **)(param_1 + 800);
    local_2c = (undefined1 *)0x5ecba7;
    uVar2 = (**(code **)(*piVar3 + 0x138))();
    local_2c = (undefined1 *)0x5ecbb8;
    (**(code **)(*piVar3 + 0x100))(piVar3,1,uVar2);
    local_28 = (undefined1 *)0x5ecbc8;
    FUN_00404b6c(param_1 + 0x334,unaff_EDI);
  }
  puVar1 = local_1c;
  if (*(int *)(param_1 + 0x334) != 0) {
    local_2c = &LAB_005ecf7e;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_34 = (undefined1 *)0x20;
    local_38 = (undefined1 *)0x5ecbfe;
    local_28 = &stack0xfffffffc;
    FUN_00404bf0(&local_1c,&LAB_005ecff8,*(undefined4 *)(param_1 + 0x334));
    local_38 = (undefined1 *)0x5ecc0d;
    piVar3 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_1c);
    local_38 = &LAB_005ecc56;
    local_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &local_3c;
    uStack_40 = 0x5ecc2e;
    puStack_34 = &stack0xfffffffc;
    (**(code **)(*piVar3 + 0xc))(piVar3,&stack0xfffffff0,4);
    uStack_40 = 0x5ecc40;
    (**(code **)(*piVar3 + 0xc))(piVar3,&DAT_006d37a4,0x760);
    puVar1 = puStack_34;
    *in_FS_OFFSET = local_3c;
    puStack_34 = &DAT_005ecc5d;
    local_38 = (undefined1 *)0x5ecc55;
    FUN_00403a84(piVar3,local_3c,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_005ecfe9;
  puStack_20 = (undefined1 *)0x5ecfa2;
  FUN_00405008(local_54,6,puVar1);
  puStack_20 = (undefined1 *)0x5ecfaa;
  FUN_004048d4(&local_3c);
  puStack_20 = (undefined1 *)0x5ecfb7;
  FUN_00405008(&local_38,3);
  puStack_20 = (undefined1 *)0x5ecfbf;
  FUN_004048d4(&local_2c);
  puStack_20 = (undefined1 *)0x5ecfcc;
  FUN_00405008(&local_28,3);
  puStack_20 = (undefined1 *)0x5ecfd4;
  FUN_004048d4(&local_1c);
  puStack_20 = (undefined1 *)0x5ecfe1;
  FUN_00405008(&stack0xffffffe8,2);
  return;
}

