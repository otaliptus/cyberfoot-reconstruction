// Address: 0043dd74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043dd74(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0041e5b0(*(undefined4 *)(param_1 + 0x80),param_2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    FUN_0041e584(*(undefined4 *)(param_1 + 0x80),param_2,0);
  }
  return;
}

