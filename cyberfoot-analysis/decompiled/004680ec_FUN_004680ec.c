// Address: 004680ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004680ec(int *param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004681da;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar2 == '\0') goto LAB_004681bf;
  if (param_3 == '\0') {
LAB_0046814a:
    FUN_00466238(param_1,*(undefined4 *)(param_2 + 100));
  }
  else {
    FUN_00466208(param_1,&local_8);
    uVar3 = local_8 == 0;
    if ((bool)uVar3) goto LAB_0046814a;
    FUN_00466208(param_1,&local_c);
    FUN_00404cf0(local_c,param_1[2]);
    if ((bool)uVar3) goto LAB_0046814a;
  }
  if (param_3 == '\0') {
LAB_00468163:
    (**(code **)(*param_1 + 100))(param_1,*(undefined1 *)(param_2 + 0x6a));
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 == '\x01') goto LAB_00468163;
  }
  if ((param_3 == '\0') || (param_1[0x20] == 0)) {
    FUN_00404928(param_1 + 0x20,*(undefined4 *)(param_2 + 0x7c));
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x57) == '\x01')) {
    FUN_00466128(param_1,*(undefined1 *)(param_2 + 0x86));
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x122) == 0)) {
    param_1[0x48] = *(int *)(param_2 + 0x40);
    param_1[0x49] = *(int *)(param_2 + 0x44);
  }
LAB_004681bf:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004681e1;
  puStack_20 = (undefined1 *)0x4681d9;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

