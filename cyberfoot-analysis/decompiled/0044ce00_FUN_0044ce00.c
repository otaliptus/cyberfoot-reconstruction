// Address: 0044ce00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044ce00(int *param_1,int param_2)

{
  short sVar1;
  undefined2 extraout_var;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(short *)(param_2 + 4) == 4) {
    sVar1 = (short)param_1[0x87];
    if (sVar1 < *(short *)(param_2 + 6)) {
      FUN_00403c80(param_1,0);
    }
    else if (*(short *)(param_2 + 6) < sVar1) {
      FUN_00403c80(param_1,CONCAT31((int3)(CONCAT22(extraout_var,sVar1) >> 8),1));
    }
    *(undefined2 *)(param_1 + 0x87) = *(undefined2 *)(param_2 + 6);
  }
  return;
}

