// Address: 0041e284
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041e284(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041e078(param_1,param_2);
  uVar2 = 0;
  if (-1 < iVar1) {
    *(undefined4 *)(param_1[1] + iVar1 * 4) = 0;
    FUN_0041df0c(param_1,iVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,1);
    uVar2 = param_2;
  }
  return uVar2;
}

