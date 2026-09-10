// Address: 004310e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004310e8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_60 [2];
  int local_58;
  int local_40;
  
  bVar5 = 0;
  iVar1 = param_1[10];
  if (param_2 != *(int *)(iVar1 + 0x20)) {
    FUN_0043052c(param_1);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = local_60;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    local_58 = param_2;
    local_40 = param_2;
    FUN_0042fe4c(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),local_60);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

