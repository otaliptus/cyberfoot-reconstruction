// Address: 004524f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004524f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_10;
  
  puStack_28 = (undefined1 *)0x452508;
  iVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  puStack_2c = &LAB_00452674;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x452521;
  puStack_28 = &stack0xfffffffc;
  local_10 = FUN_00465c0c(param_1);
  puStack_34 = (undefined1 *)0x452532;
  iVar3 = FUN_0041edb0(*(undefined4 *)(param_1 + 0x23c));
  if (-1 < iVar3 + -1) {
    iVar7 = 0;
    do {
      puStack_34 = (undefined1 *)0x45254c;
      iVar4 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),iVar7);
      if (*(char *)(iVar4 + 0xd) == '\0') {
        puStack_34 = (undefined1 *)0x452567;
        iVar4 = FUN_0044d9bc(iVar4);
        local_10 = local_10 - iVar4;
      }
      else {
        puStack_34 = (undefined1 *)0x45255e;
        FUN_0041dec0(iVar2,iVar4);
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_28;
  if (0 < *(int *)(iVar2 + 8)) {
    puStack_34 = (undefined1 *)0x452589;
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x20))();
    puStack_38 = &LAB_00452657;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    do {
      iVar3 = *(int *)(iVar2 + 8);
      iVar4 = local_10 % iVar3;
      iVar7 = local_10 / iVar3;
      iVar8 = iVar3 + -1;
      if (-1 < iVar8) {
        do {
          uVar5 = FUN_0041e01c(iVar2,iVar8);
          if (iVar8 == 0) {
            iVar7 = iVar7 + iVar4;
          }
          FUN_0044d9f0(uVar5,iVar7);
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
      iVar7 = local_10 / iVar3;
      iVar8 = iVar3 + -1;
      if (-1 < iVar8) {
        do {
          uVar5 = FUN_0041e01c(iVar2,iVar8);
          if (iVar8 == 0) {
            iVar7 = iVar7 + iVar4;
          }
          iVar6 = FUN_0044d9bc(uVar5);
          if (iVar7 != iVar6) {
            FUN_0041df0c(iVar2,iVar8);
            iVar6 = FUN_0044d9bc(uVar5);
            local_10 = local_10 - iVar6;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != -1);
      }
      puVar1 = puStack_34;
    } while ((*(int *)(iVar2 + 8) != 0) && (*(int *)(iVar2 + 8) != iVar3));
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = (undefined1 *)0x45265e;
    iVar2 = **(int **)(param_1 + 0x23c);
    puStack_38 = (undefined1 *)0x452656;
    (**(code **)(iVar2 + 0x24))(*(int **)(param_1 + 0x23c),iVar2,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045267b;
  puStack_2c = (undefined1 *)0x452673;
  FUN_00403a84(iVar2,uStack_30,puVar1);
  return;
}

