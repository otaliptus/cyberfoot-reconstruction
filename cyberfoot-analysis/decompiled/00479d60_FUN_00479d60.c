// Address: 00479d60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00479d60(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x3b);
  if ((*(byte *)(param_1 + 0x3b) == 2) && (*(int *)(param_1 + 100) != 0)) {
    uVar1 = FUN_00479d60(*(undefined4 *)(param_1 + 100));
    uVar1 = (uint)(byte)(&DAT_00663100)[uVar1 & 0x7f];
  }
  return (&DAT_00663104)[uVar1 & 0x7f];
}

