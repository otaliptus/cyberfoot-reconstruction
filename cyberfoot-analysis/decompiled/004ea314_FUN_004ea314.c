// Address: 004ea314
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_004ea314(int *param_1,int param_2,int param_3)

{
  HWND hWnd;
  int Y;
  byte bVar1;
  int aiStackY_1830 [1514];
  HWND hWndInsertAfter;
  int cx;
  int cy;
  UINT uFlags;
  undefined4 uStack_6c;
  int iStack_60;
  int local_5c;
  int iStack_54;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int aiStack_2c [7];
  
  bVar1 = 0;
  iStack_60 = param_1[0x13] + param_3;
  local_5c = param_2;
  FUN_0040709c(param_2,param_3,param_2 + param_1[0x12],&local_30);
  iStack_60 = 2;
  uStack_6c = (**(code **)PTR_DAT_0066acb0)();
  iStack_60 = 0x28;
  (**(code **)PTR_DAT_0066afbc)();
  local_30 = iStack_54;
  *(undefined4 *)((int)aiStack_2c + (uint)bVar1 * 0xfffffff8) =
       *(undefined4 *)(&stack0xffffffb0 + (uint)bVar1 * -8);
  Y = param_3;
  *(undefined4 *)((int)aiStack_2c + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4) =
       *(undefined4 *)(&stack0xffffffb0 + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4);
  ((undefined4 *)((int)aiStack_2c + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4))
  [(uint)bVar1 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffb0 + ((uint)bVar1 * -2 + (uint)bVar1 * -2 + 1) * 4) +
        ((uint)bVar1 * -2 + 1) * 4);
  if (iStack_40 < local_30) {
    param_2 = local_30;
  }
  if (aiStack_2c[1] < iStack_38) {
    param_2 = aiStack_2c[1] - param_1[0x12];
  }
  if (iStack_3c < aiStack_2c[0]) {
    Y = aiStack_2c[0];
  }
  if (aiStack_2c[2] < iStack_34) {
    Y = aiStack_2c[2] - param_1[0x13];
  }
  if ((Y < param_3) && (*(int *)(param_1[0x94] + 0x4c) + param_3 < param_1[0x13] + Y)) {
    Y = (param_3 - param_1[0x13]) - *(int *)(param_1[0x94] + 0x4c);
  }
  uFlags = 0x40;
  cy = param_1[0x13];
  cx = param_1[0x12];
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,param_2,Y,cx,cy,uFlags);
  *(undefined1 *)(param_1 + 0x95) = 0;
  FUN_00466128(param_1,1);
  (**(code **)(*param_1 + 0x80))();
  FUN_004633d8(param_1);
  return;
}

