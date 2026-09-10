// Address: 005842a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005842a4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 600)) {
    *(char *)(param_1 + 600) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x224) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x224) = 2;
    }
    FUN_00584438(param_1);
    FUN_00466754(param_1);
  }
  return;
}

