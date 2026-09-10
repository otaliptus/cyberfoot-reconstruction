// Address: 00441b38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00441b38(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  HKEY pHVar4;
  LSTATUS LVar5;
  byte bVar6;
  undefined4 *in_FS_OFFSET;
  DWORD DVar7;
  REGSAM RVar8;
  HKEY *ppHVar9;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  HKEY local_c;
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_00441cd2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0040496c(&local_10,param_2);
  uVar2 = FUN_004417c4(local_10);
  bVar6 = (byte)uVar2;
  if (bVar6 == 0) {
    FUN_00404e44(&local_10,1,1);
  }
  local_c = (HKEY)0x0;
  ppHVar9 = &local_c;
  RVar8 = 0x20019;
  DVar7 = 0;
  pCVar3 = (LPCSTR)FUN_00404da4(local_10);
  pHVar4 = (HKEY)FUN_00441920(param_1,uVar2);
  LVar5 = RegOpenKeyExA(pHVar4,pCVar3,DVar7,RVar8,ppHVar9);
  local_5 = LVar5 == 0;
  if ((bool)local_5) {
    *(undefined4 *)(param_1 + 0x18) = 0x20019;
    if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
      FUN_00404c64(&local_10,3);
    }
    FUN_004418fc(param_1,local_c,local_10);
  }
  else {
    ppHVar9 = &local_c;
    RVar8 = 0x20009;
    DVar7 = 0;
    pCVar3 = (LPCSTR)FUN_00404da4(local_10);
    pHVar4 = (HKEY)FUN_00441920(param_1,uVar2);
    LVar5 = RegOpenKeyExA(pHVar4,pCVar3,DVar7,RVar8,ppHVar9);
    local_5 = LVar5 == 0;
    if ((bool)local_5) {
      *(undefined4 *)(param_1 + 0x18) = 0x20009;
      if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
        FUN_00404c64(&local_10,3);
      }
      FUN_004418fc(param_1,local_c,local_10);
    }
    else {
      ppHVar9 = &local_c;
      RVar8 = 1;
      DVar7 = 0;
      pCVar3 = (LPCSTR)FUN_00404da4(local_10);
      pHVar4 = (HKEY)FUN_00441920(param_1,uVar2);
      LVar5 = RegOpenKeyExA(pHVar4,pCVar3,DVar7,RVar8,ppHVar9);
      local_5 = LVar5 == 0;
      if ((bool)local_5) {
        *(undefined4 *)(param_1 + 0x18) = 1;
        if ((*(int *)(param_1 + 4) != 0 & bVar6) != 0) {
          FUN_00404c64(&local_10,3);
        }
        FUN_004418fc(param_1,local_c,local_10);
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00441cd9;
  puStack_20 = (undefined1 *)0x441cd1;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  return;
}

