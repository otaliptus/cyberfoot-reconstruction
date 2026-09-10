// Address: 004d3b8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3b8c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d3be8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_2 == -1) {
    puStack_18 = &stack0xfffffffc;
    FUN_00405158(param_3,param_1);
  }
  else {
    FUN_00405158(&local_8,param_1,param_3,param_3);
    FUN_004053fc(local_8,1,param_2,param_3);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d3bef;
  puStack_1c = (undefined1 *)0x4d3be7;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

