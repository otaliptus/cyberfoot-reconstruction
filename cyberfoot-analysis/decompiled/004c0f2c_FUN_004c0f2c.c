// Address: 004c0f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004c0f2c(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00404ba4(param_1,param_2,param_3,param_3);
  iVar3 = FUN_004c0ed8(param_1,uVar2);
  if (iVar3 < param_2) {
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    iVar3 = FUN_00404ba4(param_1);
    if (0 < iVar3) {
      iVar5 = 1;
      do {
        iVar4 = iVar4 + 1;
        cVar1 = FUN_004c09bc(param_1,iVar5);
        if ((cVar1 != '\x03') && (param_2 = param_2 + -1, param_2 < 0)) {
          return iVar4;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return iVar4;
}

