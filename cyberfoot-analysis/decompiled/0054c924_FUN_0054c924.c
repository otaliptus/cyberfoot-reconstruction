// Address: 0054c924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c924(int *param_1,int param_2)

{
  HWND pHVar1;
  HBRUSH hbr;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagPAINTSTRUCT *ptVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  RECT local_60;
  tagPAINTSTRUCT local_50;
  int local_10;
  HDC local_c;
  int *local_8;
  
  puVar4 = &stack0xfffffffc;
  local_10 = param_2;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 0x299) != '\0') {
    local_c = *(HDC *)(param_2 + 4);
    if (local_c == (HDC)0x0) {
      ptVar3 = &local_50;
      pHVar1 = (HWND)FUN_0046cae0(param_1);
      local_c = BeginPaint(pHVar1,ptVar3);
    }
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff94;
    puVar5 = &stack0xfffffffc;
    if (*(char *)((int)local_8 + 0x276) != '\x01') {
      hbr = (HBRUSH)FUN_0042aba0(local_8[0x5c]);
      (**(code **)(*local_8 + 0x44))(local_8,&local_60);
      FillRect(local_c,&local_60,hbr);
      FUN_0054c884();
      puVar5 = puVar4;
    }
    (**(code **)(*local_8 + 0xb8))(local_8,local_c);
    *in_FS_OFFSET = uVar2;
    if (*(int *)(local_10 + 4) == 0) {
      ptVar3 = &local_50;
      pHVar1 = (HWND)FUN_0046cae0(local_8,uVar2,puVar5);
      EndPaint(pHVar1,ptVar3);
    }
    return;
  }
  FUN_0045eb80(param_1,param_2);
  return;
}

