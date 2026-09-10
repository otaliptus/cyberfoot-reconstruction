// Address: 00559010
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00559010(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  cVar3 = FUN_00403c10(uVar4,PTR_PTR_0047cb68);
  if (cVar3 == '\0') {
    uVar4 = FUN_0055b4f0(PTR_PTR_00551ed0,1,*(undefined4 *)(*(int *)PTR_DAT_0066b3ac + 0x44),0);
    *(undefined4 *)(param_1 + 0xb8) = uVar4;
  }
  else {
    uVar5 = 0;
    uVar4 = FUN_00403c34(uVar4,PTR_PTR_0047cb68);
    uVar4 = FUN_0055b4f0(PTR_PTR_00551ed0,1,uVar4,uVar5);
    *(undefined4 *)(param_1 + 0xb8) = uVar4;
  }
  *(int *)(*(int *)(param_1 + 0xb8) + 0x308) = param_1;
  FUN_0055bc04();
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(iVar1 + 0x294) = param_1;
  *(undefined1 **)(iVar1 + 0x290) = &LAB_00558928;
  *(undefined1 *)(param_1 + 0x151) = 0;
  if (*(char *)(param_1 + 0x13d) == '\0') {
    FUN_00483d6c(*(undefined4 *)(param_1 + 0xb8));
    uVar4 = 1;
  }
  else {
    piVar2 = *(int **)(param_1 + 0xb8);
    piVar2[0xb3] = param_1;
    piVar2[0xb2] = (int)&LAB_0055b308;
    uVar4 = (**(code **)(*piVar2 + 0xec))();
    if (*(short *)(param_1 + 0x14a) != 0) {
      (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1);
    }
    FUN_00483bc4(*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return uVar4;
}

