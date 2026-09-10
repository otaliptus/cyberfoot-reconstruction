// Address: 006410f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_PopupMenu3Popup(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00651f8c();
  if (cVar1 != '\0') {
    uVar2 = FUN_00478b5c(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x34),2);
    FUN_00478a78(uVar2,1);
    return;
  }
  uVar2 = FUN_00478b5c(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x34),2);
  FUN_00478a78(uVar2,0);
  return;
}

