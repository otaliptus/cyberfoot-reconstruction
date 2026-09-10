// Address: 004699b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004699b8(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  ATOM AVar4;
  BOOL BVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_c4;
  int local_c0;
  undefined1 local_bc;
  tagWNDCLASSA local_b8;
  undefined1 local_90 [7];
  byte local_89;
  int local_74;
  WNDCLASSA local_6c;
  CHAR local_44 [64];
  
  puStack_d0 = &stack0xfffffffc;
  local_c4 = 0;
  puStack_d4 = &LAB_00469b79;
  uStack_d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d8;
  (**(code **)(*param_1 + 0x98))(param_1,local_90);
  if ((local_74 == 0) && ((local_89 & 0x40) != 0)) {
    iVar1 = param_1[1];
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x1c) & 2) != 0)) {
      cVar3 = FUN_00403c10(iVar1,PTR_PTR_00461f94);
      if (cVar3 != '\0') {
        local_74 = FUN_0046cae0(iVar1);
        goto LAB_00469a64;
      }
    }
    local_c0 = param_1[2];
    local_bc = 0xb;
    piVar9 = &local_c0;
    uVar8 = 0;
    FUN_00406d44(PTR_PTR_0066b45c,&local_c4);
    FUN_0040e3ac(PTR_DAT_0041b6dc,1,local_c4,uVar8,piVar9);
    FUN_00404250();
  }
LAB_00469a64:
  param_1[0x5d] = (int)local_6c.lpfnWndProc;
  BVar5 = GetClassInfoA(local_6c.hInstance,local_44,&local_b8);
  if ((BVar5 == 0) || (local_b8.lpfnWndProc != FUN_00462fa8)) {
    if (BVar5 != 0) {
      UnregisterClassA(local_44,local_6c.hInstance);
    }
    local_6c.lpfnWndProc = FUN_00462fa8;
    local_6c.lpszClassName = local_44;
    AVar4 = RegisterClassA(&local_6c);
    if (AVar4 == 0) {
      FUN_0040f904();
    }
  }
  DAT_00662f9c = param_1;
  (**(code **)(*param_1 + 0x9c))(param_1,local_90);
  if (param_1[0x60] == 0) {
    FUN_0040f904();
  }
  uVar6 = GetWindowLongA((HWND)param_1[0x60],-0x10);
  if ((uVar6 & 0x40000000) != 0) {
    LVar7 = GetWindowLongA((HWND)param_1[0x60],-0xc);
    if (LVar7 == 0) {
      SetWindowLongA((HWND)param_1[0x60],-0xc,(LONG)param_1[0x60]);
    }
  }
  FUN_0040a9d4(param_1[0x19]);
  param_1[0x19] = 0;
  FUN_0046cdf0(param_1);
  uVar10 = 1;
  uVar8 = FUN_0042a3b4(param_1[0x1a]);
  FUN_004673cc(param_1,0x30,uVar8,uVar10);
  if ((char)param_1[0x17] != '\0') {
    FUN_00403c80(param_1);
  }
  puVar2 = puStack_d0;
  *in_FS_OFFSET = uStack_d8;
  puStack_d0 = &LAB_00469b80;
  puStack_d4 = (undefined1 *)0x469b78;
  FUN_004048d4(&local_c4,uStack_d8,puVar2);
  return;
}

