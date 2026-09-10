// Address: 004fbc3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fbc3c(int param_1,int param_2)

{
  char cVar1;
  
  FUN_004fb9e4(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004fa7a4);
  if (cVar1 != '\0') {
    FUN_004fbdc0(param_1,*(undefined4 *)(param_2 + 0xf8));
    (**(code **)(**(int **)(param_1 + 0x100) + 8))
              (*(int **)(param_1 + 0x100),*(undefined4 *)(param_2 + 0x100));
  }
  return;
}

