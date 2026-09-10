// Address: 00412f6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00412f6c(short *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  sVar1 = *param_1;
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else if (sVar1 == 1) {
    if (DAT_00662450 != '\0') {
      puStack_18 = (undefined1 *)0x412fac;
      FUN_00411500(1,0x11);
    }
    uVar2 = 0;
  }
  else if (sVar1 == 0xb) {
    uVar2 = (uint)*(byte *)(param_1 + 4);
  }
  else if (sVar1 == 0x11) {
    uVar2 = (uint)*(byte *)(param_1 + 4);
  }
  else {
    puStack_1c = &LAB_00412fef;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    uVar2 = FUN_00412a6c(param_1);
    if (0xff < uVar2) {
      thunk_FUN_00402958();
    }
    *in_FS_OFFSET = uStack_20;
  }
  return uVar2;
}

