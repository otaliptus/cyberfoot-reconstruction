// Address: 00523a70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00523a70(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  uint local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00523b2d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_2;
  iVar2 = FUN_0051aad8(param_1[0xb]);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      uVar3 = FUN_005212bc(param_1[0xb],iVar6);
      uVar4 = FUN_0051d4c8(uVar3,1);
      uVar3 = FUN_005212bc(param_1[0xb],iVar6);
      uVar5 = FUN_0051d4c8(uVar3,3);
      if ((int)local_8 < (int)((uVar4 & 0xffff) + (uVar5 & 0xffff))) {
        FUN_00406d44(&PTR_DAT_005166ec,&local_c);
        FUN_00516934(local_c);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(ushort *)(param_1[0xc] + 8) != local_8) {
    *(undefined2 *)(param_1[0xc] + 8) = (undefined2)local_8;
    FUN_005236d4(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00523b34;
  puStack_20 = (undefined1 *)0x523b2c;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

