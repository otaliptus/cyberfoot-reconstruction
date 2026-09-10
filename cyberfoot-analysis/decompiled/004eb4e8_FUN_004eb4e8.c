// Address: 004eb4e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb4e8(undefined4 param_1,int *param_2,int *param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*param_3 < 0xc) {
      *param_3 = *param_3 + 1;
    }
    else {
      *param_2 = *param_2 + 1;
      *param_3 = 1;
    }
  }
  else if (param_4 == '\x01') {
    if (*param_3 < 2) {
      *param_2 = *param_2 + -1;
      *param_3 = 0xc;
    }
    else {
      *param_3 = *param_3 + -1;
    }
  }
  return;
}

