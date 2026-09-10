// Address: 00423834
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423834(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004238e1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00421f74(param_1);
  if ((cVar2 == '\x12') || (cVar2 == '\x14')) {
    FUN_004238f0(param_1,&local_c);
    FUN_00404b6c(param_2,local_c);
  }
  else {
    local_8 = 0;
    cVar2 = FUN_004239d4(param_1);
    if (cVar2 == '\x06') {
      FUN_00421f98(param_1,&local_8,1);
    }
    else if (cVar2 == '\f') {
      FUN_00421f98(param_1,&local_8,4);
    }
    else {
      FUN_00421a70();
    }
    FUN_00404f30(param_2,local_8);
    FUN_00421f98(param_1,*param_2,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004238e8;
  puStack_1c = (undefined1 *)0x4238e0;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  return;
}

