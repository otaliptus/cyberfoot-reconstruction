// Address: 004055c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004055c4(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0 < param_2) {
    uVar2 = FUN_00404fc8(param_2);
    iVar1 = FUN_00405260(*param_1);
    if (0 < iVar1) {
      if (param_2 < iVar1) {
        iVar1 = param_2;
      }
      FUN_00402a04(*param_1,uVar2,iVar1 * 2);
    }
  }
  FUN_00404fe0(param_1,uVar2);
  return;
}

