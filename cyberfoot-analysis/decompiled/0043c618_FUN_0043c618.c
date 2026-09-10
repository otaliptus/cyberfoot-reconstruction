// Address: 0043c618
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c618(int *param_1,uint param_2,undefined4 param_3,SIZE_T param_4)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x43c633;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_0043c6ea;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_30 = 0x43c64c;
  puStack_1c = &stack0xfffffffc;
  hMem = GlobalAlloc(0x2002,param_4);
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pvVar1 = GlobalLock(hMem);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00402a04(param_3,pvVar1,param_4);
  FUN_0043c554(param_1);
  SetClipboardData(param_2 & 0xffff,hMem);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x43c6aa;
  GlobalUnlock(hMem);
  return;
}

