// Address: 00479d8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00479d8c(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x3c);
  if ((*(byte *)(param_1 + 0x3c) == 2) && (*(int *)(param_1 + 100) != 0)) {
    uVar1 = FUN_00479d8c(*(undefined4 *)(param_1 + 100));
    uVar1 = (uint)(byte)(&DAT_00663100)[uVar1 & 0x7f];
  }
  return (&DAT_00663104)[uVar1 & 0x7f];
}

