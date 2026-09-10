// Address: 00443624
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443624(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 *in_stack_ffffffc0;
  undefined4 uVar2;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_10 = 0;
  puStack_30 = &LAB_004436f3;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  if (param_2 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x54))();
    if (0 < iVar1) {
      if (*(short *)((int)param_1 + 0xd2) == 0) {
        FUN_00406d44(PTR_LAB_0066b468,&local_10);
        FUN_0040e370(PTR_DAT_00408738,1,local_10);
        param_3 = (int *)0x4436a5;
        FUN_00404250();
      }
      else {
        in_stack_ffffffc0 = local_c;
        (*(code *)param_1[0x34])(param_1[0x35],param_1,param_2,in_stack_ffffffc0,local_8);
      }
      goto LAB_004436d5;
    }
  }
  local_14 = 0;
  param_3 = &local_18;
  uVar2 = 0;
  local_18 = param_2;
  FUN_00406d44(PTR_PTR_0066b4e8,&local_1c);
  FUN_0040e3ac(PTR_DAT_00408738,1,local_1c,uVar2);
  in_stack_ffffffc0 = (undefined1 *)0x4436d5;
  FUN_00404250();
LAB_004436d5:
  *in_FS_OFFSET = (int)in_stack_ffffffc0;
  FUN_004048d4(&local_1c,in_stack_ffffffc0,param_3,&LAB_004436fa);
  FUN_004048d4(&local_10);
  return;
}

