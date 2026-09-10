// Address: 0049f0a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049f0a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (((param_2 == 0) || (param_1 == 0)) || (*(int *)(param_2 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1c);
    FUN_0049de20();
    piVar3 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0xfffffffc;
    }
    else {
      *(int **)(param_1 + 0x1c) = piVar3;
      FUN_0049de20();
      *piVar3 = param_1;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0xb],2);
      piVar3[0xe] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0xb],2);
      piVar3[0x10] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0x13],2);
      piVar3[0x11] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar3[0x5a7],4);
      piVar3[2] = iVar4;
      if (((piVar3[0xe] == 0) || (piVar3[0x10] == 0)) || ((piVar3[0x11] == 0 || (piVar3[2] == 0))))
      {
        FUN_0049eff4(param_1);
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_0049de20();
        FUN_0049de20();
        FUN_0049de20();
        FUN_0049de20();
        piVar3[4] = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 8)) + piVar3[2];
        piVar3[0x5a9] = iVar4 + (piVar3[0x5a7] & 0xfffffffeU);
        piVar3[0x5a6] = piVar3[0x5a7] * 3 + piVar3[2];
        piVar3[0x2c6] = (int)(piVar3 + 0x25);
        piVar3[0x2c9] = (int)(piVar3 + 0x262);
        piVar3[0x2cc] = (int)(piVar3 + 0x29f);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

