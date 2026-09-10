// Address: 004b305c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b305c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  puStack_14 = (undefined1 *)0x4b3075;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_18 = &LAB_004b3175;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004095b0(local_8,&local_c);
  iVar2 = FUN_00404ee8("RES://",local_c);
  if (iVar2 == 1) {
    FUN_00404928(param_1 + 0x10,local_8);
    FUN_00404e44(&local_8,1,6);
    if (local_8 != 0) {
      FUN_004b2fd0(param_1,DAT_0066c668,local_8);
    }
  }
  else {
    iVar2 = FUN_00404ee8("FILE://",local_c);
    if (iVar2 == 1) {
      FUN_00404928(param_1 + 0x10,local_8);
      FUN_00404e44(&local_8,1,7);
      if (local_8 != 0) {
        (**(code **)(*param_1 + 0x4c))(param_1,local_8);
      }
    }
    else if (*(char *)((int)param_1 + 0x4d) == '\0') {
      FUN_00404928(param_1 + 0xf,local_8);
      FUN_00404928(param_1 + 0x10,local_8);
    }
    else if (*(char *)((int)param_1 + 0x4e) == '\0') {
      FUN_00404928(param_1 + 0xf,local_8);
      *(undefined1 *)((int)param_1 + 0x4e) = 1;
      FUN_004b33c0(PTR_PTR_004b2140,1,param_1);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004b317c;
  puStack_18 = (undefined1 *)0x4b3174;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

