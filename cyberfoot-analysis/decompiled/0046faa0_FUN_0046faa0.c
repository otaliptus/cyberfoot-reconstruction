// Address: 0046faa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046faa0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_10 = 0;
  puStack_38 = &LAB_0046fc98;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x46fad0;
  local_c = param_1;
  local_8 = param_2;
  FUN_00470170(param_1,*(undefined4 *)(param_1 + 100));
  puStack_40 = (undefined1 *)0x46fad8;
  FUN_0046f16c(local_c);
  puStack_44 = &LAB_0046fc7b;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,&local_20,4);
  (**(code **)(*local_8 + 0xc))(local_8,&local_24,4);
  if (-1 < local_24 + -1) {
    local_20 = 0;
    iVar3 = local_24;
    do {
      FUN_0046fa58(&local_10);
      if (local_10 != 0) {
        FUN_00403c80(*(undefined4 *)(local_c + 0x14),local_10,&local_14);
        if (local_14 != 0) {
          uVar4 = 0x46fb4b;
          FUN_00466128(local_14,0);
          uStack_48 = 0;
          FUN_00466f18(local_14,*(undefined4 *)(local_c + 0x14),0,uVar4);
        }
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_8 + 0xc))(local_8,local_c + 0x68,4);
  local_1c = 0;
  iVar3 = 0;
LAB_0046fb7d:
  do {
    (**(code **)(*local_8 + 0xc))(local_8,&local_18,4);
    puVar5 = puStack_40;
    if (local_18 == DAT_006630bc) {
      *in_FS_OFFSET = uStack_48;
      puStack_40 = &LAB_0046fc82;
      puStack_44 = (undefined1 *)0x46fc7a;
      FUN_0046f170(local_c,uStack_48,puVar5);
      return;
    }
    iVar2 = FUN_0046e944(PTR_LAB_00462a54,1,local_c);
    (**(code **)(*local_8 + 0xc))(local_8,iVar2 + 0x10,1);
    (**(code **)(*local_8 + 0xc))(local_8,iVar2 + 0x20,4);
    puVar5 = &stack0xfffffffc;
    FUN_0046fa58(&local_10);
    if (local_10 != 0) {
      cVar1 = FUN_0046ec64(iVar2,local_10,puVar5);
      if (cVar1 == '\0') {
        FUN_00403a84(iVar2);
        goto LAB_0046fb7d;
      }
    }
    if (local_18 == 0) {
      *(int *)(local_c + 100) = iVar2;
    }
    else if (local_18 == local_1c) {
      *(int *)(iVar3 + 0xc) = iVar2;
      *(int *)(iVar2 + 0x18) = iVar3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
    }
    else if (local_1c < local_18) {
      *(int *)(iVar3 + 8) = iVar2;
      *(int *)(iVar2 + 0x14) = iVar3;
    }
    else if (local_18 < local_1c) {
      local_1c = local_1c - local_18;
      if (0 < local_1c) {
        local_20 = 1;
        do {
          iVar3 = *(int *)(iVar3 + 0x14);
          local_20 = local_20 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      *(int *)(iVar3 + 0xc) = iVar2;
      *(int *)(iVar2 + 0x18) = iVar3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
    }
    local_1c = local_18;
    iVar3 = iVar2;
  } while( true );
}

