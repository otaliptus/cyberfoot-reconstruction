// Address: 004c09bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c09bc(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  cVar1 = '\0';
  iVar3 = FUN_00404ba4(param_1);
  if (param_2 <= iVar3) {
    cVar1 = *(char *)(param_1 + -1 + param_2);
  }
  iVar3 = FUN_00404ba4(param_1);
  if (iVar3 < param_2) {
    return 0;
  }
  cVar2 = FUN_0040ed74(param_1,param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  if ((((1 < param_2) && (*(char *)(param_1 + -2 + param_2) == '\\')) &&
      (cVar2 = FUN_0040ed74(param_1,param_2 + -1), cVar2 == '\0')) &&
     (((param_2 < 3 || (*(char *)(param_1 + -3 + param_2) != '\\')) ||
      (cVar2 = FUN_0040ed74(param_1,param_2 + -2), cVar2 != '\0')))) {
    return 1;
  }
  if (((cVar1 == DAT_0066958c) && (iVar3 = FUN_00404ba4(param_1), 3 < iVar3)) &&
     (iVar3 = FUN_00404ba4(param_1), iVar3 + -4 < param_2)) {
    return 6;
  }
  iVar3 = FUN_00404ba4(param_1);
  if ((((3 < iVar3) && (iVar3 = FUN_00404ba4(param_1), iVar3 + -4 < param_2)) &&
      (*(char *)(param_1 + -2 + param_2) == DAT_0066958c)) &&
     (((param_2 < 3 || (*(char *)(param_1 + -3 + param_2) != '\\')) ||
      (cVar2 = FUN_0040ed74(param_1,param_2 + -2), cVar2 == '\x02')))) {
    return 7;
  }
  if ((cVar1 == '/') || (cVar1 == ':')) {
    uVar4 = 2;
  }
  else if ((((cVar1 == '!') || (cVar1 == '<')) || (cVar1 == '>')) || (cVar1 == '\\')) {
    uVar4 = 3;
  }
  else if (((cVar1 == '#') || (cVar1 == '9')) ||
          ((cVar1 == 'a' || ((cVar1 == 'c' || (cVar1 == 'l')))))) {
    uVar4 = 5;
  }
  else if ((((cVar1 == '0') || (cVar1 == 'A')) || (cVar1 == 'C')) || (cVar1 == 'L')) {
    uVar4 = 4;
  }
  return uVar4;
}

