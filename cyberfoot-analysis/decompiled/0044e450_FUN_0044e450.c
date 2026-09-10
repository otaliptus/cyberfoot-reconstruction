// Address: 0044e450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_2) {
  case 0:
    uVar3 = 4;
    break;
  case 1:
    uVar3 = 8;
    break;
  case 2:
    uVar3 = 1;
    break;
  case 3:
    uVar3 = 2;
    break;
  case 4:
    uVar3 = 0x20;
    break;
  default:
    uVar3 = 0;
  }
  uVar4 = uVar3;
  if ((char)param_3 == '\0') {
    uVar4 = 0;
  }
  uVar1 = FUN_0044e73c(param_1,param_2,param_3,uVar3);
  uVar2 = FUN_0044e248(param_1);
  FUN_00432e78(uVar2,uVar1,uVar4,uVar3);
  return;
}

