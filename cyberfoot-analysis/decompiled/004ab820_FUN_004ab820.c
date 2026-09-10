// Address: 004ab820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab820(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(char *)(param_1 + 0x13d + iVar1) = (char)iVar1;
    *(char *)(param_1 + 0x28 + iVar1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  return;
}

