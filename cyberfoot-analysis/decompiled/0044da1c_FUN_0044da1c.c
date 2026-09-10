// Address: 0044da1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044da1c(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != *(char *)(param_1 + 0xc)) {
    iVar1 = FUN_0041ea50(param_1);
    if (iVar1 != 0) {
      *(char *)(param_1 + 0xc) = param_2;
      FUN_0041ea2c(param_1,0);
      piVar2 = (int *)FUN_0044dba8(*(undefined4 *)(param_1 + 4));
      (**(code **)(*piVar2 + 0x80))();
    }
  }
  return;
}

