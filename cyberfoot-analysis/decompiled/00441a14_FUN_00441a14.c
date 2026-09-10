// Address: 00441a14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441a14(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  HKEY pHVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  LPSTR lpClass;
  DWORD dwOptions;
  REGSAM RVar6;
  DWORD DVar7;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *ppHVar8;
  DWORD *lpdwDisposition;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  DWORD local_14;
  int local_10;
  HKEY local_c;
  bool local_6;
  char local_5;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00441b19;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_5 = param_3;
  FUN_0040496c(&local_10,param_2);
  uVar2 = FUN_004417c4(local_10);
  if ((byte)uVar2 == 0) {
    FUN_00404e44(&local_10,1,1);
  }
  local_c = (HKEY)0x0;
  if ((local_5 == '\0') || (local_10 == 0)) {
    ppHVar8 = &local_c;
    RVar6 = *(REGSAM *)(param_1 + 0x18);
    DVar7 = 0;
    pCVar3 = (LPCSTR)FUN_00404da4(local_10);
    pHVar4 = (HKEY)FUN_00441920(param_1,uVar2);
    iVar5 = RegOpenKeyExA(pHVar4,pCVar3,DVar7,RVar6,ppHVar8);
  }
  else {
    lpdwDisposition = &local_14;
    ppHVar8 = &local_c;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    RVar6 = *(REGSAM *)(param_1 + 0x18);
    dwOptions = 0;
    lpClass = (LPSTR)0x0;
    DVar7 = 0;
    pCVar3 = (LPCSTR)FUN_00404da4(local_10);
    pHVar4 = (HKEY)FUN_00441920(param_1,uVar2);
    iVar5 = RegCreateKeyExA(pHVar4,pCVar3,DVar7,lpClass,dwOptions,RVar6,lpSecurityAttributes,ppHVar8
                            ,lpdwDisposition);
  }
  local_6 = iVar5 == 0;
  if (local_6) {
    if ((*(int *)(param_1 + 4) != 0 & (byte)uVar2) != 0) {
      FUN_00404c64(&local_10,3);
    }
    FUN_004418fc(param_1,local_c,local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00441b20;
  puStack_24 = (undefined1 *)0x441b18;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  return;
}

