// Address: 004f269c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f269c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_004f2700;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x234) == '\0') {
    FUN_004f2528(param_1,&local_c,param_3,param_4,param_5);
    FUN_00404b6c(&local_8,local_c);
    FUN_00466238(param_1,local_8);
    in_stack_ffffffdc = param_4;
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = in_stack_ffffffdc;
  puStack_1c = &LAB_004f2707;
  FUN_00404ff0(&local_c,in_stack_ffffffdc,puVar1);
  FUN_004048d4(&local_8);
  return;
}

