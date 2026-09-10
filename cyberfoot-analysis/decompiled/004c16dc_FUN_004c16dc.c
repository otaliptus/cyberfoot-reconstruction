// Address: 004c16dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c16dc(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004c1868(param_1);
  while ((*(ushort *)(param_1 + 8) == 0 || (iVar1 < (int)(uint)*(ushort *)(param_1 + 8)))) {
    *(short *)(param_1 + 6) =
         *(short *)(param_1 + 6) + *(short *)(&DAT_006695a4 + (param_2 & 0xff) * 4);
    if ((char)param_2 == '\0') {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (short)iVar1;
    }
    else {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)iVar1;
    }
    FUN_004c16a8(param_1,param_2);
    iVar1 = FUN_004c1868(param_1);
  }
  return;
}

