// Address: 0040f1f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f1f0(LCID param_1)

{
  undefined1 *puVar1;
  UINT UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  CHAR local_b [7];
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0040f254;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  GetLocaleInfoA(param_1,0x1004,local_b,7);
  FUN_00404b54(&local_10,local_b,7);
  uVar3 = local_10;
  UVar2 = GetACP();
  FUN_0040a034(uVar3,UVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040f25b;
  puStack_1c = (undefined1 *)0x40f253;
  FUN_004048d4(&local_10,uStack_20,puVar1);
  return;
}

