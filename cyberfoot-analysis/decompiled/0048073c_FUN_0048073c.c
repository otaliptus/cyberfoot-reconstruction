// Address: 0048073c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048073c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004618b0);
  if (cVar1 == '\0') {
    iVar2 = FUN_00469730(param_1);
    local_14 = -1;
    iVar3 = FUN_0042747c(param_1);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        FUN_00427450(param_1,iVar4);
        cVar1 = FUN_00403c80();
        if ((cVar1 == '\0') && (local_14 = local_14 + 1, local_14 == param_3 - iVar2)) {
          FUN_0042748c(param_2,iVar4);
          return;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    FUN_0046d0cc(param_1,param_2,param_3);
  }
  return;
}

