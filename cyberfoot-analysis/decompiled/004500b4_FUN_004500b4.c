// Address: 004500b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004500b4(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != *(char *)(param_1 + 0x274)) {
    *(char *)(param_1 + 0x274) = param_2;
    FUN_0044fea8(param_1);
    if (*(char *)(param_1 + 0x274) == '\0') {
      iVar1 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
      if (-1 < iVar1 + -1) {
        iVar6 = 0;
        do {
          FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar6);
          uVar2 = FUN_0044e73c();
          uVar3 = FUN_0046cae0(param_1);
          iVar4 = FUN_00432eb8(uVar3,uVar2);
          iVar5 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar6);
          *(bool *)(iVar5 + 0x2a) = iVar4 != 0;
          iVar6 = iVar6 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      FUN_0044ffa4(param_1);
    }
  }
  return;
}

