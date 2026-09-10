// Address: 00450898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00450898(int *param_1,uint *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  uint local_31 [5];
  int local_1d;
  undefined4 local_15;
  undefined4 local_11;
  undefined4 local_d;
  byte local_9;
  undefined4 local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_8 = 0;
  puVar3 = local_31;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_48 = &LAB_004509b9;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puVar1 = &stack0xfffffffc;
  if ((local_31[0] & 4) == 0) {
    if ((char)param_1[0x91] == '\0') {
      FUN_0044e8f4(param_1[0x8b],local_31[1]);
      puVar1 = puStack_44;
    }
    else {
      puVar1 = &stack0xfffffffc;
      if ((-1 < (int)local_31[1]) && (puVar1 = &stack0xfffffffc, local_31[2] == 0)) {
        puStack_44 = &stack0xfffffffc;
        local_9 = FUN_0045084c(local_31[0]);
        iVar2 = param_1[0xa3];
        *(uint *)(iVar2 + 0x18) = local_31[1];
        *(undefined4 *)(iVar2 + 0xc) = local_11;
        (**(code **)(**(int **)(iVar2 + 8) + 0x44))();
        if (((local_9 & 1) == 0) || (local_1d == 0)) {
          FUN_004048d4(&local_8);
        }
        else {
          FUN_0040a974(local_1d,&local_8);
        }
        FUN_00404928(param_1[0xa3] + 0x24,local_8);
        if ((local_9 & 2) != 0) {
          *(undefined4 *)(param_1[0xa3] + 0x10) = local_15;
        }
        if ((local_9 & 0x10) != 0) {
          *(undefined4 *)(param_1[0xa3] + 0x14) = local_d;
        }
        (**(code **)(*param_1 + 0x114))(param_1,param_1[0xa3],local_9);
        puVar1 = puStack_44;
      }
    }
  }
  puStack_44 = puVar1;
  puVar1 = puStack_44;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_004509c0;
  puStack_48 = (undefined1 *)0x4509b8;
  FUN_004048d4(&local_8,uStack_4c,puVar1);
  return;
}

