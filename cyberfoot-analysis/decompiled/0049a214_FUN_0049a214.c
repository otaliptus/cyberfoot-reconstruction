// Address: 0049a214
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049a214(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40,param_3);
  param_1[0x54] = (int)puVar1;
  *puVar1 = FUN_00499d80;
  if (*(int *)(param_1[0x58] + 8) == 0) {
    puVar1[1] = FUN_00499df4;
    puVar1 = puVar1 + 2;
    iVar3 = param_1[0x10];
    for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
      uVar2 = (**(code **)(param_1[1] + 8))
                        (param_1,1,
                         (*(int *)(iVar3 + 0x1c) * 8 * param_1[0x39]) / *(int *)(iVar3 + 8),
                         param_1[0x3a]);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + 0x54;
    }
  }
  else {
    puVar1[1] = FUN_00499f54;
    FUN_0049a0fc(param_1);
  }
  return;
}

