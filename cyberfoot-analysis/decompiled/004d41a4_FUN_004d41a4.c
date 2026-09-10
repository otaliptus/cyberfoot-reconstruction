// Address: 004d41a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d41a4(HMODULE param_1,LPWSTR param_2,DWORD param_3)

{
  undefined1 *puVar1;
  DWORD DVar2;
  LPSTR lpFilename;
  undefined4 uVar3;
  DWORD *in_FS_OFFSET;
  DWORD DStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d422f;
  DStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_20;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404f30(&local_8,0x104);
    DVar2 = FUN_00404ba4(local_8);
    lpFilename = (LPSTR)FUN_00404da4(local_8);
    DVar2 = GetModuleFileNameA(param_1,lpFilename,DVar2);
    uVar3 = FUN_00404f30(&local_8,DVar2);
    DVar2 = CONCAT31((int3)((uint)uVar3 >> 8),DAT_004d4240);
    FUN_004d3da0(param_3,param_2,local_8);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    GetModuleFileNameW(param_1,param_2,param_3);
    DVar2 = param_3;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = DVar2;
  puStack_1c = &LAB_004d4236;
  DStack_20 = 0x4d422e;
  FUN_004048d4(&local_8,DVar2,puVar1);
  return;
}

