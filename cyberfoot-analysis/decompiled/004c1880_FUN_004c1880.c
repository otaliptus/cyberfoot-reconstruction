// Address: 004c1880
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1880(int param_1,int param_2)

{
  int iVar1;
  
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) - *(short *)(param_2 + 4);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - *(short *)(param_2 + 6);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - *(short *)(param_2 + 8);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - *(short *)(param_2 + 10);
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - *(short *)(param_2 + 0xc);
  *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) - *(short *)(param_2 + 0xe);
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar1;
  FUN_004c17fc(param_1,CONCAT31((int3)((uint)iVar1 >> 8),1));
  return;
}

