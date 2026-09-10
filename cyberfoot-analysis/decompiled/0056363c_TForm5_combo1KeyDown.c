// Address: 0056363c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm5_combo1KeyDown(int param_1,undefined4 param_2,short *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00563786;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  local_8 = param_1;
  if (*param_3 == 0x4d) {
    puStack_30 = &stack0xfffffffc;
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x334) + 0x23c) + 0x14))();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      uVar5 = true;
      do {
        puVar6 = &local_10;
        piVar1 = *(int **)(*(int *)(local_8 + 0x334) + 0x23c);
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,&local_14,puVar6);
        FUN_00404e04(local_14,1,2,puVar6);
        FUN_00404cf0(local_10,&LAB_005637a0);
        if ((bool)uVar5) {
          FUN_0054c10c(*(undefined4 *)(local_8 + 0x334),iVar4);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        uVar5 = iVar3 == 0;
      } while (!(bool)uVar5);
    }
  }
  else {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x334) + 0x23c) + 0x14))();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      uVar5 = true;
      do {
        puVar6 = &local_18;
        piVar1 = *(int **)(*(int *)(local_8 + 0x334) + 0x23c);
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,&local_1c,puVar6);
        FUN_00404e04(local_1c,1,1,puVar6);
        uVar7 = local_18;
        FUN_00404abc(&local_20,*local_c);
        FUN_00404cf0(uVar7,local_20);
        if ((bool)uVar5) {
          FUN_0054c10c(*(undefined4 *)(local_8 + 0x334),iVar4);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        uVar5 = iVar3 == 0;
      } while (!(bool)uVar5);
    }
  }
  puVar2 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0056378d;
  puStack_34 = (undefined1 *)0x563785;
  FUN_004048f8(&local_20,5,puVar2);
  return;
}

