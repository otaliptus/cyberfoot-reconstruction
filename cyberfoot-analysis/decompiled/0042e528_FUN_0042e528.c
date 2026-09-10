// Address: 0042e528
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e528(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  HENHMETAFILE pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 local_6c [24];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  UINT local_3c;
  BYTE *local_8;
  
  puStack_7c = (undefined1 *)0x42e53c;
  FUN_0042e494(param_1);
  puStack_7c = (undefined1 *)0x42e54b;
  FUN_00420b00(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x42e559;
    FUN_0042b898();
  }
  puStack_7c = (undefined1 *)0x42e561;
  local_8 = (BYTE *)FUN_004027fc(local_3c);
  iVar1 = *(int *)(param_1 + 0x28);
  puStack_80 = &LAB_0042e5e8;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  FUN_00402a04(local_6c,local_8,100);
  FUN_00420b00(param_2,local_8 + 100,local_3c - 100);
  pHVar3 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_0042b898();
  }
  puVar2 = puStack_7c;
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_0042e5ef;
  puStack_80 = (undefined1 *)0x42e5e7;
  FUN_0040281c(local_8,local_3c,puVar2);
  return;
}

