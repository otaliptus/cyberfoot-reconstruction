// Address: 00456d20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00456d20(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 8 + (uVar1 & 0x7f) * 4) != 0) {
      (**(code **)PTR_DAT_0066b20c)();
      *(undefined4 *)(param_1 + 8 + (uVar1 & 0x7f) * 4) = 0;
    }
    uVar1 = uVar1 + 1;
  } while ((char)uVar1 != '\x18');
  return;
}

