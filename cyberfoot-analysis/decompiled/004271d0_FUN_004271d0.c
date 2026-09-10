// Address: 004271d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004271d0(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[8] != 0) {
    local_8 = *(undefined4 *)(param_2[8] + 0x18);
  }
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00427244,*(short *)(param_1 + 0x18) != (short)local_8,&LAB_00426fa4,
             param_1,&LAB_00426f7c,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00427254,local_8._2_2_ != *(short *)(param_1 + 0x1a),&LAB_00426fb0,param_1
             ,&LAB_00426f90,param_1);
  return;
}

