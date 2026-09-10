// Address: 0048d5fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048d5fc(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x6d];
  *puVar1 = FUN_0048d550;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)param_1[0x6e])();
  param_1[0x28] = 0;
  return;
}

