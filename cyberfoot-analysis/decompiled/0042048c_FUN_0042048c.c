// Address: 0042048c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042048c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 8);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_3 * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar2;
  *puVar2 = uVar3;
  uVar3 = puVar1[1];
  puVar1[1] = puVar2[1];
  puVar2[1] = uVar3;
  return;
}

