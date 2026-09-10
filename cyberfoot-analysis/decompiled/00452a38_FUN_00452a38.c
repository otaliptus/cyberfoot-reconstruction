// Address: 00452a38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00452a38(int param_1,int param_2,int *param_3,undefined2 param_4)

{
  int local_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  
  local_14 = *param_3;
  local_10 = param_3[1];
  iStack_c = param_3[2];
  iStack_8 = param_3[3];
  FUN_00464dfc(*(undefined4 *)(param_1 + 0x210));
  if (*(short *)(param_1 + 0x332) == 0) {
    FUN_0042af8c(*(undefined4 *)(param_1 + 0x210),&local_14);
    FUN_0042b274(*(undefined4 *)(param_1 + 0x210),local_14 + 2,local_10,
                 *(undefined4 *)(param_2 + 0x24));
  }
  else {
    (**(code **)(param_1 + 0x330))
              (*(undefined4 *)(param_1 + 0x334),param_1,param_2,
               CONCAT22((short)((uint)&local_14 >> 0x10),param_4),&local_14);
  }
  return;
}

