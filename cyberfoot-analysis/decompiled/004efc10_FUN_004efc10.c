// Address: 004efc10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004efc10(int *param_1,undefined1 param_2)

{
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x86) = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

