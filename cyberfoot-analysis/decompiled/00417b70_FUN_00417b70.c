// Address: 00417b70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00417b70(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00417ae8(param_2);
  FUN_004060a8(param_3,PTR_DAT_0040129c,1,iVar1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (param_1 != (undefined4 *)0x0) {
        iVar2 = FUN_00417b00(param_1);
        *(int *)(*param_3 + iVar3 * 4) = iVar2 + -1;
        param_1 = (undefined4 *)*param_1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

