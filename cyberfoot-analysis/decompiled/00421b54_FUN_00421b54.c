// Address: 00421b54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421b54(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x421b6d;
  local_8 = param_1;
  cVar2 = FUN_004096cc(param_2,*(undefined4 *)(param_1 + 0x70));
  if ((cVar2 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x421b88;
    cVar2 = FUN_004239d4(local_8);
    if (cVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x421b9a;
      FUN_00423ae4(local_8);
      *(undefined1 *)(local_8 + 0x78) = 1;
      puStack_18 = (undefined1 *)0x421ba6;
      FUN_00421a70();
    }
    puStack_18 = (undefined1 *)0x421bb2;
    local_c = (int *)FUN_00403a54(PTR_PTR_0041c090,1);
    puStack_1c = &LAB_00421c15;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00421f98(local_8,&local_10,4);
    (**(code **)(*local_c + 4))(local_c,local_10);
    FUN_00421f98(local_8,local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x78) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_00421c1c;
    puStack_1c = (undefined1 *)0x421c14;
    FUN_00403a84(local_c,uStack_20,puVar1);
    return;
  }
  return;
}

