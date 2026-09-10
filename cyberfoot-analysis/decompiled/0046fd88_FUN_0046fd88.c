// Address: 0046fd88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046fd88(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if ((byte)(*(char *)(*(int *)(param_1 + 0x14) + 0x5b) - 1U) < 2) {
    FUN_0046fca8(*param_4 + 1,param_4[1] + 1,param_3,&stack0xfffffffc);
    FUN_0046fd00(*param_4 + 3,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 5,param_4[3] + -2
                );
    FUN_0046fd00(*param_4 + 6,param_4[1] + *(int *)(param_1 + 0x18) + 1,*param_4 + 8,param_4[3] + -2
                );
  }
  else {
    FUN_0046fca8((param_4[2] - *(int *)(param_1 + 0x18)) + 1,param_4[1] + 1,param_3,&stack0xfffffffc
                );
    FUN_0046fd00(*param_4 + 2,param_4[1] + 3,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 5);
    FUN_0046fd00(*param_4 + 2,param_4[1] + 6,(param_4[2] - *(int *)(param_1 + 0x18)) + -2,
                 param_4[1] + 8);
  }
  return;
}

