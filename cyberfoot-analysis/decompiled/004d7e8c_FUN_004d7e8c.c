// Address: 004d7e8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7e8c(int *param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined2 local_a;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d7f01;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_3 != '\0') {
    local_a = 0xfeff;
    FUN_00420b38(param_2,&local_a,2);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  iVar2 = FUN_00405260(local_8);
  uVar3 = FUN_00405250(local_8);
  FUN_00420b38(param_2,uVar3,iVar2 * 2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d7f08;
  puStack_1c = (undefined1 *)0x4d7f00;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

