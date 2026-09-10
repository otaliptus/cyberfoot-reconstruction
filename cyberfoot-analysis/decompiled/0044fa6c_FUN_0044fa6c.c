// Address: 0044fa6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044fa6c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_004739fc(param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00473bd0(param_2);
    }
    if (param_2 == *(int *)(param_1 + 0x218)) {
      FUN_0044fa44(param_1,uVar2,0);
    }
    else if (param_2 == *(int *)(param_1 + 0x21c)) {
      FUN_0044fa44(param_1,uVar2,1);
    }
    else if (param_2 == *(int *)(param_1 + 0x220)) {
      FUN_0044fa44(param_1,uVar2,2);
    }
  }
  return;
}

