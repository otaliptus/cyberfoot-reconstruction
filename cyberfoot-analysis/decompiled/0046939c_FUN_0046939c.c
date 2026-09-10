// Address: 0046939c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046939c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x4693b3;
  iVar1 = FUN_00469730(param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x4693c7;
    iVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
    puStack_20 = (undefined1 *)0x4693d2;
    FUN_00469298(param_1);
    puStack_24 = &LAB_00469483;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_00469730(param_1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_004696f4(param_1,iVar5);
        if ((byte)(*(char *)(iVar3 + 0x5b) - 3U) < 2) {
          uVar4 = FUN_004696f4(param_1,iVar5);
          FUN_0041dec0(iVar1,uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00403c80(param_1);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_0046948a;
    while (0 < *(int *)(iVar1 + 8)) {
      puStack_24 = (undefined1 *)0x469443;
      iVar2 = FUN_0041e01c(iVar1,*(int *)(iVar1 + 8) + -1);
      if (*(char *)(iVar2 + 0x5b) == '\x03') {
        puStack_24 = (undefined1 *)0x469450;
        FUN_0046571c(iVar2,4);
      }
      else {
        puStack_24 = (undefined1 *)0x469459;
        FUN_0046571c(iVar2,3);
      }
      puStack_24 = (undefined1 *)0x469468;
      FUN_0041df0c(iVar1,*(int *)(iVar1 + 8) + -1);
    }
    puStack_24 = (undefined1 *)0x46947a;
    FUN_00403a84(iVar1);
    puStack_24 = (undefined1 *)0x469482;
    FUN_004692a0(param_1);
    return;
  }
  return;
}

