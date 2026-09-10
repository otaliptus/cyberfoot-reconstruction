// Address: 004f1bbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1bbc(int param_1,double *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004f2020(param_1);
  if (cVar1 != '\0') {
    if (*(double *)(param_1 + 600) < *param_2) {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 600);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0x25c);
    }
    if (*param_2 < *(double *)(param_1 + 0x260)) {
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x260);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0x264);
    }
  }
  return;
}

