// Address: 0044e308
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_0044e308(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 in_ZF;
  undefined4 uVar5;
  
  cVar1 = FUN_00404cf0(param_2,*(undefined4 *)(param_1 + 0x24));
  if (!(bool)in_ZF) {
    FUN_00404928(param_1 + 0x24,param_2);
    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x244) == '\0') {
      uVar5 = 0xffffffff;
      uVar2 = FUN_0044e73c(param_1);
      uVar3 = FUN_0044e248(param_1);
      FUN_00432f04(uVar3,uVar2,0,uVar5);
    }
    FUN_0044e21c(param_1);
    cVar1 = FUN_00450588();
    if (cVar1 != '\0') {
      iVar4 = FUN_0044e21c(param_1);
      iVar4 = FUN_0041edb0(*(undefined4 *)(iVar4 + 0x23c));
      if (0 < iVar4) {
        uVar2 = FUN_0044e21c(param_1);
        iVar4 = FUN_00451f90(uVar2,0);
        if (0x7fffffff < *(uint *)(iVar4 + 0x24)) {
          FUN_0044e21c(param_1);
          FUN_004521fc();
        }
      }
    }
    iVar4 = FUN_0044e21c(param_1);
    cVar1 = *(char *)(iVar4 + 0x229) + -4;
    if ((byte)(*(char *)(iVar4 + 0x229) - 2U) < 2) {
      FUN_0044e21c(param_1);
      cVar1 = FUN_00451d34();
    }
  }
  return cVar1;
}

