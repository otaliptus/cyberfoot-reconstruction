// Address: 0043e00c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043e00c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0043df98(param_1);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (0 < iVar1) {
      uVar2 = FUN_00430458(param_2);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      iVar3 = (**(code **)(*param_2 + 0x2c))();
      iVar4 = (**(code **)(*param_2 + 0x20))();
      iVar1 = iVar3 / iVar4;
      if (iVar3 % iVar4 == 0) {
        iVar3 = (**(code **)(*param_2 + 0x2c))();
        iVar1 = (**(code **)(*param_2 + 0x20))();
        iVar3 = iVar3 / iVar1;
        if (4 < iVar3) {
          iVar3 = 1;
        }
        iVar1 = FUN_0043e084(param_1,iVar3);
      }
    }
  }
  return iVar1;
}

