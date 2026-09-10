// Address: 00456e8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00456e8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  
  if ((param_5 == '\0') || (param_6 == (undefined1 *)0x0)) {
    cVar1 = '\x01';
  }
  else {
    FUN_00456cb4(param_1,*param_6,param_3,*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_6 + 8))
    ;
    iVar2 = (**(code **)PTR_DAT_0066af18)();
    cVar1 = '\x01' - (iVar2 == 0);
  }
  if (cVar1 != '\0') {
    (**(code **)PTR_DAT_0066b350)();
  }
  return;
}

