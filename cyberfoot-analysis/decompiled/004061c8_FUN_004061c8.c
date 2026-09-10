// Address: 004061c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004061c8(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(iVar3 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar2 = *(undefined4 **)(*(byte *)(param_2 + 1) + 6 + param_2);
      if ((puVar2 != (undefined4 *)0x0) && (*(int *)(iVar3 + -4) != 0)) {
        iVar3 = FUN_00405744(iVar3,*puVar2);
      }
      FUN_0040281c(iVar3 + -8);
    }
  }
  return param_1;
}

