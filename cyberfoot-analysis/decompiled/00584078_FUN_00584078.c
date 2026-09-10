// Address: 00584078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584078(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x261);
  if (param_2 != cVar1) {
    *(char *)(param_1 + 0x261) = param_2;
    FUN_00584648(param_1,cVar1,*(char *)(param_1 + 0x21d) == '\x01');
    FUN_00466754(param_1);
  }
  return;
}

