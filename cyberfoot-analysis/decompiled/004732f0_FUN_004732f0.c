// Address: 004732f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004732f0(int *param_1,short param_2)

{
  int *piVar1;
  undefined2 extraout_var;
  int iVar2;
  int iVar3;
  
  if (param_2 != (short)param_1[0x21]) {
    iVar2 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00403c34(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                     PTR_PTR_00472568);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x70))(piVar1,CONCAT22(extraout_var,param_2));
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(short *)(param_1 + 0x21) = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

