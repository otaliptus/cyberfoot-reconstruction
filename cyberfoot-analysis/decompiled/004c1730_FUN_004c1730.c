// Address: 004c1730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1730(int param_1,uint param_2)

{
  while (0x17 < *(ushort *)(param_1 + 10)) {
    *(short *)(param_1 + 8) =
         *(short *)(param_1 + 8) + *(short *)(&DAT_006695a4 + (param_2 & 0xff) * 4);
    *(short *)(param_1 + 10) =
         *(short *)(param_1 + 10) + *(short *)(&DAT_006695b8 + (param_2 & 0xff) * 4);
    FUN_004c16dc(param_1,param_2);
  }
  return;
}

