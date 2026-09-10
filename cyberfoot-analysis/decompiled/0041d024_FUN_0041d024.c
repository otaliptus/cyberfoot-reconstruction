// Address: 0041d024
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d024(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined4 local_110;
  undefined1 local_10c [256];
  undefined1 *local_c;
  undefined1 local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_110 = 0;
  puStack_118 = &LAB_0041d0a7;
  puStack_11c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_11c;
  FUN_004039d4(*(undefined4 *)(in_stack_00000004 + -4),local_10c);
  local_c = local_10c;
  local_8 = 4;
  ppuVar3 = &local_c;
  uVar2 = 0;
  FUN_00406d44(PTR_PTR_0066b684,&local_110);
  FUN_0040e3ac(PTR_DAT_0041b354,1,local_110,uVar2,ppuVar3);
  FUN_00404250();
  puVar1 = puStack_11c;
  *in_FS_OFFSET = uVar2;
  puStack_11c = &LAB_0041d0ae;
  FUN_004048d4(&local_110,uVar2,puVar1);
  return;
}

