// Address: 00422d00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422d00(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int *local_18;
  int *local_14;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  puStack_2c = &LAB_00422ed0;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_00422e85;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_40 = (undefined1 *)0x422d3b;
  local_8 = param_2;
  FUN_004237f8(param_1,&local_c);
  puStack_44 = &LAB_00422e5e;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  iVar7 = 1;
  puStack_40 = &stack0xfffffffc;
  iVar3 = FUN_00404ba4(local_c);
  local_14 = local_8;
  *(undefined1 *)(param_1 + 0x78) = 1;
  iVar6 = iVar7;
  while( true ) {
    for (; (iVar7 <= iVar3 && (*(char *)(local_c + -1 + iVar7) != '.')); iVar7 = iVar7 + 1) {
    }
    FUN_00404e04(local_c,iVar6,iVar7 - iVar6,param_1 + 0x70);
    if (iVar3 < iVar7) break;
    uVar4 = FUN_00403cc4(*local_14);
    puVar5 = (undefined4 *)FUN_00419dbc(uVar4,*(undefined4 *)(param_1 + 0x70));
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00421f84(param_1,*(undefined4 *)(param_1 + 0x70));
    }
    local_18 = (int *)0x0;
    if (**(char **)*puVar5 == '\a') {
      local_18 = (int *)FUN_00419ee8(local_14,puVar5);
    }
    cVar2 = FUN_00403c10(local_18,PTR_PTR_0041b84c);
    if (cVar2 == '\0') {
      FUN_00422ce4();
    }
    local_14 = local_18;
    iVar7 = iVar7 + 1;
    iVar6 = iVar7;
  }
  uVar4 = FUN_00403cc4(*local_14);
  iVar6 = FUN_00419dbc(uVar4,*(undefined4 *)(param_1 + 0x70));
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    (**(code **)(*local_14 + 4))(local_14,param_1);
    *(undefined1 *)(param_1 + 0x78) = 1;
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_00421f84(param_1,*(undefined4 *)(param_1 + 0x70));
    }
  }
  else {
    FUN_00423084(param_1,local_14,iVar6);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00422ed7;
  puStack_2c = (undefined1 *)0x422ecf;
  FUN_004048d4(&local_c,local_30,puVar1);
  return;
}

