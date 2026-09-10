// Address: 005c1c0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1c0c(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005c1c65;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004dd724(param_1,param_2);
  cVar2 = FUN_005c1a78(param_1);
  if (cVar2 != '\x01') {
    FUN_004d35b4(*param_2,1,&local_8);
    FUN_0040502c(param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c1c6c;
  puStack_18 = (undefined1 *)0x5c1c64;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

