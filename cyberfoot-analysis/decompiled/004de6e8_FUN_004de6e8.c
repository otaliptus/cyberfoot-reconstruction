// Address: 004de6e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004de6e8(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ATOM AVar3;
  LPCWSTR pWVar4;
  BOOL BVar5;
  int iVar6;
  code *pcVar7;
  UINT *pUVar8;
  undefined4 *puVar9;
  WNDCLASSW *pWVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  tagWNDCLASSW *lpWndClass;
  HINSTANCE hInstance;
  undefined4 uStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  WNDCLASSW local_e4;
  tagWNDCLASSW local_bc;
  undefined4 local_94 [9];
  UINT local_70 [8];
  undefined4 local_50;
  undefined1 local_48 [64];
  undefined4 *local_8;
  
  bVar11 = 0;
  puStack_fc = &stack0xfffffffc;
  local_ec = 0;
  local_e8 = 0;
  puVar9 = local_94;
  for (iVar6 = 0x23; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *param_1;
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_100 = &LAB_004de85a;
  uStack_104 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_104;
  if (param_3 == '\0') {
    pcVar7 = (code *)&LAB_004de64c;
  }
  else {
    pcVar7 = FUN_00462fa8;
  }
  local_8 = param_2;
  FUN_00404b54(&local_e8,local_48,0x40);
  FUN_00404bac(&local_e8,".UnicodeClass");
  FUN_004051d4(local_8,local_e8);
  lpWndClass = &local_bc;
  pWVar4 = (LPCWSTR)FUN_00405250(*local_8);
  BVar5 = GetClassInfoW(DAT_0066c668,pWVar4,lpWndClass);
  if ((BVar5 == 0) || (pcVar7 != local_bc.lpfnWndProc)) {
    if (BVar5 != 0) {
      hInstance = DAT_0066c668;
      pWVar4 = (LPCWSTR)FUN_00405250(*local_8);
      UnregisterClassW(pWVar4,hInstance);
      FUN_0040f9a0();
    }
    pUVar8 = local_70;
    pWVar10 = &local_e4;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      pWVar10->style = *pUVar8;
      pUVar8 = pUVar8 + (uint)bVar11 * -2 + 1;
      pWVar10 = (WNDCLASSW *)((int)pWVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    local_e4.hInstance = DAT_0066c668;
    local_e4.lpfnWndProc = pcVar7;
    cVar2 = FUN_004d43b0(local_50);
    if (cVar2 == '\0') {
      FUN_00405128(&local_ec,local_50);
      local_e4.lpszMenuName = (LPCWSTR)FUN_00405250(local_ec);
    }
    local_e4.lpszClassName = (LPCWSTR)FUN_00405250(*local_8);
    AVar3 = RegisterClassW(&local_e4);
    if (AVar3 == 0) {
      FUN_0040f904();
    }
  }
  puVar1 = puStack_fc;
  *in_FS_OFFSET = uStack_104;
  puStack_fc = &LAB_004de861;
  puStack_100 = (undefined1 *)0x4de84e;
  FUN_00404ff0(&local_ec,uStack_104,puVar1);
  puStack_100 = (undefined1 *)0x4de859;
  FUN_004048d4(&local_e8);
  return;
}

