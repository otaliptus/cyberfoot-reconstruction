// Address: 00418510
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418510(int param_1,char param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  ushort extraout_CX;
  undefined1 extraout_DL;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_178;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined4 local_144;
  undefined1 local_140 [256];
  undefined4 local_40;
  undefined1 local_3c;
  uint local_38;
  undefined1 local_34;
  undefined1 *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  uint local_14;
  undefined1 local_10;
  ushort local_c;
  undefined1 local_9;
  int local_8;
  
  local_144 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_9 = 0;
  local_c = param_3;
  if (param_2 != '\0') {
    puStack_164 = (undefined1 *)0x418539;
    param_1 = FUN_00403de8();
    local_c = extraout_CX;
    local_9 = extraout_DL;
  }
  puStack_168 = &LAB_0041876d;
  uStack_16c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_16c;
  puStack_164 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00403a54(param_1,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  uStack_178 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_178;
  iVar3 = local_c - 0x100;
  if ((iVar3 < 0) || (local_c < 0x10f)) {
    local_1c = *(undefined4 *)PTR_PTR_0066b658;
    local_18 = 0xb;
    local_14 = (uint)local_c;
    local_10 = 0;
    FUN_00406d44(PTR_PTR_0066b038,&local_20,0,1,&local_1c);
    FUN_0040e3ac(PTR_DAT_00408f58,1,local_20);
    FUN_00404250();
  }
  iVar1 = FUN_00405eec(DAT_0066c824);
  if (iVar1 <= iVar3) {
    iVar2 = (iVar3 / 0xf + 1) * 0xf;
    if (0x7ff < iVar2) {
      FUN_00406d44(PTR_PTR_0066af08,&local_24);
      FUN_0040e370(PTR_DAT_00408f58,1,local_24);
      FUN_00404250();
    }
    FUN_004060a8(&DAT_0066c824,PTR_DAT_00418330,1,iVar2);
    iVar2 = FUN_00405eec(DAT_0066c824);
    if (iVar1 <= iVar2 + -1) {
      iVar2 = ((iVar2 + -1) - iVar1) + 1;
      do {
        *(undefined4 *)(DAT_0066c824 + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar1 = *(int *)(DAT_0066c824 + iVar3 * 4);
  if (iVar1 != 0) {
    if (iVar1 == DAT_00662478) {
      local_1c = *(undefined4 *)PTR_PTR_0066b658;
      local_18 = 0xb;
      local_14 = (uint)local_c;
      local_10 = 0;
      puVar5 = &local_1c;
      uVar4 = 1;
      FUN_00406d44(PTR_PTR_0066b198,&local_28);
      FUN_0040e3ac(PTR_DAT_00408f58,1,local_28,uVar4,puVar5);
      FUN_00404250();
    }
    else {
      local_40 = *(undefined4 *)PTR_PTR_0066b658;
      local_3c = 0xb;
      local_38 = (uint)local_c;
      local_34 = 0;
      FUN_004039d4(**(undefined4 **)(DAT_0066c824 + iVar3 * 4),local_140);
      local_30 = local_140;
      local_2c = 4;
      puVar5 = &local_40;
      uVar4 = 2;
      FUN_00406d44(PTR_PTR_0066ad94,&local_144);
      FUN_0040e3ac(PTR_DAT_00408f58,1,local_144,uVar4,puVar5);
      FUN_00404250();
    }
  }
  *(int *)(DAT_0066c824 + iVar3 * 4) = local_8;
  *(ushort *)(local_8 + 4) = local_c;
  *in_FS_OFFSET = uStack_178;
  uStack_178 = 0x41873f;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  return;
}

