// Address: 0056ea98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm2_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [344];
  
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  puStack_170 = (undefined1 *)0x56eac9;
  FUN_00405628(local_15c,PTR_DAT_00408718);
  puStack_174 = &LAB_0056ebbe;
  uStack_178 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_178;
  puStack_170 = &stack0xfffffffc;
  FUN_00642c50(0x2e0,&local_160);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_160);
  FUN_00642c50(0x2e1,&local_164);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_164);
  FUN_00642c50(0x2e2,&local_168);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_168);
  DAT_006d1f10 = 0;
  iVar2 = FUN_0040a4d4("teams\\*.b15",0x3f,local_15c);
  while (iVar2 == 0) {
    DAT_006d1f10 = DAT_006d1f10 + 1;
    iVar2 = FUN_0040a524(local_15c);
  }
  FUN_0040a548(local_15c);
  FUN_0043b234(*(undefined4 *)(param_1 + 0x30c),1);
  puVar1 = puStack_170;
  *in_FS_OFFSET = uStack_178;
  puStack_170 = &LAB_0056ebc5;
  puStack_174 = (undefined1 *)0x56ebac;
  FUN_00405008(&local_168,3,puVar1);
  puStack_174 = (undefined1 *)0x56ebbd;
  FUN_004056f8(local_15c,PTR_DAT_00408718);
  return;
}

