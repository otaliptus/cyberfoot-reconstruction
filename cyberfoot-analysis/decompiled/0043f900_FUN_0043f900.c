// Address: 0043f900
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043f900(int *param_1)

{
  bool bVar1;
  char cVar2;
  
  FUN_00467f5c(param_1);
  if (((((char)param_1[0x60] == '\0') || (*(char *)((int)param_1 + 0x181) == '\0')) ||
      (cVar2 = (**(code **)(*param_1 + 0x50))(), cVar2 == '\0')) ||
     (*(char *)((int)param_1 + 0x171) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    FUN_00456c14();
    cVar2 = FUN_00456cf4();
    if (cVar2 == '\0') {
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x80))();
  }
  return;
}

