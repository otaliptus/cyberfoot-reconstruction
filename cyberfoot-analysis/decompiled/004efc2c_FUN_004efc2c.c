// Address: 004efc2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004efc2c(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x219) = param_2;
  if (DAT_004efc9c == *(char *)((int)param_1 + 0x219)) {
    FUN_0043b234(param_1[0x85],0);
    FUN_0043b234(param_1[0x87],0);
  }
  else {
    FUN_0043b234(param_1[0x85],1);
    if (*(short *)((int)param_1 + 0x222) != 0) {
      (*(code *)param_1[0x88])(param_1[0x89],param_1,*(undefined1 *)((int)param_1 + 0x219));
    }
  }
  (**(code **)(*param_1 + 0x7c))();
  return;
}

