// Address: 004c3250
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c3250(char param_1,char param_2,char *param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = (param_1 + -0x30) - (param_2 + -0x30 + *param_3);
  if (bVar1 < 10) {
    FUN_00404abc(param_4,bVar1 + 0x30);
    *param_3 = '\0';
  }
  else {
    FUN_00404abc(param_4,bVar1 + 0x3a);
    *param_3 = '\x01';
  }
  return;
}

