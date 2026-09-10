// Address: 005841b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005841b4(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x210);
  if (param_2 != cVar1) {
    *(char *)(param_1 + 0x210) = param_2;
    cVar2 = FUN_0058436c(param_1);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0x210) = cVar1;
    }
    FUN_00584518(param_1);
    FUN_00466754(param_1);
  }
  return;
}

