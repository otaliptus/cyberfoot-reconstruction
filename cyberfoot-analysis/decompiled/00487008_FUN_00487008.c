// Address: 00487008
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487008(int param_1,undefined4 param_2)

{
  int iVar1;
  CHAR local_108 [256];
  
  if (*(char *)(param_1 + 0xa4) == '\0') {
    FUN_00404928(param_2,*(undefined4 *)(param_1 + 0x8c));
  }
  else {
    iVar1 = GetWindowTextA(*(HWND *)(param_1 + 0x30),local_108,0x100);
    FUN_004049c4(param_2,local_108,iVar1);
  }
  return;
}

