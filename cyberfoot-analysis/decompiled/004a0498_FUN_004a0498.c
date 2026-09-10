// Address: 004a0498
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a0498(int param_1,uint param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_2_3_006665f6[0])) || (param_4 != 0x38)) {
    uVar1 = 0xfffffffa;
  }
  else if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_0049de34;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_0049de44;
    }
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x2530);
    if (iVar2 == 0) {
      uVar1 = 0xfffffffc;
    }
    else {
      *(int *)(param_1 + 0x1c) = iVar2;
      if ((int)param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      else {
        *(int *)(iVar2 + 8) = ((int)param_2 >> 4) + 1;
        if ((int)param_2 < 0x30) {
          param_2 = param_2 & 0xf;
        }
      }
      if (((int)param_2 < 8) || (0xf < (int)param_2)) {
        (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar2);
        uVar1 = 0xfffffffe;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(uint *)(iVar2 + 0x24) = param_2;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        uVar1 = FUN_004a03dc(param_1);
      }
    }
  }
  return uVar1;
}

