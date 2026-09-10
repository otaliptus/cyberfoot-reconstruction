// Address: 00473d0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473d0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x473d27;
  uVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_24 = &LAB_00473dbb;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x473d44;
  puStack_20 = &stack0xfffffffc;
  uVar3 = FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_30 = &LAB_00473d9e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00473a04(param_1);
  hbmMask = (HBITMAP)FUN_00473be0(param_1,param_3,uVar3);
  hbmImage = (HBITMAP)FUN_00473be0(param_1,param_2,uVar2);
  ImageList_Add(*(HIMAGELIST *)(param_1 + 0x3c),hbmImage,hbmMask);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00473da5;
  puStack_30 = (undefined1 *)0x473d9d;
  FUN_00403a84(uVar3,uStack_34,puVar1);
  return;
}

