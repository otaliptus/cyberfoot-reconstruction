// Address: 00492a4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492a4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar1 + 0x30) == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))(param_1,iVar1 + 8);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x13c);
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
            (param_1,iVar1 + 8,iVar1 + 0x34,param_4,param_3,param_2,uVar2);
  if (uVar2 <= *(uint *)(iVar1 + 0x34)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  return;
}

