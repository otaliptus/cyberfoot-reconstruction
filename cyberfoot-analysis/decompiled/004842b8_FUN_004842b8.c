// Address: 004842b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004842b8(int param_1,int param_2)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(char *)(param_1 + 0x1a6) != '\0')) {
    cVar1 = FUN_0048420c(*(undefined4 *)(param_1 + 0x220));
    if ((cVar1 == '\0') &&
       ((cVar1 = FUN_0048420c(param_1), cVar1 == '\0' &&
        (cVar1 = FUN_0048423c(param_1), cVar1 == '\0')))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

