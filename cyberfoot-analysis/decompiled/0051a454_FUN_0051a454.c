// Address: 0051a454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a454(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined2 local_10;
  undefined1 local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0051a4ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (0xff < param_1[2]) {
    FUN_00406d44(&PTR_DAT_0051665c,&local_c);
    FUN_00516934(local_c);
    puVar3 = puStack_1c;
  }
  puStack_1c = puVar3;
  if (param_1[3] <= param_1[2]) {
    FUN_0051a1fc(param_1,param_1[2] + 1);
  }
  FUN_0051a0b0(*param_1,local_8,&local_10);
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  *(undefined2 *)(iVar2 + iVar1 * 3) = local_10;
  *(undefined1 *)(iVar2 + 2 + iVar1 * 3) = local_e;
  param_1[2] = param_1[2] + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 0x1c))();
  puVar3 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0051a4f6;
  puStack_20 = (undefined1 *)0x51a4ee;
  FUN_004048d4(&local_c,uStack_24,puVar3);
  return;
}

