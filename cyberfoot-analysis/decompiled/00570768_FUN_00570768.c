// Address: 00570768
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00570768(int *param_1,char param_2)

{
  if (param_2 < -100) {
    param_2 = -100;
  }
  else if ('d' < param_2) {
    param_2 = 'd';
  }
  if (param_2 != *(char *)((int)param_1 + 0x173)) {
    *(char *)((int)param_1 + 0x173) = param_2;
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}

