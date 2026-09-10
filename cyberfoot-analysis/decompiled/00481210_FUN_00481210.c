// Address: 00481210
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00481210(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0xa0);
  FUN_00465a0c(param_1,param_2,&local_1c);
  if (((*(int *)(param_1 + 0x30) != 0) && (iVar1 == *(int *)(param_1 + 0x30))) &&
     (iVar2 != *(int *)(param_1 + 0xa0))) {
    FUN_00469fa0(param_1);
  }
  return;
}

