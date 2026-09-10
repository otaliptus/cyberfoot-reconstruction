// Address: 0048c2f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048c2f4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x6d] + 4))();
    (**(code **)(param_1[6] + 8))();
    param_1[5] = 0xc9;
  case 0xc9:
    iVar2 = (**(code **)param_1[0x6d])();
    if (iVar2 == 1) {
      FUN_0048c0a0(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    iVar2 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar2 = (**(code **)param_1[0x6d])();
    break;
  default:
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return iVar2;
}

