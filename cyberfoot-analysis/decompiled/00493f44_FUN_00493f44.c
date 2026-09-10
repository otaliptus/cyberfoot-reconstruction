// Address: 00493f44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00493f44(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),0,
                       *(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  if ((uint)(param_4 - *param_5) < uVar4) {
    uVar4 = param_4 - *param_5;
  }
  uVar3 = *(int *)(param_1 + 0x74) - *(int *)(iVar1 + 0x14);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1cc) + 4))
            (param_1,*(int *)(iVar1 + 0x18) * 4 + *(int *)(iVar1 + 0xc),*param_5 * 4 + param_6,uVar4
            );
  *param_5 = *param_5 + uVar4;
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + uVar4;
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x18)) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}

