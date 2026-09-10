// Address: 004c18c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c18c0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_004c169c(param_1);
  if (cVar1 == '\0') {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + *(short *)(param_2 + 4);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + *(short *)(param_2 + 6);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + *(short *)(param_2 + 8);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + *(short *)(param_2 + 10);
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + *(short *)(param_2 + 0xc);
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + *(short *)(param_2 + 0xe);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(param_2 + 0x10);
    FUN_004c17fc(param_1,0);
  }
  return;
}

