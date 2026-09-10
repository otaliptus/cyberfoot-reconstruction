// Address: 00490bd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00490bd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar5 = 0;
  piVar6 = (int *)(iVar1 + 0x20);
  do {
    if (*(int *)(param_1 + 0x78) <= iVar5) {
      return;
    }
    iVar3 = 0;
    iVar4 = 0;
    piVar2 = (int *)(iVar1 + 0x20);
    if (0 < iVar5) {
      do {
        if (*piVar6 == *piVar2) {
          iVar3 = piVar2[5];
          break;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < iVar5);
    }
    if (iVar3 == 0) {
      iVar3 = FUN_00490b30(param_1,*piVar6);
    }
    piVar6[5] = iVar3;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while( true );
}

