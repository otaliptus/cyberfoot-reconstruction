// Address: 004c2f84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2f84(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  puStack_18 = (undefined1 *)0x4c2f9e;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = (undefined1 *)0x4c2fa6;
  FUN_00404d94(local_c);
  puStack_1c = &LAB_004c302a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_004c2f48(local_8,&local_10);
  FUN_0040496c(&local_8,local_10);
  iVar2 = FUN_00404ba4(local_8);
  iVar3 = FUN_00404ba4(local_c);
  if (iVar2 <= iVar3) {
    iVar2 = FUN_00404ba4(local_c);
    iVar3 = FUN_00404ba4(local_8);
    if (iVar2 <= iVar3) {
      FUN_00409628(local_8,local_c);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c3031;
  puStack_1c = (undefined1 *)0x4c3029;
  FUN_004048f8(&local_10,3,puVar1);
  return;
}

