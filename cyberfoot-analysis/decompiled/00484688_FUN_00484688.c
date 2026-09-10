// Address: 00484688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00484688(int param_1,int param_2)

{
  if ((((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (DAT_006631e4 != 0)) &&
     ((*(char *)(param_1 + 0x2e0) != '\0' || (*(char *)(param_1 + 0x2e8) != '\0')))) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80000;
  }
  return;
}

