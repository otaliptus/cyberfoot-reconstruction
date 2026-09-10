// Address: 00495858
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00495858(int param_1,int param_2,short *param_3,int param_4,int *param_5)

{
  *(undefined1 *)(*param_5 + param_4) =
       *(undefined1 *)
        (*(int *)(param_1 + 0x144) + 0x80 +
        ((int)*param_3 * **(int **)(param_2 + 0x50) + 4 >> 3 & 0x3ffU));
  return;
}

