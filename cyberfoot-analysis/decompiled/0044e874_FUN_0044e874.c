// Address: 0044e874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044e874(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_34 [40];
  
  if (param_2 == 0) {
    param_2 = (**(code **)(**(int **)(param_1 + 4) + 0xf8))();
  }
  puVar2 = auStack_34;
  if (param_3 < 0) {
    param_3 = FUN_0044e8c4(param_1);
  }
  FUN_0044f1d8(param_1,param_3,param_2,auStack_34);
  uVar1 = FUN_0044e8e8(param_1);
  FUN_00432c58(uVar1,puVar2);
  return param_2;
}

