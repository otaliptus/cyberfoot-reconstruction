// Address: 004be468
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004be468(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  FUN_00467b40(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)((int)param_1 + 0x28b) = 0;
  if ((((0 < param_5) && (0 < param_4)) && (param_5 < param_1[0x12])) && (param_4 < param_1[0x13]))
  {
    if (*(char *)((int)param_1 + 0x28a) == '\0') {
      *(undefined1 *)(param_1 + 0xa3) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xa3) = 1;
    }
  }
  (**(code **)(*param_1 + 200))();
  return;
}

