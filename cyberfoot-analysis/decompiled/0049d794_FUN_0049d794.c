// Address: 0049d794
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049d794(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [6];
  int *local_10;
  
  bVar5 = 0;
  iVar1 = param_1[0x5a];
  local_30 = *(undefined4 *)param_1[6];
  local_2c = ((undefined4 *)param_1[6])[1];
  puVar3 = (undefined4 *)(iVar1 + 0xc);
  puVar4 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_10 = param_1;
  iVar2 = FUN_0049d44c(&local_30);
  if (iVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)();
  }
  puVar3 = (undefined4 *)param_1[6];
  *puVar3 = local_30;
  puVar3[1] = local_2c;
  puVar3 = local_28;
  puVar4 = (undefined4 *)(iVar1 + 0xc);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  return;
}

