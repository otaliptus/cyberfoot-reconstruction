// Address: 0050aa0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050aa0c(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [12];
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  
  uVar2 = FUN_00403c34(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4),PTR_PTR_005025e4);
  if (param_2 == '\0') {
    FUN_0050f33c(uVar2,auStack_30);
    FUN_0050f33c(uVar2,local_20);
    iVar3 = FUN_0050a268(param_1);
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar2 = FUN_0050a268(param_1);
    FUN_0041c990(uVar2,local_1c + 4,iVar3 + iVar1,param_3,local_24);
  }
  else if (param_2 == '\x01') {
    FUN_0050f410(uVar2,auStack_30);
    FUN_0050f410(uVar2,local_20);
    iVar3 = FUN_0050a268(param_1);
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar2 = FUN_0050a268(param_1);
    FUN_0041c990(uVar2,local_1c,iVar3 + iVar1,param_3,local_24);
  }
  else if (param_2 == '\x04') {
    FUN_0050f4d0(uVar2,auStack_30);
    iVar3 = local_24 + -6;
    FUN_0050f4d0(uVar2,local_20);
    iVar4 = FUN_0050a268(param_1);
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar2 = FUN_0050a268(param_1);
    FUN_0041c990(uVar2,local_1c,iVar4 + iVar1,param_3,iVar3);
  }
  return;
}

