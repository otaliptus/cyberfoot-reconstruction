// Address: 004539a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004539a0(int *param_1,uint param_2)

{
  undefined1 uVar1;
  
  *(bool *)((int)param_1 + 0x16a) = (param_2 & 3) != 0;
  (**(code **)(*param_1 + 100))(param_1,(param_2 & 4) != 0);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    FUN_00466128(param_1,(param_2 & 8) == 0);
  }
  if ((*(char *)((int)param_1 + 0x16a) == '\0') && ((param_2 & 0x10) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x5c) = uVar1;
  *(bool *)(param_1 + 0x5f) = (param_2 & 0x20) != 0;
  *(bool *)((int)param_1 + 0x171) = (param_2 & 0x80) != 0;
  return;
}

