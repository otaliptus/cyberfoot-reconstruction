// Address: 0040e7cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e7cc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  CHAR local_129 [261];
  _MEMORY_BASIC_INFORMATION local_24;
  undefined4 local_8;
  
  puStack_180 = &stack0xfffffffc;
  local_174 = 0;
  local_150 = 0;
  local_158 = 0;
  local_154 = 0;
  local_8 = 0;
  puStack_184 = &LAB_0040e987;
  puStack_188 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_188;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_180 = &stack0xfffffffc;
    FUN_00406d44(PTR_PTR_0066b7b0,&local_8);
  }
  else {
    FUN_00406d44(PTR_PTR_0066b3c8,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&local_24,0x1c);
  if (local_24.State == 0x1000) {
    DVar4 = GetModuleFileNameA(local_24.AllocationBase,local_129,0x105);
    if (DVar4 != 0) {
      local_14c = *(undefined4 *)(iVar1 + 0xc);
      local_148 = 5;
      FUN_00404b54(&local_154,local_129,0x105);
      FUN_0040a630(local_154,&local_150);
      local_144 = local_150;
      local_140 = 0xb;
      local_13c = local_8;
      local_138 = 0xb;
      local_130 = 5;
      puVar6 = &local_14c;
      uVar5 = 3;
      local_134 = uVar2;
      FUN_00406d44(PTR_PTR_0066b4fc,&local_158);
      FUN_0040e3ac(PTR_DAT_00408dec,1,local_158,uVar5,puVar6);
      goto LAB_0040e956;
    }
  }
  local_170 = *(undefined4 *)(iVar1 + 0xc);
  local_16c = 5;
  local_168 = local_8;
  local_164 = 0xb;
  local_15c = 5;
  puVar6 = &local_170;
  uVar5 = 2;
  local_160 = uVar2;
  FUN_00406d44(PTR_PTR_0066b3e8,&local_174);
  FUN_0040e3ac(PTR_DAT_00408dec,1,local_174,uVar5,puVar6);
LAB_0040e956:
  puVar3 = puStack_188;
  *in_FS_OFFSET = uVar5;
  puStack_188 = &LAB_0040e98e;
  FUN_004048d4(&local_174,uVar5,puVar3);
  FUN_004048f8(&local_158,3);
  FUN_004048d4(&local_8);
  return;
}

