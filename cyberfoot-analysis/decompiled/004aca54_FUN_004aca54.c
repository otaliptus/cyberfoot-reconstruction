// Address: 004aca54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aca54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  puStack_24 = &LAB_004acae0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_4 = 0;
  local_8 = param_3;
  uVar2 = FUN_00406880(&local_c);
  (**(code **)*param_1)();
  cVar1 = FUN_0041afb8();
  if (cVar1 != '\0') {
    FUN_00406880(&local_10);
    (**(code **)(*local_c + 0x10))();
    cVar1 = FUN_0041afb8();
    if (cVar1 != '\0') {
      (**(code **)(*local_10 + 0x14))();
    }
  }
  *in_FS_OFFSET = param_1;
  FUN_00406880(&local_10,param_1,uVar2,&LAB_004acae7);
  FUN_00406880(&local_c);
  return;
}

