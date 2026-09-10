// Address: 00493ea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00493ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),1,
                       *(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  uVar2 = *(uint *)(iVar1 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x1c4) + 4))
            (param_1,param_2,param_3,*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x18,
             *(undefined4 *)(iVar1 + 0xc),param_7);
  if (uVar2 < *(uint *)(iVar1 + 0x18)) {
    iVar4 = *(uint *)(iVar1 + 0x18) - uVar2;
    (**(code **)(*(int *)(param_1 + 0x1cc) + 4))(param_1,uVar2 * 4 + *(int *)(iVar1 + 0xc),0,iVar4);
    *param_5 = *param_5 + iVar4;
  }
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x18)) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}

