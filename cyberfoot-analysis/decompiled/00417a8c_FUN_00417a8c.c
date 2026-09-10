// Address: 00417a8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00417a8c(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (-1 < param_3) goto LAB_00417aa3;
  do {
    param_1 = (undefined4 *)*param_1;
LAB_00417aa3:
    iVar3 = param_4 + (uint)*(byte *)(param_4 + 1);
    piVar1 = *(int **)(iVar3 + 6);
    param_4 = 0;
    if (piVar1 != (int *)0x0) {
      param_4 = *piVar1;
    }
    param_1 = (undefined4 *)((int)param_1 + *(int *)(param_2 + iVar2 * 4) * *(int *)(iVar3 + 2));
    iVar2 = iVar2 + 1;
  } while (iVar2 <= param_3);
  return param_1;
}

