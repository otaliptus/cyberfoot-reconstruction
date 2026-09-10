// Address: 004238f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004238f0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_004239c7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_00421f74(param_1);
  if ((cVar2 == '\x06') || (cVar2 == '\f')) {
    FUN_00423834(param_1,&local_10);
    FUN_004051d4(param_2,local_10);
  }
  else {
    local_8 = 0;
    cVar2 = FUN_004239d4(param_1);
    if (cVar2 == '\x12') {
      FUN_00421f98(param_1,&local_8,4);
      FUN_004055c4(param_2,local_8);
      FUN_00421f98(param_1,*param_2,local_8 * 2);
    }
    else if (cVar2 == '\x14') {
      FUN_00421f98(param_1,&local_8,4);
      FUN_00404f30(&local_c,local_8);
      FUN_00421f98(param_1,local_c,local_8);
      FUN_00406c50(local_c,param_2);
    }
    else {
      FUN_00421a70();
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004239ce;
  puStack_20 = (undefined1 *)0x4239be;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4239c6;
  FUN_004048d4(&local_c);
  return;
}

