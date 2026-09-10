// Address: 0047e4e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e4e8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_0047e559;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = FUN_0047e4c0(param_1);
  if (iVar2 == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar4 = &local_c;
    uVar3 = 0;
    FUN_00406d44(PTR_PTR_0066b45c,&local_10);
    FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_10,uVar3,puVar4);
    FUN_00404250();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0047e560;
  puStack_20 = (undefined1 *)0x47e558;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  return;
}

