// Address: 005169f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005169f8(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_00516a51;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  if (param_3 != iVar2) {
    FUN_00406d44(&PTR_DAT_00516654,&local_c);
    FUN_00516934(local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00516a58;
  puStack_1c = (undefined1 *)0x516a50;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

