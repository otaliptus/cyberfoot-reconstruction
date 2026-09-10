// Address: 00497a58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497a58(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == 0) {
    iVar1 = FUN_004977f8(param_1);
    *param_2 = iVar1;
  }
  FUN_0048ab0c();
  iVar2 = 0;
  iVar1 = 1;
  do {
    param_3 = param_3 + 1;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + (uint)*param_3;
  } while (iVar1 < 0x11);
  if ((iVar2 < 1) || (0x100 < iVar2)) {
    *(undefined4 *)(*param_1 + 0x14) = 8;
    (**(code **)*param_1)();
  }
  FUN_0048ab0c();
  *(undefined4 *)(*param_2 + 0x114) = 0;
  return;
}

