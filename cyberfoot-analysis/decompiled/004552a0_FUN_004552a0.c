// Address: 004552a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004552a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00442fcc(param_1);
  uVar2 = FUN_0041ea50(param_1);
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),uVar2);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x1d);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_004431c4(*(int *)(param_1 + 4));
  }
  return;
}

