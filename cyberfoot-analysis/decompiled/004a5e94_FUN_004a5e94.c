// Address: 004a5e94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a5e94(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004a5f4b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar6 = PTR_PTR_004a550c;
  puStack_24 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((DAT_0067a68c != 0) &&
     (iVar4 = *(int *)(DAT_0067a68c + 8), puStack_24 = &stack0xfffffffc, -1 < iVar4 + -1)) {
    iVar5 = 0;
    uVar7 = true;
    puStack_24 = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_004a633c(DAT_0067a68c,iVar5);
      (**(code **)*puVar3)((undefined4 *)*puVar3,&local_10);
      uVar2 = local_10;
      FUN_00404b54(&local_14,&local_c,4);
      FUN_00404cf0(uVar2,local_14);
      if ((bool)uVar7) {
        puVar3 = (undefined4 *)FUN_004a633c(DAT_0067a68c,iVar5);
        puVar6 = (undefined *)*puVar3;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar7 = iVar4 == 0;
    } while (!(bool)uVar7);
  }
  iVar4 = (**(code **)(puVar6 + 8))(puVar6,1,local_8);
  puVar1 = puStack_24;
  *(undefined4 *)(iVar4 + 0x10) = local_c;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a5f52;
  puStack_28 = (undefined1 *)0x4a5f4a;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

