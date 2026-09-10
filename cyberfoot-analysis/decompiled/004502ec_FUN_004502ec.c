// Address: 004502ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004502ec(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x268)) {
    *(int *)(param_1 + 0x268) = param_2;
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0046cae0(param_1);
      FUN_00432f34(uVar2,param_2);
    }
  }
  return;
}

