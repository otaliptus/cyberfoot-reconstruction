// Address: 0047357c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047357c(int *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      sVar1 = (**(code **)(*param_1 + 0x18))(param_1,iVar3);
      if (param_2 == sVar1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

