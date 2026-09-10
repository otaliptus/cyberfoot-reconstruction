// Address: 004f8020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f8020(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  puStack_54 = (undefined1 *)0x4f8043;
  local_8 = param_3;
  FUN_00405628(local_44,PTR_DAT_00508a00);
  puStack_58 = &LAB_004f818c;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  FUN_00510bcc(param_1,param_2,local_8,param_4);
  puVar3 = local_44;
  (**(code **)(*param_1 + 0xfc))(param_1,param_2,local_8);
  iVar1 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  thunk_FUN_0040502c(&local_c,local_28);
  switch(*(undefined1 *)(iVar1 + 0x3c)) {
  case 0:
    *(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x18) = local_8;
    break;
  case 1:
    *(undefined1 *)(*(int *)(iVar1 + 0x48) + 4) = local_44[0];
    break;
  case 3:
    iVar1 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 8) = uStack_3c;
    *(undefined4 *)(iVar1 + 0xc) = uStack_38;
    break;
  case 4:
    iVar1 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x10) = uStack_34;
    *(undefined4 *)(iVar1 + 0x14) = uStack_30;
    break;
  case 5:
    *(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x38) = uStack_14;
    break;
  case 6:
    FUN_0040502c(*(int *)(iVar1 + 0x48) + 0x1c,local_28);
    break;
  case 7:
    *(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x18) = uStack_2c;
    break;
  case 8:
    FUN_0040502c(*(int *)(iVar1 + 0x48) + 0x1c,local_28);
    break;
  case 0xb:
    FUN_0040502c(*(int *)(iVar1 + 0x48) + 0x1c,local_28);
  }
  uVar2 = CONCAT31((int3)((uint)local_c >> 8),param_4);
  (**(code **)(*param_1 + 0x14c))(param_1,param_2,local_8,uVar2,local_c);
  *in_FS_OFFSET = uVar2;
  FUN_004056f8(local_44,PTR_DAT_00508a00,puVar3,&LAB_004f8193);
  FUN_00404ff0(&local_c);
  return;
}

