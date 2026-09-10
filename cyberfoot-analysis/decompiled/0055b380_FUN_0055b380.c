// Address: 0055b380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055b380(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x308) != 0) &&
     (iVar2 = FUN_0041edb0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xbc)), -1 < iVar2 + -1)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_0055cec0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0xbc),iVar4);
      cVar1 = FUN_0047e450(*(undefined2 *)(param_2 + 4),*(undefined4 *)(iVar3 + 0x30));
      if (cVar1 != '\0') {
        iVar2 = *(int *)(param_1 + 0x308);
        iVar4 = FUN_0055cec0(*(undefined4 *)(iVar2 + 0xbc),iVar4);
        FUN_005598e4(iVar2,*(undefined4 *)(iVar4 + 0x34));
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0046be84(param_1,param_2);
  return;
}

