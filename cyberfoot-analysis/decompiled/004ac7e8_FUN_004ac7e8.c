// Address: 004ac7e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ac7e8(undefined4 param_1,LPCLSID param_2)

{
  undefined1 *puVar1;
  LPCOLESTR lpszProgID;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004ac835;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004051d4(&local_8,param_1);
  lpszProgID = (LPCOLESTR)FUN_00405250(local_8);
  CLSIDFromProgID(lpszProgID,param_2);
  FUN_004ac7a4();
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004ac83c;
  puStack_18 = (undefined1 *)0x4ac834;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

