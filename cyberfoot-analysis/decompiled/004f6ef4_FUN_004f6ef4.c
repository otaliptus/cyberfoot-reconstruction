// Address: 004f6ef4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f6ef4(int param_1,int param_2,uint param_3,char param_4,char param_5)

{
  switch(param_3 & 0xff) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
  }
  if ((((*(int *)(param_1 + 0x103c) == param_2) && (*(char *)(param_1 + 0x1038) != '\0')) &&
      (param_5 != *(char *)(param_1 + 0x1040))) && (param_4 == '\0')) {
    *(char *)(param_1 + 0x1040) = param_5;
    FUN_004f6c20();
  }
  else {
    *(char *)(param_1 + 0x1040) = param_5;
    FUN_004f6e6c(0,*(int *)(param_1 + 0x1028) + -1,param_3,&stack0xfffffffc);
  }
  *(int *)(param_1 + 0x103c) = param_2;
  *(undefined1 *)(param_1 + 0x1038) = 1;
  return;
}

