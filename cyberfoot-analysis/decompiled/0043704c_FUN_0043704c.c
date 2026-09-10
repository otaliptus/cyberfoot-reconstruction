// Address: 0043704c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043704c(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_004370e9;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar3 = 0;
  puVar2 = (undefined4 *)(in_stack_00000004 + -0x44);
  do {
    local_10 = *puVar2;
    local_c = local_c & 0xffffff00;
    FUN_0040ae64(&DAT_00437100,&local_10,0,&local_8);
    uVar4 = local_8;
    FUN_00404abc(&local_18,CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + 'A'));
    FUN_00404bf0(&local_14,"Color",local_18);
    FUN_0041ff48(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x60),local_14,uVar4);
    puVar1 = puStack_24;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x10);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004370f0;
  puStack_28 = (undefined1 *)0x4370e0;
  FUN_004048f8(&local_18,2,puVar1);
  puStack_28 = (undefined1 *)0x4370e8;
  FUN_004048d4(&local_8);
  return;
}

