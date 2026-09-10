// Address: 00507db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00507db8(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  local_14 = param_3;
  FUN_004070b8(0xffffffff,0xffffffff,param_3);
  if (*(char *)(param_1 + 700) == '\0') {
    iVar2 = FUN_00507fa8(param_1,&local_1c);
    if (iVar2 != 0) {
      uVar1 = FUN_0050a2cc(iVar2);
      *local_14 = uVar1;
    }
    uVar1 = FUN_005041d0(param_1,local_1c,local_18);
    local_14[1] = uVar1;
  }
  else if (*(char *)(param_1 + 700) == '\x01') {
    uVar1 = FUN_00504314(param_1,local_1c,local_18);
    local_14[1] = uVar1;
    iVar2 = FUN_0050f73c(param_1,uVar1);
    iVar2 = local_18 - iVar2;
    iVar3 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
    if (-1 < iVar3 + -1) {
      iVar5 = 0;
      do {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),iVar5);
        if (*(int *)(*(int *)(iVar4 + 0x90) + 8) <= local_1c) {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))
                            (*(int **)(param_1 + 0x4d4),iVar5);
          iVar4 = FUN_00509e78(*(undefined4 *)(iVar4 + 0x90));
          if ((local_1c < iVar4) &&
             (iVar4 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))
                                (*(int **)(param_1 + 0x4d4),iVar5),
             *(int *)(*(int *)(iVar4 + 0x90) + 0xc) <= iVar2)) {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))
                              (*(int **)(param_1 + 0x4d4),iVar5);
            iVar4 = FUN_00509e6c(*(undefined4 *)(iVar4 + 0x90));
            if (iVar2 < iVar4) {
              (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),iVar5);
              uVar1 = FUN_0050a2cc();
              *local_14 = uVar1;
              return;
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

