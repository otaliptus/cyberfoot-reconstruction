// Address: 00437570
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00437570(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;
  
  puStack_1c = (undefined1 *)0x437584;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_20 = &LAB_0043769e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = (undefined1 *)0x437599;
  puStack_1c = &stack0xfffffffc;
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 != 0) {
    puStack_2c = &LAB_0043766a;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    iVar3 = FUN_00404ba4(local_8);
    uStack_3c = 0x4375c3;
    hMem = GlobalAlloc(0x2002,iVar3 + 1);
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    pvVar4 = GlobalLock(hMem);
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    iVar3 = FUN_00404ba4(local_8);
    iVar3 = iVar3 + 1;
    uVar5 = FUN_00404da4(local_8);
    FUN_00402a04(uVar5,pvVar4,iVar3);
    EmptyClipboard();
    SetClipboardData(1,hMem);
    *in_FS_OFFSET = uStack_48;
    uStack_48 = 0x43762d;
    GlobalUnlock(hMem);
    return;
  }
  FUN_0040e42c(PTR_DAT_00408738,1,PTR_PTR_0066ada0);
  FUN_00404250();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004376a5;
  puStack_20 = (undefined1 *)0x43769d;
  FUN_004048d4(&local_8,uStack_24,puVar1);
  return;
}

