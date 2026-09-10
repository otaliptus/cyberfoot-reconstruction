// Address: 0046c8f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046c8f8(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x30);
  } while (param_1 != 0);
  iVar1 = *(int *)(iVar1 + 400);
  if (iVar1 == 0) {
    iVar1 = FUN_0046cae0();
  }
  return iVar1;
}

