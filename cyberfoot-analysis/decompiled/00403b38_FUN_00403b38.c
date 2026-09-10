// Address: 00403b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403b38(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00403bbc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *param_3 = 0;
  local_8 = param_2;
  iVar2 = FUN_00403bcc(*param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x14) == 0) {
      FUN_00403b08(param_1,*(undefined4 *)(iVar2 + 0x18),&local_c);
      FUN_00406898(param_3,local_c);
    }
    else {
      *param_3 = (int)param_1 + *(int *)(iVar2 + 0x14);
      if (*param_3 != 0) {
        (**(code **)(*(int *)*param_3 + 4))();
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00403bc3;
  puStack_20 = (undefined1 *)0x403bbb;
  FUN_00406880(&local_c,uStack_24,puVar1);
  return;
}

