// Address: 0054ba68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054ba68(int *param_1,int param_2)

{
  undefined4 **ppuVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  HWND pHVar6;
  HDC pHVar7;
  LPCWSTR lpFile;
  int *in_FS_OFFSET;
  LPCWSTR lpParameters;
  LPCWSTR lpDirectory;
  INT nShowCmd;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined4 **ppuStack_58;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  ppuStack_58 = (undefined4 **)&stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  puStack_5c = &LAB_0054bc59;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  local_8 = param_2;
  iVar3 = FUN_0054c0f0(param_1);
  if (-1 < iVar3) {
    iVar4 = (**(code **)(*(int *)param_1[0x8f] + 0x14))();
    if (iVar3 < iVar4) {
      (**(code **)(*param_1 + 0x44))(param_1,local_38);
      uVar5 = FUN_0042acbc(PTR_PTR_00428c7c,1);
      pHVar6 = (HWND)FUN_0046cae0(param_1);
      pHVar7 = GetDC(pHVar6);
      FUN_0042b628(uVar5,pHVar7);
      local_38[0] = local_38[0] + 6;
      FUN_0054ce04(param_1,iVar3,&local_28);
      local_8 = 1;
      local_c = 0;
      local_10 = 0;
      local_14 = 1;
      local_18 = 1;
      local_1c = 0;
      local_20 = CONCAT31((int3)((uint)param_1[0xbc] >> 8),(char)param_1[0xba]) ^ 1;
      local_24 = 0x3ff00000;
      local_28 = 0;
      local_38[3] = param_1[0xac];
      local_38[2] = 0x1fffffff;
      local_38[1] = 0x1fffffff;
      local_38[0] = param_1[0xbd];
      puStack_3c = &local_c;
      puStack_40 = &local_10;
      puStack_44 = &local_14;
      local_48 = &local_18;
      ppuStack_58 = &local_48;
      puStack_5c = (undefined1 *)param_1[0xbe];
      iStack_60 = param_1[0xbb];
      cVar2 = FUN_0054a8f0(uVar5,0,local_38);
      if (cVar2 != '\0') {
        pHVar7 = (HDC)FUN_0042b5a8(uVar5);
        pHVar6 = (HWND)FUN_0046cae0(param_1);
        ReleaseDC(pHVar6,pHVar7);
        FUN_00403a84(uVar5);
        iVar4 = FUN_00405574(&DAT_0054bc6c,local_c);
        if (iVar4 < 1) {
          iVar4 = FUN_00405574(L"mailto:",local_c);
          if (0 < iVar4) goto LAB_0054bbcb;
          if (*(short *)((int)param_1 + 0x2d2) != 0) {
            (*(code *)param_1[0xb4])(param_1[0xb5],param_1,iVar3,local_c);
          }
        }
        else {
LAB_0054bbcb:
          nShowCmd = 1;
          lpDirectory = (LPCWSTR)0x0;
          lpParameters = (LPCWSTR)0x0;
          lpFile = (LPCWSTR)FUN_00405250(local_c);
          ShellExecuteW((HWND)0x0,L"open",lpFile,lpParameters,lpDirectory,nShowCmd);
        }
        *(undefined4 *)(local_8 + 0xc) = 0;
        goto LAB_0054bc36;
      }
      pHVar7 = (HDC)FUN_0042b5a8(uVar5);
      pHVar6 = (HWND)FUN_0046cae0(param_1);
      ReleaseDC(pHVar6,pHVar7);
      FUN_00403a84(uVar5);
    }
  }
  FUN_0045eaac(param_1,local_8);
LAB_0054bc36:
  ppuVar1 = ppuStack_58;
  *in_FS_OFFSET = iStack_60;
  ppuStack_58 = (undefined4 **)&LAB_0054bc60;
  puStack_5c = (undefined1 *)0x54bc4b;
  FUN_00404ff0(&local_28,iStack_60,ppuVar1);
  puStack_5c = (undefined1 *)0x54bc58;
  FUN_00405008(&local_14,3);
  return;
}

