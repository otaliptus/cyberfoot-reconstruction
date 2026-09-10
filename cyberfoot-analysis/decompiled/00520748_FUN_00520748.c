// Address: 00520748
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520748(int *param_1,byte param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005207b6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_0051e070(param_1[2]);
  if (*(int *)(iVar2 + 8) <= (int)(uint)param_2) {
    iVar2 = FUN_0051e070(param_1[2]);
    if (0 < *(int *)(iVar2 + 8)) {
      FUN_00406d44(&PTR_DAT_00516664,&local_8);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_8);
      param_2 = 0;
    }
  }
  puVar1 = puStack_14;
  *(byte *)(param_1 + 4) = param_2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005207bd;
  puStack_18 = (undefined1 *)0x5207b5;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

