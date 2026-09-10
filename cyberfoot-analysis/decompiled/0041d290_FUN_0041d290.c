// Address: 0041d290
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d290(int param_1,char param_2,int param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_10;
  
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x41d2a5;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_30 = (undefined1 *)0x41d2b8;
  FUN_00403a54(param_1,0);
  puStack_30 = (undefined1 *)0x41d2c4;
  uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 4) = uVar3;
  puStack_30 = (undefined1 *)0x41d2d4;
  FUN_0041d17c(DAT_0066c860);
  puStack_34 = &LAB_0041d38f;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_10 = param_3;
  if (param_3 == 0) {
    local_10 = *(int *)(DAT_0066c860 + 0x20);
  }
  iVar5 = *(int *)(*(int *)(DAT_0066c860 + 4) + 8);
  puStack_30 = &stack0xfffffffc;
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    puStack_30 = &stack0xfffffffc;
    do {
      uVar3 = FUN_0041e01c(*(undefined4 *)(DAT_0066c860 + 4),iVar6);
      cVar2 = FUN_0041ccb8(uVar3,local_10);
      if (cVar2 != '\0') {
        FUN_0041dec0(*(undefined4 *)(param_1 + 4),uVar3);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((param_4 != '\0') && (iVar5 = *(int *)(*(int *)(DAT_0066c860 + 4) + 8), -1 < iVar5 + -1)) {
    iVar6 = 0;
    do {
      iVar4 = FUN_0041e01c(*(undefined4 *)(DAT_0066c860 + 4),iVar6);
      if (*(char *)(iVar4 + 0x10) != '\0') {
        FUN_0041dec0(*(undefined4 *)(param_1 + 4),iVar4);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0041d396;
  puStack_34 = (undefined1 *)0x41d38e;
  FUN_0041d234(DAT_0066c860,uStack_38,puVar1);
  return;
}

