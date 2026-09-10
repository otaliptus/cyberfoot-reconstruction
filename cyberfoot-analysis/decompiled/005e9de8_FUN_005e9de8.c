// Address: 005e9de8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e9de8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined1 *local_34;
  undefined4 *local_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  iVar3 = 5;
  do {
    local_c = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_005e9f1a;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  iVar3 = 0;
  local_30 = &local_10;
  local_34 = (undefined1 *)0x5e9e26;
  local_8 = param_2;
  FUN_00416244(&stack0xffffffe0,0,0xfc);
  local_34 = &stack0xffffffe0;
  FUN_00416478(&local_30,"nxstatus");
  puVar1 = local_34;
  local_34 = (undefined1 *)0x5e9e46;
  FUN_0050e448(*(undefined4 *)(param_1 + 0x304),&local_30,puVar1);
  local_34 = (undefined1 *)0x5e9e51;
  FUN_00404b6c(&local_c,local_10);
  local_34 = (undefined1 *)0x5e9e59;
  uVar2 = FUN_00409ff8(local_c);
  switch(uVar2) {
  case 0:
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + local_8 * 0x130) + 0x3e;
    break;
  case 1:
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + local_8 * 0x130);
    break;
  case 2:
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + local_8 * 0x130) + 0x1f;
    break;
  case 3:
    iVar3 = 0x5d;
    break;
  case 4:
    iVar3 = 0x5e;
    break;
  case 5:
    iVar3 = 0x5e;
  }
  local_34 = (undefined1 *)0x5e9ed6;
  FUN_00409dd8(iVar3,&local_34);
  puVar1 = local_34;
  local_34 = (undefined1 *)0x5e9ee1;
  FUN_004051d4(param_4,puVar1);
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)local_30;
  puStack_28 = &LAB_005e9f21;
  iStack_2c = 0x5e9ef6;
  FUN_004048d4(&local_34,local_30,puVar1);
  iStack_2c = 0x5e9f09;
  FUN_00405744(&local_30,PTR_DAT_004010f8,2);
  iStack_2c = 0x5e9f11;
  FUN_00404ff0(&local_10);
  iStack_2c = 0x5e9f19;
  FUN_004048d4(&local_c);
  return;
}

