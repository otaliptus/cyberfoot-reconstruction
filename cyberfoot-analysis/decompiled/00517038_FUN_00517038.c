// Address: 00517038
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00517038(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  ushort local_a;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00517224;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x51705f;
  local_8 = param_1;
  FUN_00517234(param_1);
  if (*(char *)(local_8 + 8) == '\x03') {
    *(undefined4 *)(local_8 + 0x14) = 0x428;
  }
  else {
    *(undefined4 *)(local_8 + 0x14) = 0x28;
  }
  puStack_2c = (undefined1 *)0x517089;
  puVar2 = (undefined4 *)FUN_004027fc(*(undefined4 *)(local_8 + 0x14));
  *(undefined4 **)(local_8 + 0xc) = puVar2;
  puStack_30 = &LAB_005171f7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *puVar2 = 0x28;
  puVar2[1] = *(undefined4 *)(local_8 + 0x24);
  puVar2[2] = *(undefined4 *)(local_8 + 0x20);
  *(undefined2 *)(puVar2 + 3) = 1;
  puVar2[5] = 0;
  puVar2[4] = 0;
  if (*(char *)(local_8 + 8) != '\x03') {
    *(undefined2 *)((int)puVar2 + 0xe) = 0x18;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puStack_2c = &stack0xfffffffc;
    goto LAB_00517184;
  }
  *(undefined2 *)((int)puVar2 + 0xe) = 8;
  puStack_2c = &stack0xfffffffc;
  if (*(HANDLE *)(local_8 + 0x1c) == (HANDLE)0x0) {
LAB_0051712c:
    local_a = 0;
  }
  else {
    puStack_2c = &stack0xfffffffc;
    iVar3 = GetObjectA(*(HANDLE *)(local_8 + 0x1c),2,&local_a);
    if ((iVar3 == 0) || (local_a == 0)) goto LAB_0051712c;
    GetPaletteEntries(*(HPALETTE *)(local_8 + 0x1c),0,(uint)local_a,
                      (LPPALETTEENTRY)(*(int *)(local_8 + 0xc) + 0x28));
    FUN_00516fe0(*(int *)(local_8 + 0xc) + 0x28,local_a);
  }
  if (local_a < 0x100) {
    FUN_004032a8(*(int *)(local_8 + 0xc) + 0x28 + (uint)local_a * 4,0x100 - (uint)local_a,0);
  }
  iVar3 = *(int *)(local_8 + 0xc);
  *(undefined4 *)(iVar3 + 0x20) = 0x100;
  *(uint *)(iVar3 + 0x24) = (uint)local_a;
LAB_00517184:
  iVar3 = FUN_0051698c(*(undefined4 *)(local_8 + 0x24),
                       *(undefined2 *)(*(int *)(local_8 + 0xc) + 0xe),0x20);
  uVar4 = (int)*(uint *)(local_8 + 0x20) >> 0x1f;
  iVar3 = iVar3 * ((*(uint *)(local_8 + 0x20) ^ uVar4) - uVar4);
  *(int *)(local_8 + 0x18) = iVar3;
  iVar3 = FUN_00408048(2,iVar3);
  *(int *)(local_8 + 0x10) = iVar3;
  if (iVar3 == 0) {
    FUN_00406d44(&PTR_DAT_0051669c,&local_10);
    FUN_0040e370(PTR_DAT_00408850,1,local_10);
    FUN_00404250();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0051722b;
  puStack_24 = (undefined1 *)0x517223;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  return;
}

