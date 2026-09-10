// Address: 00437118
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00437118(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_004371b6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar4 = 0;
  puVar3 = (undefined4 *)(in_stack_00000004 + -0x44);
  do {
    FUN_00404abc(&local_10,CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + 'A'));
    FUN_00404bf0(&local_c,"Color",local_10);
    func_0x0041f860(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x60),local_c,&local_8);
    if (local_8 == 0) {
      *puVar3 = 0xffffffff;
    }
    else {
      FUN_00404bf0(&local_14,&DAT_004371dc,local_8);
      uVar2 = FUN_00409ff8(local_14);
      *puVar3 = uVar2;
    }
    puVar1 = puStack_20;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0x10);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004371bd;
  puStack_24 = (undefined1 *)0x4371b5;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

