// Address: 0064d7f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064d7f0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined1 local_164 [52];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_16c = (undefined1 *)0x64d80d;
  FUN_00405628(local_164,PTR_DAT_00408718);
  puStack_170 = &LAB_0064d87d;
  uStack_174 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_174;
  puStack_16c = &stack0xfffffffc;
  iVar2 = FUN_0040a4d4(param_1,0x3f,local_164);
  if (iVar2 == 0) {
    local_c = local_12c;
    local_8 = local_130;
  }
  else {
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
  }
  FUN_0040a548(local_164);
  puVar1 = puStack_16c;
  *in_FS_OFFSET = uStack_174;
  puStack_16c = &LAB_0064d884;
  puStack_170 = (undefined1 *)0x64d87c;
  FUN_004056f8(local_164,PTR_DAT_00408718,puVar1);
  return;
}

