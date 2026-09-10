// Address: 0045c488
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c488(int param_1)

{
  if ((*(char *)(param_1 + 0x20f) != '\0') && (*(char *)(param_1 + 0x20c) == '\x01')) {
    *(uint *)(param_1 + 0x50) = DAT_0045c4c0 | *(uint *)(param_1 + 0x50);
    FUN_0045c4c4(param_1);
    return;
  }
  *(uint *)(param_1 + 0x50) = ~DAT_0045c4c0 & *(uint *)(param_1 + 0x50);
  return;
}

