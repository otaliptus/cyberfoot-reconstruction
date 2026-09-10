// Address: 004acb00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004acb00(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_004acb92;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (*param_3 != 0) {
    FUN_00406880(&local_8);
    (**(code **)*param_1)();
    cVar2 = FUN_0041afb8();
    puVar1 = puStack_1c;
    if (cVar2 != '\0') {
      FUN_00406880(&local_c);
      (**(code **)(*local_8 + 0x10))();
      cVar2 = FUN_0041afb8();
      puVar1 = puStack_1c;
      if (cVar2 != '\0') {
        (**(code **)(*local_c + 0x18))();
        cVar2 = FUN_0041afb8();
        puVar1 = puStack_1c;
        if (cVar2 != '\0') {
          *param_3 = 0;
        }
      }
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004acb99;
  puStack_20 = (undefined1 *)0x4acb89;
  FUN_00406880(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4acb91;
  FUN_00406880(&local_8);
  return;
}

