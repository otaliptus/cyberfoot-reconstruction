// Address: 00434dbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434dbc(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00434eda;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x1f)) {
    pcVar4 = (code *)0x0;
    if (param_2 == '\0') {
      FUN_00434ee8(param_1,0);
      if (*(int *)(param_1 + 4) != 0) {
        FUN_0042b628(*(int *)(param_1 + 4),0);
      }
      DeleteDC(*(HDC *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else if (param_2 == '\x01') {
      puVar1 = &stack0xfffffffc;
      if (*(char *)(param_1 + 0x1f) == '\x02') goto LAB_00434ec4;
      pcVar4 = (code *)&DAT_004076b8;
      puStack_1c = &stack0xfffffffc;
    }
    else {
      puStack_1c = &stack0xfffffffc;
      if (param_2 == '\x02') {
        puStack_1c = &stack0xfffffffc;
        if (*(int *)(param_1 + 4) != 0) {
          puStack_1c = &stack0xfffffffc;
          FUN_0042b628(*(int *)(param_1 + 4),0);
        }
        if (*(HDC *)(param_1 + 0x20) != (HDC)0x0) {
          DeleteDC(*(HDC *)(param_1 + 0x20));
        }
        pcVar4 = (code *)&DAT_00407680;
      }
    }
    if (pcVar4 != (code *)0x0) {
      uVar2 = FUN_00435334(param_1);
      piVar3 = (int *)FUN_0043534c(param_1);
      local_8 = (**(code **)(*piVar3 + 0x18))(piVar3,uVar2);
      FUN_00404da4(*(undefined4 *)(local_8 + 0xc));
      FUN_00404da4(*(undefined4 *)(local_8 + 8));
      FUN_00404da4(*(undefined4 *)(local_8 + 4));
      uVar2 = (*pcVar4)();
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_00406d44(PTR_PTR_0066b500,&local_c);
        FUN_004349ac(local_c);
      }
      if (*(int *)(param_1 + 4) != 0) {
        FUN_0042b628(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20));
      }
    }
    *(char *)(param_1 + 0x1f) = param_2;
    puVar1 = puStack_1c;
  }
LAB_00434ec4:
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00434ee1;
  puStack_20 = (undefined1 *)0x434ed9;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

