// Address: 004d9cf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9cf8(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004d9d61;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (param_1 != '\0') {
    FUN_004051d4(&local_c,param_4);
    uVar1 = local_c;
    uVar3 = FUN_00403c34(param_2,PTR_PTR_00472158);
    FUN_004d9778(uVar3,uVar1,&local_8);
    FUN_004dda3c(param_3,local_8);
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d9d68;
  puStack_1c = (undefined1 *)0x4d9d60;
  FUN_00405008(&local_c,2,puVar2);
  return;
}

