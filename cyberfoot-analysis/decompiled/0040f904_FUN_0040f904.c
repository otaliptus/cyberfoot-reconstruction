// Address: 0040f904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f904(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  DWORD local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0040f994;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  DVar2 = GetLastError();
  if (DVar2 == 0) {
    iVar3 = FUN_0040e42c(PTR_DAT_004090cc,1,PTR_PTR_0066b694);
  }
  else {
    local_10 = 0;
    local_14 = DVar2;
    FUN_0040db5c(DVar2,&local_18);
    local_c = local_18;
    local_8 = 0xb;
    in_stack_ffffffd0 = 1;
    iVar3 = FUN_0040e468(PTR_DAT_004090cc,1,PTR_PTR_0066b430,1,&local_14);
  }
  *(DWORD *)(iVar3 + 0xc) = DVar2;
  FUN_00404250(iVar3);
  puVar1 = puStack_28;
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0040f99b;
  FUN_004048d4(&local_18,in_stack_ffffffd0,puVar1);
  return;
}

