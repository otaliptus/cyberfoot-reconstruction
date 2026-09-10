// Address: 0050afc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050afc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041e078(*(undefined4 *)(param_1 + 0x3c),param_2);
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_0050b02c(param_1,iVar1);
      if (((param_2 != iVar2) &&
          (iVar2 = FUN_0050b02c(param_1,iVar1), *(char *)(iVar2 + 0x54) != '\0')) &&
         (iVar2 = FUN_0050b02c(param_1,iVar1), *(char *)(iVar2 + 0xa9) != '\0')) {
        iVar1 = FUN_0050b02c(param_1,iVar1);
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return param_2;
}

