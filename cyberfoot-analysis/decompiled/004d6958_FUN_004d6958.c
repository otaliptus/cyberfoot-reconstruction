// Address: 004d6958
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004d6958(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = DAT_0067ae80;
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 0x1c) & 0x10) != 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

