// Address: 004c31e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c31e4(char param_1,char param_2,char *param_3,int *param_4)

{
  byte bVar1;
  
  bVar1 = param_1 + param_2 + -0x60 + *param_3;
  if (bVar1 < 10) {
    FUN_00404abc(param_4,bVar1 + 0x30);
    *param_3 = '\0';
  }
  else {
    FUN_00404abc(param_4,bVar1 + 0x26);
    *param_3 = '\x01';
  }
  if (*param_4 == 0) {
    FUN_00404928(param_4,&DAT_004c324c);
  }
  return;
}

