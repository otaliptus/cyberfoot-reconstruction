// Address: 0055c0d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0055c0d8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [16];
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;
  
  puStack_34 = &stack0xfffffffc;
  local_14 = 0;
  local_5 = (undefined1)param_2;
  puStack_38 = &LAB_0055c24a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00467a98(param_1,param_2,param_3,param_4);
  if (((char)param_1[0xc0] == '\0') && (param_1[0xc2] != 0)) {
    local_10 = FUN_0055b490(param_1);
    uVar5 = param_4;
    (**(code **)(*param_1 + 0x44))(param_1,local_24,*param_1,param_4);
    FUN_00559120(param_1[0xc2],local_10,param_3,&local_14,local_24,uVar5);
    if (local_14 == 0) {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
    }
    else {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,CONCAT22(extraout_var,0xffeb));
    }
    FUN_00403a84(local_10);
    local_c = FUN_00559180(param_1[0xc2],param_3,param_4);
    iVar2 = FUN_0041edb0(*(undefined4 *)(param_1[0xc2] + 0xbc));
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        if (iVar4 != local_c) {
          iVar3 = FUN_0055cec0(*(undefined4 *)(param_1[0xc2] + 0xbc),iVar4);
          if (*(char *)(iVar3 + 0xd) != '\0') {
            iVar3 = FUN_0055cec0(*(undefined4 *)(param_1[0xc2] + 0xbc),iVar4);
            *(undefined1 *)(iVar3 + 0xd) = 0;
            (**(code **)(*(int *)param_1[0xc2] + 0x30))();
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_c != -1) {
      iVar2 = FUN_0055cec0(*(undefined4 *)(param_1[0xc2] + 0xbc),local_c);
      if (*(char *)(iVar2 + 0xd) == '\0') {
        iVar2 = FUN_0055cec0(*(undefined4 *)(param_1[0xc2] + 0xbc),local_c);
        *(undefined1 *)(iVar2 + 0xd) = 1;
        (**(code **)(*(int *)param_1[0xc2] + 0x30))();
      }
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0055c251;
  puStack_38 = (undefined1 *)0x55c249;
  FUN_004048d4(&local_14,uStack_3c,puVar1);
  return;
}

