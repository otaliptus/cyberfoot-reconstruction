// Address: 00420c64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420c64(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x1000;
  puStack_18 = (undefined1 *)0x420c80;
  uVar2 = FUN_004213b8(PTR_PTR_0041c3e0,1,param_1);
  puStack_18 = &LAB_00420cb4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004233ec(uVar2,param_2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00420cbb;
  puStack_18 = (undefined1 *)0x420cb3;
  FUN_00403a84(uVar2,uStack_1c,puVar1);
  return;
}

