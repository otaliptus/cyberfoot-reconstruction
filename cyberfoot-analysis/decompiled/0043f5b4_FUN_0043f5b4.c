// Address: 0043f5b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f5b4(int *param_1,char param_2)

{
  if (param_1[0x5a] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != (char)param_1[0x5c]) &&
     (((char)param_1[0x5c] == '\0' || (*(char *)((int)param_1 + 0x172) != '\0')))) {
    *(char *)(param_1 + 0x5c) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x182) = 0;
      (**(code **)(*param_1 + 0x80))();
    }
    else {
      if (*(char *)((int)param_1 + 0x182) == '\0') {
        (**(code **)(*param_1 + 0x7c))();
      }
      *(undefined1 *)((int)param_1 + 0x182) = 3;
    }
    if (param_2 != '\0') {
      FUN_0043f57c(param_1);
    }
  }
  return;
}

