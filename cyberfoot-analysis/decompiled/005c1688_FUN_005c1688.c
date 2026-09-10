// Address: 005c1688
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c1688(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_0044c690(*(undefined4 *)(param_1 + 0x28));
  if (cVar2 == '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 0x248);
    (**(code **)(*piVar1 + 0x6c))(piVar1,param_2);
  }
  else {
    FUN_004d7960(param_1,param_2,param_3);
  }
  return;
}

