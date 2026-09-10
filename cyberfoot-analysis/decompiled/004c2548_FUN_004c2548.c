// Address: 004c2548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2548(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 auStack_30 [9];
  
  bVar4 = 0;
  FUN_004c51fc(param_1 + 4,param_2,auStack_30);
  puVar2 = auStack_30;
  puVar3 = (undefined4 *)(param_1 + 4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  return;
}

