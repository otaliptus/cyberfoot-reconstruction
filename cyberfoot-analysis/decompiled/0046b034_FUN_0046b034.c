// Address: 0046b034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046b034(int *param_1,int param_2)

{
  int iVar1;
  HCURSOR hCursor;
  HWND pHVar2;
  HWND pHVar3;
  short sVar4;
  undefined4 uVar5;
  tagPOINT local_1c;
  undefined1 local_14 [8];
  
  if (*(int *)(param_2 + 4) == param_1[0x60]) {
    if (*(short *)(param_2 + 8) == -2) {
      if ((*(short *)(param_2 + 10) == 0x201) && (*(int *)(*(int *)PTR_DAT_0066b3ac + 0x30) != 0)) {
        pHVar2 = GetLastActivePopup(*(HWND *)(*(int *)PTR_DAT_0066b3ac + 0x30));
        pHVar3 = GetForegroundWindow();
        if (pHVar2 != pHVar3) {
          FUN_00486fcc(*(undefined4 *)PTR_DAT_0066b3ac);
          return;
        }
      }
    }
    else if (*(short *)(param_2 + 8) == 1) {
      sVar4 = *(short *)(*(int *)PTR_DAT_0066b760 + 0x44);
      if (sVar4 == 0) {
        GetCursorPos(&local_1c);
        uVar5 = 0;
        FUN_00465d4c(param_1,&local_1c,local_14,0);
        iVar1 = FUN_0046a2ec(param_1,local_14,0,uVar5);
        if (iVar1 != 0) {
          if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
            sVar4 = *(short *)(iVar1 + 0x78);
          }
          else {
            sVar4 = -2;
          }
        }
        if (sVar4 == 0) {
          if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
            sVar4 = (short)param_1[0x1e];
          }
          else {
            sVar4 = -2;
          }
        }
      }
      if (sVar4 != 0) {
        hCursor = (HCURSOR)FUN_004853a4(*(undefined4 *)PTR_DAT_0066b760,(int)sVar4);
        SetCursor(hCursor);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}

