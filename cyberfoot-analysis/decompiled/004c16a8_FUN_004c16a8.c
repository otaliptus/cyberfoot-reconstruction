// Address: 004c16a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c16a8(int param_1,byte param_2)

{
  while ((*(ushort *)(param_1 + 6) == 0 || (0xc < *(ushort *)(param_1 + 6)))) {
    *(short *)(param_1 + 4) =
         *(short *)(param_1 + 4) + *(short *)(&DAT_006695a4 + (uint)param_2 * 4);
    *(short *)(param_1 + 6) =
         *(short *)(param_1 + 6) + *(short *)(&DAT_006695b0 + (uint)param_2 * 4);
  }
  return;
}

