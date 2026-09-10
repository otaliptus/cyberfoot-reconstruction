// Address: 00497884
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497884(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[6];
  iVar2 = -*(int *)(iVar4 + 4);
  if (iVar2 != -0x1000) {
    iVar3 = FUN_0048ab3c();
    if (iVar2 + 0x1000 != iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x25;
      (**(code **)*param_1)();
    }
  }
  uVar1 = *(undefined4 *)(iVar4 + 0x14);
  iVar4 = FUN_0048ab58();
  if (iVar4 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x25;
    (**(code **)*param_1)(param_1,(undefined4 *)*param_1,uVar1);
  }
  return;
}

