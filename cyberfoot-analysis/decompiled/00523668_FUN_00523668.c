// Address: 00523668
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00523668(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[0x14];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    param_1[0x14] = (int)piVar1;
    piVar1[5] = (int)param_1;
    piVar1[4] = *(int *)(*param_1 + 0x10);
    (**(code **)(*param_1 + 0x24))();
    uVar2 = FUN_0042fa48();
    (**(code **)(*piVar1 + 0x38))(piVar1,uVar2);
    uVar2 = (**(code **)(*param_1 + 0x20))();
    (**(code **)(*(int *)param_1[0x14] + 0x34))((int *)param_1[0x14],uVar2);
    uVar2 = (**(code **)(*param_1 + 0x2c))();
    (**(code **)(*(int *)param_1[0x14] + 0x40))((int *)param_1[0x14],uVar2);
  }
  return piVar1;
}

