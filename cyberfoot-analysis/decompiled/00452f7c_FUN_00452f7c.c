// Address: 00452f7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00452f7c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_0044e8c4(*(undefined4 *)(param_1 + 0x22c));
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar5);
      cVar1 = FUN_0044e3e8(uVar3,3);
      if (cVar1 != '\0') {
        iVar4 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar5);
        uVar3 = *(undefined4 *)(iVar4 + 0xc);
        iVar4 = FUN_0044e8f4(*(undefined4 *)(param_1 + 0x22c),iVar5);
        (**(code **)(*param_2 + 0xd4))(param_2,*(undefined4 *)(iVar4 + 0x24),uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

