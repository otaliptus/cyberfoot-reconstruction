// Address: 0054b734
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0054b734(int *param_1,WPARAM param_2,int *param_3)

{
  uint **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  HDC pHVar5;
  int *in_FS_OFFSET;
  UINT Msg;
  int lParam;
  int iStack_60;
  undefined1 *puStack_5c;
  uint **ppuStack_58;
  uint *local_48;
  undefined4 *puStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [6];
  int *local_8;
  
  ppuStack_58 = (uint **)&stack0xfffffffc;
  local_20[1] = 0;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_5c = &LAB_0054b8af;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  *param_3 = 0x28;
  ppuVar1 = (uint **)&stack0xfffffffc;
  local_8 = param_3;
  if (-1 < (int)param_2) {
    iVar2 = (**(code **)(*(int *)param_1[0x8f] + 0x14))();
    ppuVar1 = ppuStack_58;
    if ((int)param_2 < iVar2) {
      (**(code **)(*param_1 + 0x44))(param_1,&local_38);
      local_2c = local_34 + 1000;
      uVar3 = FUN_0042acbc(PTR_PTR_00428c7c,1);
      pHVar4 = (HWND)FUN_0046cae0(param_1);
      pHVar5 = GetDC(pHVar4);
      FUN_0042b628(uVar3,pHVar5);
      FUN_0054ce04(param_1,param_2,&local_28);
      local_8 = (int *)0x1;
      local_20[5] = 1;
      local_20[4] = 0;
      local_20[3] = 1;
      local_20[2] = 1;
      local_20[1] = 0;
      local_20[0] = CONCAT31((int3)((uint)param_1[0xbc] >> 8),(char)param_1[0xba]) ^ 1;
      local_24 = 0x3ff00000;
      local_28 = 0;
      local_2c = param_1[0xac];
      uStack_30 = 0x1fffffff;
      local_34 = 0x1fffffff;
      local_38 = param_1[0xbd];
      puStack_3c = local_20 + 1;
      puStack_40 = local_20;
      puStack_44 = &local_24;
      local_48 = local_20 + 5;
      ppuStack_58 = &local_48;
      puStack_5c = (undefined1 *)param_1[0xbe];
      iStack_60 = param_1[0xbb];
      FUN_0054a8f0(uVar3,0,&local_38);
      pHVar5 = (HDC)FUN_0042b5a8(uVar3);
      pHVar4 = (HWND)FUN_0046cae0(param_1);
      ReleaseDC(pHVar4,pHVar5);
      FUN_00403a84(uVar3);
      iVar2 = local_20[4] + 4;
      Msg = 0x153;
      lParam = iVar2;
      pHVar4 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar4,Msg,param_2,lParam);
      goto LAB_0054b88f;
    }
  }
  ppuStack_58 = ppuVar1;
  iVar2 = FUN_0054b8fc(param_1);
LAB_0054b88f:
  ppuVar1 = ppuStack_58;
  *local_8 = iVar2;
  *in_FS_OFFSET = iStack_60;
  ppuStack_58 = (uint **)&LAB_0054b8b6;
  puStack_5c = (undefined1 *)0x54b8ae;
  FUN_00405008(&local_28,4,ppuVar1);
  return;
}

