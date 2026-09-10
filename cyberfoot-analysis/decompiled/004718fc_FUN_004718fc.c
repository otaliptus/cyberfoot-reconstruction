// Address: 004718fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004718fc(void)

{
  undefined1 *puVar1;
  LPCSTR pCVar2;
  undefined4 uVar3;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined1 local_20;
  DWORD local_1c;
  undefined1 local_18;
  undefined4 local_14;
  DWORD local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_30 = &LAB_00471a74;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puVar4 = &local_8;
  local_10 = GetCurrentProcessId();
  local_c = 0;
  FUN_0040ae64("Delphi%.8X",&local_10,0,puVar4);
  FUN_00404928(&DAT_0066cb64,local_8);
  pCVar2 = (LPCSTR)FUN_00404da4(DAT_0066cb64);
  DAT_0066cb60 = GlobalAddAtomA(pCVar2);
  puVar4 = &local_14;
  local_24 = DAT_0066c668;
  local_20 = 0;
  local_1c = GetCurrentThreadId();
  local_18 = 0;
  FUN_0040ae64("ControlOfs%.8X%.8X",&local_24,1,puVar4);
  FUN_00404928(&DAT_0066cb68,local_14);
  pCVar2 = (LPCSTR)FUN_00404da4(DAT_0066cb68);
  DAT_0066cb62 = GlobalAddAtomA(pCVar2);
  pCVar2 = (LPCSTR)FUN_00404da4(DAT_0066cb68);
  DAT_0066cb6c = RegisterWindowMessageA(pCVar2);
  DAT_0066cba4 = FUN_0041e2c4(PTR_DAT_0041b7a0,1);
  FUN_00471500();
  DAT_0066cb54 = FUN_00471328(PTR_DAT_00462c24,1);
  uVar3 = FUN_00484c38(PTR_PTR_0047de3c,1,0);
  *(undefined4 *)PTR_DAT_0066b760 = uVar3;
  uVar3 = FUN_00485e74(PTR_PTR_0047df14,1,0);
  *(undefined4 *)PTR_DAT_0066b3ac = uVar3;
  FUN_00487b14(*(undefined4 *)PTR_DAT_0066b3ac,1);
  FUN_0041d7dc(PTR_DAT_0046087c,&LAB_004632c4,&LAB_004632b4);
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    DAT_00662f98 = GetProcAddress(hModule,"AnimateWindow");
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00471a7b;
  puStack_30 = (undefined1 *)0x471a6b;
  FUN_004048d4(&local_14,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x471a73;
  FUN_004048d4(&local_8);
  return;
}

