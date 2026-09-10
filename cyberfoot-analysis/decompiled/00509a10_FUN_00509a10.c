// Address: 00509a10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00509a10(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00508a28);
  if (cVar1 == '\0') {
    FUN_0041e66c(param_1,param_2);
  }
  else {
    FUN_00509a64(param_1,*(undefined4 *)(param_2 + 4));
    FUN_00509a8c(param_1,*(undefined4 *)(param_2 + 8));
    FUN_00509b24(param_1,*(undefined1 *)(param_2 + 0x10));
    (**(code **)(**(int **)(param_1 + 0x14) + 8))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14));
  }
  return;
}

