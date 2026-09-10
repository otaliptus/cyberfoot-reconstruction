// Address: 0044e3e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0044e3e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0:
    uVar4 = 4;
    break;
  case 1:
    uVar4 = 8;
    break;
  case 2:
    uVar4 = 1;
    break;
  case 3:
    uVar4 = 2;
    break;
  case 4:
    uVar4 = 0x20;
    break;
  default:
    uVar4 = 0;
  }
  uVar1 = FUN_0044e73c(param_1);
  uVar2 = FUN_0044e248(param_1);
  uVar3 = FUN_00432ea8(uVar2,uVar1,uVar4);
  return (uVar3 & uVar4) != 0;
}

