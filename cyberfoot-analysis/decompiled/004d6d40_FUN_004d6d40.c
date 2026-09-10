// Address: 004d6d40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d6d40(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_004d6e02;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_00421f74(param_2);
  if (cVar2 == '\x06') {
    FUN_00423834(param_2,&local_c);
    FUN_004051d4(&local_8,local_c);
  }
  else if (cVar2 == '\x12') {
    FUN_004238f0(param_2,&local_8);
  }
  else {
    FUN_00406d44(PTR_PTR_0066b364,&local_10);
    FUN_0040e370(PTR_DAT_0041b3ac,1,local_10);
    FUN_00404250();
  }
  iVar3 = FUN_00405260(local_8);
  if (1 < iVar3) {
    FUN_00406d44(PTR_PTR_0066b364,&local_14);
    FUN_0040e370(PTR_DAT_0041b3ac,1,local_14);
    FUN_00404250();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d6e09;
  puStack_20 = (undefined1 *)0x4d6df9;
  FUN_004048f8(&local_14,3,puVar1);
  puStack_20 = (undefined1 *)0x4d6e01;
  FUN_00404ff0(&local_8);
  return;
}

