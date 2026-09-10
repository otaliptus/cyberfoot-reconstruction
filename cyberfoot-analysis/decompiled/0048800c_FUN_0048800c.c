// Address: 0048800c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048800c(int param_1,undefined4 param_2,int param_3)

{
  POINT pt;
  int iVar1;
  BOOL BVar2;
  int local_30;
  char local_2c;
  tagPOINT local_2b;
  LONG local_20;
  LONG local_1c;
  undefined1 local_18 [8];
  
  FUN_004080cc(*(undefined4 *)(param_3 + 8),local_18);
  FUN_00465d20(param_2,local_18,&local_20);
  FUN_00464ab4(&local_20,1);
  iVar1 = thunk_FUN_00485bfd();
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x99) == '\0')) {
    FUN_00488198(param_1);
  }
  else {
    if (iVar1 == *(int *)(param_1 + 0x60)) {
      FUN_004080cc(*(undefined4 *)(param_3 + 8),local_18);
      FUN_00465d20(param_2,local_18,&local_20);
      pt.y = local_1c;
      pt.x = local_20;
      BVar2 = PtInRect((RECT *)(param_1 + 100),pt);
      if (BVar2 != 0) {
        return;
      }
    }
    local_2c = *(char *)(param_1 + 0x58);
    if (local_2c == '\0') {
      local_30 = *(int *)(param_1 + 0x78);
    }
    else {
      local_30 = *(int *)(param_1 + 0x80);
    }
    FUN_004673cc(iVar1,0xb041,local_2c,&local_30);
    if ((local_2c == '\0') || (local_30 != 0)) {
      FUN_00488198(param_1);
      *(char *)(param_1 + 0x58) = local_2c;
      *(int *)(param_1 + 0x60) = iVar1;
      FUN_00487fa0(param_1,local_30,0);
    }
    else {
      *(char *)(param_1 + 0x58) = local_2c;
      *(int *)(param_1 + 0x60) = iVar1;
      GetCursorPos(&local_2b);
      FUN_00488430(param_1,&local_2b);
    }
  }
  return;
}

