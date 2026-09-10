// Address: 004c17b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c17b8(int param_1,uint param_2)

{
  while (0x3b < *(ushort *)(param_1 + 0xe)) {
    *(short *)(param_1 + 0xc) =
         *(short *)(param_1 + 0xc) + *(short *)(&DAT_006695a4 + (param_2 & 0xff) * 4);
    *(short *)(param_1 + 0xe) =
         *(short *)(param_1 + 0xe) + *(short *)(&DAT_006695c8 + (param_2 & 0xff) * 4);
    FUN_004c1774(param_1,param_2);
  }
  return;
}

