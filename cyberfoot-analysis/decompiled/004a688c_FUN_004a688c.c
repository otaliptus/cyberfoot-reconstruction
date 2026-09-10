// Address: 004a688c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a688c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  puStack_30 = &LAB_004a697a;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  local_8 = param_2;
  local_d = FUN_004a6ae8(param_1,param_2,param_3,param_4);
  if ((local_d != '\0') && (3 < param_4)) {
    FUN_00404adc(param_1 + 0x14,*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 0x14) == 0) {
      cVar2 = **(char **)(param_1 + 4);
    }
    else {
      iVar3 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x14));
      cVar2 = *(char *)(iVar3 + *(int *)(param_1 + 0x14));
    }
    FUN_004048d4(param_1 + 0x18);
    if (cVar2 == '\0') {
      local_18 = 0;
      puVar7 = &local_1c;
      puVar6 = &local_14;
      iVar3 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x14));
      iVar4 = FUN_00404ba4(*(undefined4 *)(param_1 + 0x14));
      cVar2 = FUN_004a6028(iVar4 + *(int *)(param_1 + 4) + 2,(param_4 - iVar3) + -2,&local_18,puVar6
                           ,puVar7);
      if (cVar2 != '\0') {
        FUN_00404f30(param_1 + 0x18,local_1c);
        uVar5 = thunk_FUN_00404db0(param_1 + 0x18);
        FUN_00408034(uVar5,local_18,local_1c);
      }
      FUN_0040281c(local_18);
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004a6981;
  puStack_30 = (undefined1 *)0x4a6979;
  FUN_004048d4(&local_14,uStack_34,puVar1);
  return;
}

