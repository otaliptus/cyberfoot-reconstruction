// Address: 0045eaac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045eaac(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)((int)param_1 + 0x5d) == '\x01') && (*(char *)((int)param_1 + 0x276) == '\x02')) {
    iVar2 = GetSystemMetrics(0x15);
    if ((int)*(short *)(param_2 + 8) < param_1[0x12] - iVar2) {
      (**(code **)(*param_1 + 0xc4))();
      FUN_004668c0(param_1,0,0xffffffff);
      return;
    }
  }
  FUN_0046789c(param_1,param_2);
  cVar1 = FUN_00466430(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_0047e4c0(param_1);
    if ((iVar2 != 0) && (param_1 != *(int **)(iVar2 + 0x220))) {
      FUN_00466440(param_1,0);
    }
  }
  return;
}

