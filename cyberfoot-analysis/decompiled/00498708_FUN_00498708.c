// Address: 00498708
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498708(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1[0x37] != 0) ||
     (((iVar1 = param_1[5], iVar1 != 0x65 && (iVar1 != 0x66)) && (iVar1 != 0x67)))) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  (**(code **)(param_1[0x56] + 0x14))(param_1,param_2,param_4);
  pcVar2 = *(code **)(param_1[0x56] + 0x18);
  while( true ) {
    if (param_4 == 0) break;
    (*pcVar2)(param_1,*param_3);
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  }
  return;
}

