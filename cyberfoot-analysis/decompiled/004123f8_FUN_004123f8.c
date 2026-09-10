// Address: 004123f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004123f8(undefined2 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00405bf0(*(undefined4 *)(param_2 + 8));
  FUN_00411d38(param_1);
  *param_1 = 8;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

