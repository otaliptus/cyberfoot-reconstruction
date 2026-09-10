// Address: 004fc078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fc078(undefined4 param_1,int param_2)

{
  char cVar1;
  
  FUN_0050a14c(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004fac00);
  if (cVar1 != '\0') {
    FUN_004fc108(param_1,*(undefined4 *)(param_2 + 0xec));
    FUN_004fc128(param_1,*(undefined4 *)(param_2 + 0xe8));
    FUN_004fc148(param_1,*(undefined1 *)(param_2 + 0xd1));
    FUN_004fc158(param_1);
    FUN_004fc174(param_1);
    FUN_004fc190(param_1,*(undefined4 *)(param_2 + 0xf0));
    FUN_004fc1b0(param_1,*(undefined4 *)(param_2 + 0xf4));
  }
  return;
}

