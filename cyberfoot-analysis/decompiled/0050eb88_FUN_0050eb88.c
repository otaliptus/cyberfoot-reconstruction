// Address: 0050eb88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050eb88(int param_1,int *param_2)

{
  int *piVar1;
  
  *(int **)(param_1 + 0x2d4) = param_2;
  if (param_2 != (int *)0x0) {
    param_2[0x86] = 0;
    param_2[0x87] = 0;
    (**(code **)(*param_2 + 0x68))(param_2,param_1);
    FUN_00466238(*(undefined4 *)(param_1 + 0x2d4),0);
    piVar1 = *(int **)(param_1 + 0x2d4);
    *(undefined1 *)((int)piVar1 + 0x252) = *(undefined1 *)(param_1 + 0x4c9);
    (**(code **)(*piVar1 + 0x70))(piVar1,*(undefined1 *)(param_1 + 0x5f));
  }
  return;
}

