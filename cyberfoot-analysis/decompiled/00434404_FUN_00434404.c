// Address: 00434404
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434404(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  puStack_30 = &LAB_004344f7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar1 = &stack0xfffffffc;
  local_c = param_3;
  local_8 = param_2;
  if (param_3 != 0) {
    FUN_00404928(param_1 + 0x24,param_3);
    puVar1 = puStack_2c;
  }
  puStack_2c = puVar1;
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (iVar4 == 0) {
    FUN_0040e42c(PTR_DAT_004339c4,1,&PTR_DAT_00433c1c);
    FUN_00404250();
  }
  else if (-1 < iVar4 + -1) {
    local_10 = 0;
    do {
      iVar3 = FUN_00432768(*(undefined4 *)(param_1 + 0x14),local_10);
      FUN_00406898(&local_14,*(undefined4 *)(iVar3 + 4));
      FUN_004068c4(&local_18,local_14,&DAT_00434508);
      cVar2 = (**(code **)(*local_18 + 0x38))(local_18,local_8,local_c);
      if (cVar2 != '\0') {
        FUN_004068c4(&local_1c,local_14,&DAT_00434508);
        (**(code **)(*local_1c + 0x3c))(local_1c,local_8,local_c);
        break;
      }
      local_10 = local_10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004344fe;
  puStack_30 = (undefined1 *)0x4344ee;
  FUN_00405744(&local_1c,PTR_DAT_00433910,2);
  puStack_30 = (undefined1 *)0x4344f6;
  FUN_00406880(&local_14);
  return;
}

