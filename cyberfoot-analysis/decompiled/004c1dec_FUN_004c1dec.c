// Address: 004c1dec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c1dec(int param_1,undefined2 *param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && (cVar1 = FUN_004188a8(param_1,param_3), cVar1 != '\0')) {
    FUN_00418888(param_1,param_2,param_3);
    return;
  }
  *param_2 = *(undefined2 *)(param_1 + 4);
  uVar2 = FUN_004c1b18(PTR_PTR_004c14a0,1,*(undefined4 *)(param_3 + 8));
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}

