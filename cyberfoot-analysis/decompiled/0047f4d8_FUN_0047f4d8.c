// Address: 0047f4d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047f4d8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x44))(param_2,&local_30);
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x208) + 0x1a);
    local_30 = local_30 - uVar2;
    local_28 = local_28 + uVar2;
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x20c) + 0x1a);
    local_2c = local_2c - uVar2;
    local_24 = local_24 + uVar2;
    FUN_00465d20(param_2,&local_30,auStack_18);
    FUN_00465d4c(param_1,auStack_18,&iStack_20);
    local_30 = iStack_20;
    local_2c = iStack_1c;
    FUN_00465d20(param_2,&local_28,auStack_18);
    FUN_00465d4c(param_1,auStack_18,&iStack_20);
    iVar1 = local_30;
    local_28 = iStack_20;
    local_24 = iStack_1c;
    if (local_30 < 0) {
      FUN_0047ed50(*(int *)(param_1 + 0x208),*(int *)(*(int *)(param_1 + 0x208) + 0xc) + local_30);
    }
    else {
      iVar3 = FUN_00465c0c(param_1);
      iVar4 = local_28;
      if (iVar3 < local_28) {
        iVar3 = FUN_00465c0c(param_1);
        if (iVar3 < iVar4 - iVar1) {
          local_28 = FUN_00465c0c(param_1);
          local_28 = local_28 + local_30;
        }
        iVar1 = *(int *)(param_1 + 0x208);
        iVar4 = FUN_00465c0c(param_1);
        FUN_0047ed50(iVar1,(*(int *)(iVar1 + 0xc) + local_28) - iVar4);
      }
    }
    iVar1 = local_2c;
    if (local_2c < 0) {
      FUN_0047ed50(*(int *)(param_1 + 0x20c),*(int *)(*(int *)(param_1 + 0x20c) + 0xc) + local_2c);
    }
    else {
      iVar3 = FUN_00465c50(param_1);
      iVar4 = local_24;
      if (iVar3 < local_24) {
        iVar3 = FUN_00465c50(param_1);
        if (iVar3 < iVar4 - iVar1) {
          local_24 = FUN_00465c50(param_1);
          local_24 = local_24 + local_2c;
        }
        iVar1 = *(int *)(param_1 + 0x20c);
        iVar4 = FUN_00465c50(param_1);
        FUN_0047ed50(iVar1,(*(int *)(iVar1 + 0xc) + local_24) - iVar4);
      }
    }
  }
  return;
}

