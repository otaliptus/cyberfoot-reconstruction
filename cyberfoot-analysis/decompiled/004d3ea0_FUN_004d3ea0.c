// Address: 004d3ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d3ea0(LPCWSTR param_1,uint param_2,LPWSTR param_3,LPWSTR *param_4)

{
  undefined1 *puVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  LPCSTR lpFileName;
  undefined4 uVar3;
  LPWSTR *ppWVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  LPSTR *lpFilePart;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  LPSTR local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (LPSTR)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004d3fb7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404f30(&local_8,0x208);
    lpFilePart = &local_c;
    lpBuffer = (LPSTR)FUN_00404da4(local_8);
    DVar2 = FUN_00404ba4(local_8);
    FUN_00404b0c(&local_10,param_1);
    lpFileName = (LPCSTR)FUN_00404da4(local_10);
    DVar2 = GetFullPathNameA(lpFileName,DVar2,lpBuffer,lpFilePart);
    uVar3 = FUN_00404f30(&local_8,DVar2);
    ppWVar4 = (LPWSTR *)CONCAT31((int3)((uint)uVar3 >> 8),DAT_004d3fcc);
    uVar5 = FUN_004d3da0(param_2,param_3,local_8);
    if ((local_c == (LPSTR)0x0) || (param_2 < uVar5)) {
      *param_4 = (LPWSTR)0x0;
    }
    else {
      iVar6 = FUN_00404da4(local_8);
      FUN_00404e04(local_8,1,(int)local_c - iVar6,&local_18);
      FUN_004051d4(&local_14,local_18);
      iVar6 = FUN_00405260(local_14);
      *param_4 = param_3 + iVar6;
    }
  }
  else {
    puStack_28 = &stack0xfffffffc;
    GetFullPathNameW(param_1,param_2,param_3,param_4);
    ppWVar4 = param_4;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = ppWVar4;
  puStack_2c = &LAB_004d3fbe;
  uStack_30 = 0x4d3f9e;
  FUN_004048d4(&local_18,ppWVar4,puVar1);
  uStack_30 = 0x4d3fa6;
  FUN_00404ff0(&local_14);
  uStack_30 = 0x4d3fae;
  FUN_004048d4(&local_10);
  uStack_30 = 0x4d3fb6;
  FUN_004048d4(&local_8);
  return;
}

