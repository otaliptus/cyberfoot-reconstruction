// Address: 00481f00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481f00(int param_1)

{
  LPARAM LVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LONG LVar6;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT UVar7;
  undefined4 uVar8;
  int cx;
  WPARAM WVar9;
  undefined4 uVar10;
  int cy;
  undefined4 uVar11;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0047f1b0(param_1);
  if (*PTR_DAT_0066b148 != '\0') {
    if (*(char *)(param_1 + 0x229) == '\x03') {
      LVar1 = 0;
      WVar9 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar7,WVar9,LVar1);
    }
    else {
      LVar1 = FUN_00482854(param_1);
      WVar9 = 1;
      UVar7 = 0x80;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SendMessageA(pHVar2,UVar7,WVar9,LVar1);
    }
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x22f) == '\x02') {
      local_c = 0xff00;
      local_10 = 0;
      if (*(int *)(param_1 + 600) != 0) {
        local_10 = FUN_004770e0(*(int *)(param_1 + 600));
      }
      uVar11 = 0x56330001;
      uVar10 = 0;
      uVar8 = 0;
      uVar3 = FUN_00465c0c(param_1);
      uVar4 = FUN_00465c50(param_1);
      uVar5 = FUN_0046cae0(param_1);
      uVar3 = FUN_00408118(0x200,"MDICLIENT",0,&local_10,DAT_0066c668,0,uVar5,uVar4,uVar3,uVar8,
                           uVar10,uVar11);
      *(undefined4 *)(param_1 + 0x254) = uVar3;
      uVar3 = FUN_00427ee8();
      *(undefined4 *)(param_1 + 0x278) = uVar3;
      LVar6 = GetWindowLongA(*(HWND *)(param_1 + 0x254),-4);
      *(LONG *)(param_1 + 0x274) = LVar6;
      SetWindowLongA(*(HWND *)(param_1 + 0x254),-4,*(LONG *)(param_1 + 0x278));
    }
    else if (*(char *)(param_1 + 0x22f) == '\x03') {
      UVar7 = 0x13;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0xffffffff;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,X,Y,cx,cy,UVar7);
    }
  }
  return;
}

