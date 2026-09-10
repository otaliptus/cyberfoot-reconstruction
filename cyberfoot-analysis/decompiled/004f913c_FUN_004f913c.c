// Address: 004f913c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f913c(undefined4 param_1,double *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  
  iVar2 = (**(code **)(**(int **)(param_4 + -4) + 0x11c))();
  iVar2 = iVar2 + -1;
  if (0 < iVar2) {
    iVar4 = 1;
    do {
      fVar5 = in_ST0;
      if (*(char *)(param_4 + -5) == '\0') {
LAB_004f9182:
        cVar1 = FUN_00514640(*(undefined4 *)(param_4 + -4),iVar4);
        in_ST0 = fVar5;
        if (cVar1 != '\0') {
          piVar3 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                                    (*(int **)(param_4 + -4),param_1,iVar4);
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          (**(code **)(*piVar3 + 0x10))();
          *param_2 = (double)(fVar5 + (float10)*param_2);
          in_ST7 = in_ST6;
        }
      }
      else {
        cVar1 = (**(code **)(**(int **)(param_4 + -4) + 300))(*(int **)(param_4 + -4),iVar4);
        fVar5 = in_ST0;
        if (cVar1 != '\0') goto LAB_004f9182;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

