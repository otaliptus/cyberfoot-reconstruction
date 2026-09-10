// Address: 0046ee90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046ee90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0046e998(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0046e920(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0046e9cc(param_1);
      return uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x20);
}

