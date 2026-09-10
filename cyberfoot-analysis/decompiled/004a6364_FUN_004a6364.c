// Address: 004a6364
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6364(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (param_2 != 0)) {
    uVar1 = FUN_004027fc(param_2 << 2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  else if (param_2 == 0) {
    FUN_0040281c();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    FUN_0040283c(param_1 + 0xc,param_2 << 2);
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

