// Address: 0051c380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c380(int param_1)

{
  if (0 < *(int *)(param_1 + 0x120)) {
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x120) + -1;
    FUN_00420b38(*(undefined4 *)(param_1 + 0x10),param_1 + 0x20,*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  return;
}

