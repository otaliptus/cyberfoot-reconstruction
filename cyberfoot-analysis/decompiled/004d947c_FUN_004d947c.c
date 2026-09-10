// Address: 004d947c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d947c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntActnList.pas"
                 ,0x177);
  }
  iVar4 = 0;
  cVar1 = FUN_0040ff2c(param_1,&LAB_004d9584);
  if (cVar1 != '\0') {
    iVar2 = FUN_0042747c(param_1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_00427450(param_1,iVar5);
        cVar1 = FUN_00403c10(uVar3,PTR_PTR_004d910c);
        if (cVar1 != '\0') {
          iVar4 = FUN_00427450(param_1,iVar5);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (iVar4 == 0) {
      iVar4 = FUN_00426e58(PTR_PTR_004d910c,1,param_1);
      *(int *)(iVar4 + 0x30) = param_1;
    }
  }
  return iVar4;
}

