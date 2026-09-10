// Address: 00512d88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00512d88(int param_1,int param_2)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  if (*(int *)(param_1 + 0x290) <= *(int *)(param_2 + 0x88)) {
    iVar1 = *(int *)(param_2 + 0x74) - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
    FUN_0050f688(param_1,local_1c);
    if (iVar1 < local_1c[0]) {
      FUN_0050f688(param_1,local_1c);
      FUN_004e7c2c(*(undefined4 *)(param_1 + 0x238),iVar1 - local_1c[0]);
      FUN_005116b0(param_1);
    }
    else {
      FUN_0050f688(param_1,local_1c);
      if (local_14 < *(int *)(param_2 + 0xb0) + iVar1) {
        FUN_0050f688(param_1,local_1c);
        FUN_004e7c2c(*(undefined4 *)(param_1 + 0x238),(*(int *)(param_2 + 0xb0) + iVar1) - local_14)
        ;
        FUN_005116b0(param_1);
      }
    }
  }
  return;
}

