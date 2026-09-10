// Address: 005c1af4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1af4(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  LPARAM lParam;
  LRESULT LVar5;
  undefined4 *in_FS_OFFSET;
  UINT UVar6;
  WPARAM WVar7;
  int *lParam_00;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_005c1bc6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pHVar3 = (HWND)FUN_0046cae0(param_1);
  BVar4 = IsWindowUnicode(pHVar3);
  if (BVar4 == 0) {
    FUN_0044c554(param_1,&local_10);
    FUN_004051d4(param_2,local_10);
  }
  else {
    lParam_00 = &local_c;
    WVar7 = 0;
    UVar6 = 0x434;
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    SendMessageW(pHVar3,UVar6,WVar7,(LPARAM)lParam_00);
    FUN_004055c4(param_2,(local_8 - local_c) + 1);
    lParam = FUN_00405250(*param_2);
    WVar7 = 0;
    UVar6 = 0x43e;
    pHVar3 = (HWND)FUN_0046cae0(param_1);
    LVar5 = SendMessageW(pHVar3,UVar6,WVar7,lParam);
    FUN_004055c4(param_2,LVar5);
  }
  cVar2 = FUN_005c1a78(param_1);
  if (cVar2 != '\x01') {
    FUN_004d35b4(*param_2,1,&local_14);
    FUN_0040502c(param_2,local_14);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c1bcd;
  puStack_24 = (undefined1 *)0x5c1bbd;
  FUN_00404ff0(&local_14,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5c1bc5;
  FUN_004048d4(&local_10);
  return;
}

