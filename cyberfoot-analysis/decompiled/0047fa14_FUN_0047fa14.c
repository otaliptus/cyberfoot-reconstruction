// Address: 0047fa14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047fa14(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined1 **ppuVar6;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_118;
  undefined1 local_114 [256];
  undefined1 *local_14;
  undefined1 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_118 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_130 = (undefined1 *)0x47fa32;
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_0047fb78;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_13c = (undefined1 *)0x47fa54;
  puStack_130 = &stack0xfffffffc;
  local_8 = param_1;
  (**(code **)(**(int **)PTR_DAT_0066b748 + 0x14))();
  puStack_140 = &LAB_0047fb58;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  uStack_148 = 0;
  puStack_14c = (undefined1 *)0x47fa73;
  puStack_13c = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xe0))(local_8,0,param_3);
  puStack_14c = (undefined1 *)0x47fa7b;
  puVar4 = (undefined *)FUN_004039cc(local_8);
  puVar2 = puStack_140;
  if ((puVar4 != PTR_PTR_0047ce6c) && ((*(byte *)(local_8 + 7) & 0x10) == 0)) {
    *(byte *)(local_8 + 0xbd) = *(byte *)(local_8 + 0xbd) | 1;
    puStack_150 = &LAB_0047fb20;
    uStack_154 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_154;
    puStack_14c = &stack0xfffffffc;
    cVar3 = FUN_0041dc50(local_8,PTR_PTR_0047ce6c);
    if (cVar3 == '\0') {
      FUN_004039d4(*local_8,local_114);
      local_14 = local_114;
      local_10 = 4;
      ppuVar6 = &local_14;
      uVar5 = 0;
      FUN_00406d44(PTR_PTR_0066b19c,&local_118);
      FUN_0040e3ac(PTR_DAT_0041b4b8,1,local_118,uVar5,ppuVar6);
      FUN_00404250();
    }
    *in_FS_OFFSET = uStack_154;
    *(byte *)(local_8 + 0xbd) = *(byte *)(local_8 + 0xbd) & 0xfe;
    return;
  }
  *in_FS_OFFSET = uStack_148;
  puStack_140 = &LAB_0047fb5f;
  iVar1 = **(int **)PTR_DAT_0066b748;
  uStack_144 = 0x47fb57;
  (**(code **)(iVar1 + 0x18))(*(int **)PTR_DAT_0066b748,iVar1,puVar2);
  return;
}

