// Address: 00647cec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00647cec(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  int *in_FS_OFFSET;
  undefined4 *puVar2;
  int *piVar3;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = (undefined1 *)0x647d08;
  local_8 = param_1;
  FUN_00404d94(param_1);
  local_1c = &LAB_00647e31;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_20;
  local_24 = 0x647d23;
  local_18 = &stack0xfffffffc;
  uVar1 = FUN_00409724(local_8,&local_c);
  local_24 = CONCAT31((int3)((uint)uVar1 >> 8),DAT_00647e40);
  local_28 = &local_10;
  FUN_0040f7c8(local_c,&DAT_00647e4c,0);
  FUN_0040496c(&local_c,local_10);
  FUN_0040f7c8(local_c,&DAT_00647e4c,0,&stack0xffffffec,DAT_00647e40);
  FUN_0040496c(&local_c,unaff_EBX);
  FUN_0064a6f4(local_c,&local_18);
  FUN_0040496c(&local_c,local_18);
  FUN_0040f7c8(local_c,&DAT_00647e58,0,&local_1c,DAT_00647e40);
  FUN_0040496c(&local_c,local_1c);
  piVar3 = &local_20;
  FUN_0040f7c8(local_c,&DAT_00647e64,0,piVar3,DAT_00647e40);
  FUN_0040496c(&local_c,local_20);
  puVar2 = &local_24;
  FUN_0040f7c8(local_c,&DAT_00647e70,0,puVar2,DAT_00647e40);
  FUN_0040496c(&local_c,local_24);
  FUN_00409724(local_c,&local_28);
  FUN_0040496c(&local_c,local_28);
  FUN_00409790(local_c,"emmanueldossantos");
  *in_FS_OFFSET = (int)puVar2;
  FUN_004048f8(&local_28,9,piVar3,&LAB_00647e38);
  return;
}

