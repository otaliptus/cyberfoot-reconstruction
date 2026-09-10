// Address: 004ac0c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ac0c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x2c))(), param_2 <= iVar1 + -1)) &&
      (-1 < param_3)) && (iVar1 = (**(code **)(*param_1 + 0x20))(), param_3 <= iVar1 + -1)) {
    iVar1 = FUN_004aa2e8(param_1);
    if ((*(char *)(iVar1 + 0x461) != '\0') && (*(char *)(iVar1 + 0x461) != '\x03')) {
      if (*(char *)(iVar1 + 0x461) == '\x04') {
        uVar2 = FUN_004abc60(param_1,param_2,param_3);
        return uVar2;
      }
      uVar2 = FUN_004abbc4(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = FUN_004ab93c(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

