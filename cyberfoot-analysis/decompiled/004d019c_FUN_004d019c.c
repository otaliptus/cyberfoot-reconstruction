// Address: 004d019c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d019c(int *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  tagPOINT local_c;
  
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if (cVar1 != '\0') {
    GetCursorPos(&local_c);
    piVar2 = (int *)FUN_00464ab4(&local_c,1);
    bVar3 = param_1 != piVar2;
    if (bVar3 != (bool)*(char *)((int)param_1 + 0x231)) {
      *(bool *)((int)param_1 + 0x231) = bVar3;
      if (bVar3) {
        FUN_004673cc(param_1,0xb014,0,0);
      }
      else {
        FUN_004673cc(param_1,0xb013,0,0);
      }
    }
  }
  return;
}

