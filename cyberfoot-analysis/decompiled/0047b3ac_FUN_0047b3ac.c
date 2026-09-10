// Address: 0047b3ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b3ac(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_0066b7ac[0xd] != '\0') && (*(char *)(param_1 + 0x41) != '\0')) {
    iVar1 = FUN_00476150(param_1 + 0x58);
    if (iVar1 == 0) {
      FUN_0047aac0(param_1,*(undefined1 *)(*(int *)PTR_DAT_0066b3ac + 0x34));
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
    else {
      FUN_0047aac0(param_1,*(undefined1 *)(iVar1 + 0x5f));
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
  return;
}

