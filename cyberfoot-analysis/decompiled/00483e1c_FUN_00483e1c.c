// Address: 00483e1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00483e1c(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  HWND pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  HWND local_20;
  undefined4 local_1c;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_24 = 0;
  puStack_34 = &LAB_004840e4;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_8 = param_1;
  FUN_00464a68();
  if (*(char *)((int)local_8 + 0x57) == '\0') {
    cVar2 = (**(code **)(*local_8 + 0x50))();
    if (((cVar2 != '\0') && ((*(byte *)(local_8 + 0xbd) & 8) == 0)) &&
       (*(char *)((int)local_8 + 0x22f) != '\x01')) goto LAB_00483e8d;
  }
  FUN_00406d44(PTR_PTR_0066b1a0,&local_24);
  FUN_0040e370(PTR_DAT_0041b6dc,1,local_24);
  FUN_00404250();
LAB_00483e8d:
  pHVar3 = GetCapture();
  if (pHVar3 != (HWND)0x0) {
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x1f;
    pHVar3 = GetCapture();
    puStack_4c = (undefined1 *)0x483ea7;
    SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  }
  ReleaseCapture();
  FUN_004864ac(DAT_0066cbf4);
  *in_FS_OFFSET = &stack0xffffffbc;
  *(byte *)(local_8 + 0xbd) = *(byte *)(local_8 + 0xbd) | 8;
  local_20 = GetActiveWindow();
  local_14 = DAT_006631ec;
  FUN_0041e098(*(undefined4 *)(DAT_0066cbf8 + 0x7c),0,*(undefined4 *)(DAT_0066cbf8 + 0x78));
  *(int **)(DAT_0066cbf8 + 0x78) = local_8;
  local_16 = *(undefined2 *)(DAT_0066cbf8 + 0x44);
  FUN_004853cc(DAT_0066cbf8,0);
  local_1c = *(undefined4 *)(DAT_0066cbf8 + 0x48);
  local_10 = FUN_0047e0e0(0);
  puStack_4c = &LAB_004840a5;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x483f44;
  FUN_00483d6c(local_8);
  puStack_58 = &LAB_00484004;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0xb000;
  puStack_54 = &stack0xfffffffc;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  local_8[0x93] = 0;
  do {
    FUN_00487360(DAT_0066cbf4);
    if (*(char *)(DAT_0066cbf4 + 0x9c) == '\0') {
      if (local_8[0x93] != 0) {
        FUN_00483ccc(local_8);
      }
    }
    else {
      local_8[0x93] = 2;
    }
    local_c = local_8[0x93];
  } while (local_c == 0);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0xb001;
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  pHVar3 = (HWND)FUN_0046cae0(local_8);
  pHVar4 = GetActiveWindow();
  puVar1 = puStack_54;
  if (pHVar3 != pHVar4) {
    local_20 = (HWND)0x0;
  }
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_0048400b;
  puStack_58 = (undefined1 *)0x484003;
  FUN_00483d64(local_8,uStack_5c,puVar1);
  return;
}

