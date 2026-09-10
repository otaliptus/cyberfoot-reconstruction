// Address: 004a9f58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9f58(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    FUN_004a9fec(param_1);
  }
  else {
    cVar1 = FUN_00403c10(param_2,PTR_LAB_004a5420);
    if (cVar1 == '\0') {
      cVar1 = FUN_00403c10(param_2,PTR_PTR_00429378);
      if (cVar1 == '\0') {
        FUN_0041e66c(param_1,param_2);
      }
      else {
        piVar3 = (int *)FUN_00403c34(param_2,PTR_PTR_00429378);
        FUN_00430458(piVar3);
        uVar2 = FUN_00429e64();
        uVar4 = (**(code **)(*piVar3 + 0x28))();
        uVar5 = (**(code **)(*piVar3 + 100))();
        FUN_004ab528(param_1,uVar5,uVar4,uVar2);
      }
    }
    else {
      uVar2 = FUN_00403c34(param_2,PTR_LAB_004a5420);
      FUN_004ab6b4(param_1,uVar2);
    }
  }
  return;
}

