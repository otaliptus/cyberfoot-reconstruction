// Address: 00499cfc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499cfc(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40,param_3);
  param_1[0x53] = (int)puVar1;
  *puVar1 = &LAB_00499c24;
  if (param_1[0x2b] == 0) {
    if (param_2 == 0) {
      puVar1 = puVar1 + 6;
      iVar3 = param_1[0x10];
      for (iVar4 = 0; iVar4 < param_1[0xe]; iVar4 = iVar4 + 1) {
        uVar2 = (**(code **)(param_1[1] + 8))
                          (param_1,1,*(int *)(iVar3 + 0x1c) << 3,*(int *)(iVar3 + 0xc) << 3);
        *puVar1 = uVar2;
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + 0x54;
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
  }
  return;
}

