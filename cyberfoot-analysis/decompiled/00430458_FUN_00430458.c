// Address: 00430458
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00430458(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[0xd] == 0x20000000) {
    cVar1 = FUN_0043033c(param_1);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*param_1 + 0x20))();
      uVar4 = FUN_00430280(param_1);
      uVar2 = FUN_0042b510(uVar4,0,iVar3 + -1);
    }
    else {
      uVar2 = 0xffffff;
    }
  }
  else {
    uVar2 = FUN_00429e64();
  }
  return uVar2 | 0x2000000;
}

