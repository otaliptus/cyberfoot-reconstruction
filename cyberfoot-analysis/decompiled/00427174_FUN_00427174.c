// Address: 00427174
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427174(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_3 == '\x01') && (param_2 != 0)) {
    FUN_00427158(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8) + -1;
    while (-1 < iVar3) {
      piVar2 = (int *)FUN_0041e01c(*(undefined4 *)(param_1 + 0x10),iVar3);
      (**(code **)(*piVar2 + 0x10))(piVar2,param_2,param_3);
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8);
      if (iVar1 <= iVar3) {
        iVar3 = iVar1 + -1;
      }
    }
  }
  return;
}

