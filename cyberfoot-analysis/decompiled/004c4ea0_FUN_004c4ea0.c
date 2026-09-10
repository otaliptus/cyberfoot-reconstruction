// Address: 004c4ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4ea0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30;
  
  puVar1 = &local_30;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)param_2;
  local_30._1_1_ = FUN_004c4a30(local_30._1_1_);
  FUN_004c51fc(param_1,&local_30,param_3);
  return;
}

