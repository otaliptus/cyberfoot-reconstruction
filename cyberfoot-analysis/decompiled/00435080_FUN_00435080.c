// Address: 00435080
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00435080(int param_1,LPSTR param_2,undefined4 param_3,HGLOBAL param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  SIZE_T dwBytes;
  HGLOBAL pvVar7;
  PDEVMODEA pDevModeOutput;
  LONG LVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar10;
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  LPSTR local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  _devicemodeA local_b0;
  int *local_14;
  int local_10;
  undefined4 local_c;
  LPSTR local_8;
  
  puStack_d8 = &stack0xfffffffc;
  local_b4 = 0;
  local_b8 = 0;
  puStack_dc = &LAB_004352b7;
  uStack_e0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_e0;
  local_c = param_3;
  local_8 = param_2;
  FUN_00434ee8(param_1,0);
  pvVar7 = *(HGLOBAL *)(param_1 + 0x28);
  if (param_4 != pvVar7) {
    if (pvVar7 != (HGLOBAL)0x0) {
      GlobalUnlock(pvVar7);
      GlobalFree(*(HGLOBAL *)(param_1 + 0x28));
    }
    *(HGLOBAL *)(param_1 + 0x28) = param_4;
  }
  if (*(HGLOBAL *)(param_1 + 0x28) != (HGLOBAL)0x0) {
    pvVar3 = GlobalLock(*(HGLOBAL *)(param_1 + 0x28));
    *(LPVOID *)(param_1 + 0x24) = pvVar3;
    FUN_00435044(param_1,*(undefined4 *)((int)pvVar3 + 0x28));
  }
  FUN_004357c8(param_1);
  if (*(HANDLE *)(param_1 + 0x2c) != (HANDLE)0x0) {
    ClosePrinter(*(HANDLE *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_00434dbc(param_1,0);
  local_10 = -1;
  local_14 = (int *)FUN_0043534c(param_1);
  iVar4 = (**(code **)(*local_14 + 0x14))();
  if (-1 < iVar4 + -1) {
    iVar9 = 0;
    do {
      uVar5 = (**(code **)(*local_14 + 0x18))(local_14,iVar9,*local_14,param_5);
      cVar2 = FUN_00434ac8(uVar5,local_c,local_8);
      if (cVar2 != '\0') {
        iVar4 = (**(code **)(*local_14 + 0x18))(local_14,iVar9);
        FUN_00404adc(iVar4 + 0xc,param_5);
        local_10 = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_10 == -1) {
    local_10 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
    uVar5 = FUN_00434a68(PTR_DAT_004349e8,1,local_c,param_5,local_8);
    puVar10 = &local_b4;
    FUN_00406d44(PTR_PTR_0066ae34,&local_b8);
    local_c8 = local_8;
    local_c4 = 6;
    local_c0 = param_5;
    local_bc = 6;
    FUN_0040ae64(local_b8,&local_c8,1,puVar10);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))(*(int **)(param_1 + 0x10),local_b4,uVar5);
  }
  *(int *)(param_1 + 0x14) = local_10;
  BVar6 = OpenPrinterA(local_8,(LPHANDLE)(param_1 + 0x2c),(LPPRINTER_DEFAULTSA)0x0);
  if (BVar6 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      dwBytes = DocumentPropertiesA((HWND)0x0,*(HANDLE *)(param_1 + 0x2c),local_8,&local_b0,
                                    &local_b0,0);
      pvVar7 = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(param_1 + 0x28) = pvVar7;
      if (pvVar7 != (HGLOBAL)0x0) {
        pDevModeOutput = GlobalLock(pvVar7);
        *(PDEVMODEA *)(param_1 + 0x24) = pDevModeOutput;
        LVar8 = DocumentPropertiesA((HWND)0x0,*(HANDLE *)(param_1 + 0x2c),local_8,pDevModeOutput,
                                    pDevModeOutput,2);
        if (LVar8 < 0) {
          GlobalUnlock(*(HGLOBAL *)(param_1 + 0x28));
          GlobalFree(*(HGLOBAL *)(param_1 + 0x28));
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00435044(param_1,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x28));
    }
  }
  puVar1 = puStack_d8;
  *in_FS_OFFSET = uStack_e0;
  puStack_d8 = &LAB_004352be;
  puStack_dc = (undefined1 *)0x4352b6;
  FUN_004048f8(&local_b8,2,puVar1);
  return;
}

