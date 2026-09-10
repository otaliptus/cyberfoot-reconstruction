// Address: 0047ff1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047ff1c(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2da) != 0) {
    puStack_1c = &LAB_0047ff5d;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2d8))(*(undefined4 *)(param_1 + 0x2dc),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

