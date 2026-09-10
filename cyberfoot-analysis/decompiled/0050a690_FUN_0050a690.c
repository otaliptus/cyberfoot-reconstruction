// Address: 0050a690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a690(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    cVar1 = FUN_0050b12c(*(int *)(param_1 + 0x38));
    if (cVar1 == '\0') {
      FUN_0050b3cc(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x88),param_2);
      FUN_0050abec(param_1,2,0xffffffff);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}

