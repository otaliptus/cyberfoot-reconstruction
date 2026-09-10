// Address: 0047fea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047fea0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2d2) != 0) {
    puStack_1c = &LAB_0047fee1;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
    *in_FS_OFFSET = uStack_20;
    param_3 = puStack_18;
  }
  if ((*(byte *)(param_1 + 0x2f4) & 2) != 0) {
    puStack_18 = (undefined1 *)0x47ff16;
    FUN_00480858(param_1,1,param_3);
  }
  return;
}

