// Address: 0045238c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045238c(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  LPARAM lParam;
  HWND hWnd;
  undefined2 extraout_var_00;
  UINT Msg;
  WPARAM wParam;
  tagPOINT tStack_24;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  
  (**(code **)(*param_1 + 0xc4))();
  uVar2 = FUN_0047e374(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)));
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x9b] = -1;
  FUN_0046789c(param_1,param_2);
  if (((((*(char *)((int)param_1 + 0x5d) == '\x01') && ((char)param_1[0x8a] != '\0')) &&
       ((uVar2 & 1) == 0)) && (((uVar2 & 4) == 0 && ((char)param_1[0x8c] == '\0')))) &&
     ((iVar3 = FUN_00452178(param_1,(int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10)),
      iVar3 != 0 && (cVar1 = FUN_0044e3e8(iVar3,3), cVar1 != '\0')))) {
    FUN_004668c0(param_1,0,0xffffffff);
    return;
  }
  if ((char)param_1[0x8c] == '\0') {
    if ((((*(char *)((int)param_1 + 0x5d) == '\x01') &&
         (((char)param_1[0x8a] == '\0' || (((uVar2 & 1) == 0 && ((uVar2 & 4) == 0)))))) &&
        (iVar3 = FUN_00452178(param_1,(int)*(short *)(param_2 + 8),(int)*(short *)(param_2 + 10)),
        iVar3 != 0)) && (cVar1 = FUN_0044e3e8(iVar3,3), cVar1 != '\0')) {
      FUN_004668c0(param_1,0,0xffffffff);
    }
  }
  else {
    GetCursorPos(&tStack_24);
    FUN_00465d4c(param_1,&tStack_24,auStack_18);
    uStack_1c = FUN_004080e0(auStack_18);
    cVar1 = FUN_00466988(param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_00408014(uStack_1c & 0xffff,CONCAT22(extraout_var_00,uStack_1c._2_2_));
      FUN_004673cc(param_1,0x202,0,uVar4);
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      lParam = FUN_00408014(uStack_1c & 0xffff,CONCAT22(extraout_var_00,uStack_1c._2_2_));
      wParam = 0;
      Msg = 0x202;
      hWnd = GetCapture();
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}

