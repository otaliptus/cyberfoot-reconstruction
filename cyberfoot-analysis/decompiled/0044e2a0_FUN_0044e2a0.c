// Address: 0044e2a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e2a0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar2 = FUN_0044e25c(param_1);
  if ((char)param_2 != cVar2) {
    *(char *)(param_1 + 0x2a) = (char)param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    if (*(char *)(iVar1 + 0x244) == '\0') {
      cVar2 = FUN_0046cde4(iVar1);
      if (cVar2 != '\0') {
        uVar3 = FUN_0044e73c(param_1);
        uVar4 = FUN_0046cae0(iVar1);
        FUN_00432ed8(uVar4,uVar3,param_2);
      }
    }
  }
  return;
}

