// Address: 0050ee14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ee14(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 0x7c) & 8) != 0) {
    (**(code **)(*param_1 + 0x1e8))();
    param_1[0x12d] = param_2;
    uVar1 = FUN_0050a2cc(param_2);
    FUN_00403c80(param_1,uVar1,*(char *)(param_2 + 0x9a) == '\0');
  }
  return;
}

