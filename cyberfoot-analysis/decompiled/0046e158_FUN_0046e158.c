// Address: 0046e158
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e158(int *param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  HWND pHVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  UINT uFlags;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar1 = PTR_DAT_0066b760;
  puStack_34 = &stack0xfffffffc;
  local_1c = *param_2;
  local_18 = param_2[1];
  iStack_14 = param_2[2];
  local_10 = param_2[3];
  *(undefined1 *)(param_1 + 0x84) = 1;
  puStack_38 = &LAB_0046e331;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_1;
  FUN_00466238(param_1,param_3);
  local_10 = local_10 + 4;
  FUN_00467470(local_8,&local_1c);
  iVar2 = FUN_00484e88(*(undefined4 *)puVar1);
  if (iVar2 < local_8[0x13] + local_18) {
    local_18 = FUN_00484e88(*(undefined4 *)puVar1);
    local_18 = local_18 - local_8[0x13];
  }
  iVar2 = FUN_00484e94(*(undefined4 *)puVar1);
  if (iVar2 < local_8[0x12] + local_1c) {
    local_1c = FUN_00484e94(*(undefined4 *)puVar1);
    local_1c = local_1c - local_8[0x12];
  }
  iVar2 = FUN_00484e7c(*(undefined4 *)puVar1);
  if (local_1c < iVar2) {
    local_1c = FUN_00484e7c(*(undefined4 *)puVar1);
  }
  iVar2 = FUN_00484e70(*(undefined4 *)puVar1);
  if (local_10 < iVar2) {
    local_10 = FUN_00484e70(*(undefined4 *)puVar1);
  }
  uFlags = 0x10;
  iVar2 = local_8[0x13];
  cx = local_8[0x12];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_1c;
  Y = local_18;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  SetWindowPos(pHVar3,hWndInsertAfter,X,Y,cx,iVar2,uFlags);
  DVar4 = GetTickCount();
  if ((((0xfa < DVar4 - local_8[0x85]) && (iVar2 = FUN_00404ba4(param_3), iVar2 < 100)) &&
      (DAT_00662f98 != (code *)0x0)) && (SystemParametersInfoA(0x1016,0,&local_c,0), local_c != 0))
  {
    SystemParametersInfoA(0x1018,0,&local_c,0);
    if (local_c == 0) {
      FUN_004713f0(DAT_0066cb54,local_24);
    }
    FUN_0046cae0(local_8);
    (*DAT_00662f98)();
  }
  FUN_0046a134(local_8,*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x30));
  iVar2 = 4;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  ShowWindow(pHVar3,iVar2);
  (**(code **)(*local_8 + 0x7c))();
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0046e338;
  puStack_38 = (undefined1 *)0x46e31d;
  DVar4 = GetTickCount();
  local_8[0x85] = DVar4;
  *(undefined1 *)(local_8 + 0x84) = 0;
  return;
}

