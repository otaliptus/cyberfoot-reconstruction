// Address: 00427530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427530(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_10c [256];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_00404b80(auStack_10c,*(undefined4 *)(param_1 + 8),0xff);
    piVar2 = (int *)FUN_00403d98(iVar1,auStack_10c);
    if (piVar2 != (int *)0x0) {
      if (param_2 == '\0') {
        *piVar2 = 0;
      }
      else {
        *piVar2 = param_1;
      }
    }
  }
  return;
}

