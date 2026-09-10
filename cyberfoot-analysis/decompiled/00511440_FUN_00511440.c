// Address: 00511440
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00511440(int *param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  undefined4 uVar3;
  RECT *pRVar4;
  RECT *lpRect;
  BOOL bErase;
  RECT local_30;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  iVar1 = param_2;
  if (param_3 < param_2) {
    iVar1 = param_3;
    param_3 = param_2;
  }
  if ((char)param_1[0xaf] == '\0') {
    uVar3 = FUN_0050f5f8(param_1,iVar1);
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_3);
    iVar1 = FUN_0050f5f8(param_1,param_3);
    iVar2 = iVar2 + iVar1;
  }
  else if ((char)param_1[0xaf] == '\x01') {
    uVar3 = FUN_0050f73c(param_1);
    iVar2 = FUN_0050f73c(param_1,param_3);
    iVar2 = iVar2 + param_1[300];
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
  }
  pRVar4 = &local_30;
  lpRect = &local_30;
  FUN_0050f004(param_1,local_20);
  FUN_0040709c(0,uVar3,local_18,pRVar4,iVar2);
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}

