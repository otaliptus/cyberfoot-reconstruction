// Address: 004865b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004865b0(int param_1,int *param_2)

{
  if ((*param_2 == DAT_0066cc00) || (*param_2 == 0x1a)) {
    if (*(char *)(param_1 + 0x59) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040f450();
    }
    if (*(char *)(param_1 + 0x5a) != '\0') {
      FUN_004854a4(DAT_0066cbf8);
    }
    if (*param_2 == DAT_0066cc00) {
      FUN_00485bb4(DAT_0066cbf8);
    }
  }
  return 0;
}

