// Address: 00463a54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00463a54(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2[1];
  iVar1 = param_2[3];
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 < *param_2) || (param_2[2] < iVar3)) {
    iVar3 = FUN_00463a30(*param_2 - iVar3,param_2[2] - iVar3);
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 < iVar4) || (iVar1 < iVar2)) {
    iVar4 = FUN_00463a30(iVar4 - iVar2,iVar1 - iVar2);
  }
  else {
    iVar4 = 0;
  }
  if ((iVar3 != 0) || (iVar4 != 0)) {
    OffsetRect((LPRECT)(param_1 + 0x44),-iVar3,-iVar4);
  }
  return;
}

