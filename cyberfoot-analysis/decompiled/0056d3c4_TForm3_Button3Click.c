// Address: 0056d3c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Button3Click(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 **local_28;
  undefined1 *local_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  iVar3 = 0xd;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_24 = &LAB_0056d531;
  local_28 = (undefined1 **)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if (DAT_0067b4c9 == '\0') {
    local_2c = 0x56d402;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        local_28 = (undefined1 **)0x0;
        local_30 = (undefined1 *)0x56d41a;
        FUN_00416244(&stack0xffffffec,iVar4,0xfc);
        local_30 = &stack0xffffffec;
        puStack_34 = (undefined1 *)0x56d42b;
        FUN_00416478(&local_24,"erros");
        puVar1 = local_30;
        local_30 = (undefined1 *)0x56d43a;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),&local_24,puVar1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_2c = 0x56d44c;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        local_28 = &local_30;
        local_30 = (undefined1 *)0x56d46a;
        FUN_00416244(local_40,iVar4,0xfc);
        local_30 = local_40;
        puStack_34 = (undefined1 *)0x56d47b;
        FUN_00416478(local_50,&DAT_0056d558);
        puVar1 = local_30;
        local_30 = (undefined1 *)0x56d48a;
        FUN_0050e448(*(undefined4 *)(param_1 + 0x2f8),local_50,puVar1);
        puVar1 = local_30;
        local_30 = (undefined1 *)0x56d495;
        FUN_00404b6c(&local_2c,puVar1);
        local_30 = (undefined1 *)0x56d49d;
        uVar2 = FUN_00409ff8(local_2c);
        local_30 = (undefined1 *)0x56d4a9;
        TForm3_getcamisa(param_1,uVar2,&local_28);
        if (local_28 == (undefined1 **)0x0) {
          local_28 = (undefined1 **)&DAT_0056d560;
          puStack_34 = (undefined1 *)0x56d4c0;
          FUN_00416244(local_60,iVar4,0xfc);
          puStack_34 = local_60;
          uStack_38 = 0x56d4d1;
          FUN_00416478(local_70,"erros");
          puVar1 = puStack_34;
          puStack_34 = (undefined1 *)0x56d4e0;
          FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_70,puVar1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0056d538;
  local_24 = (undefined1 *)0x56d508;
  FUN_00405744(local_70,PTR_DAT_004010f8,4);
  local_24 = (undefined1 *)0x56d510;
  FUN_00404ff0(&local_30);
  local_24 = (undefined1 *)0x56d51d;
  FUN_004048f8(&local_2c,2);
  local_24 = (undefined1 *)0x56d530;
  FUN_00405744(&local_24,PTR_DAT_004010f8,2);
  return;
}

