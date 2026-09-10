// Address: 00640da8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_PopupMenu7Popup(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0066ac78;
  if (PTR_DAT_0066ac78[0x10e] == '\0') {
    FUN_00478b94(*(undefined4 *)(param_1 + 0x4c8),0);
  }
  if (puVar1[0x171] == '\0') {
    FUN_00478b94(*(undefined4 *)(param_1 + 0x4c0),0);
  }
  if ((*(int *)(puVar1 + 0x194) < 4) && (*(int *)(puVar1 + 0x1a0) < 4)) {
    FUN_00478a78(*(undefined4 *)(param_1 + 0x4c0),0);
  }
  if ((*(int *)(puVar1 + 0xc0) == 1) || (puVar1[0x172] == '\0')) {
    FUN_00478a78(*(undefined4 *)(param_1 + 0x4d0),0);
  }
  return;
}

