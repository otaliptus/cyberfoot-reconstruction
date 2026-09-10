// Address: 004ea9b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ea9b8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  RECT *pRVar4;
  BOOL bErase;
  RECT local_18;
  
  pRVar4 = &local_18;
  iVar3 = (param_2 - *(int *)(*(int *)(param_1 + 0x244) + 0x2c)) * *(int *)(param_1 + 0x284) + 2;
  iVar1 = *(int *)(param_1 + 0x284) + iVar3;
  iVar2 = FUN_004e9234(param_1,param_2,param_3,&local_18,iVar1);
  FUN_0040709c(2,iVar3,iVar2 + 2,pRVar4,iVar1);
  pRVar4 = &local_18;
  bErase = 0;
  hWnd = (HWND)FUN_0046cae0(param_1);
  InvalidateRect(hWnd,pRVar4,bErase);
  return;
}

