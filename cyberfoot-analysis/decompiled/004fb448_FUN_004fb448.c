// Address: 004fb448
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fb448(ushort param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 uStack_8;
  
  puStack_30 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_1c = (undefined1 *)0x0;
  local_20 = 0;
  uStack_8 = (uint)param_1 << 0x10;
  puStack_34 = &LAB_004fb50c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_10 = -1;
  local_c = param_2;
  iVar3 = (**(code **)(*param_2 + 0x14))();
  iVar4 = local_10;
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar6,&local_14);
      iVar4 = FUN_00404ba4(local_14);
      if (0 < iVar4) {
        (**(code **)(*local_c + 0xc))(local_c,iVar6,&local_1c);
        FUN_00405108(&local_18,*local_1c);
        uVar2 = local_18;
        FUN_00405118(&local_20,CONCAT22(extraout_var,uStack_8._2_2_));
        iVar5 = FUN_00409938(uVar2,local_20);
        iVar4 = iVar6;
        if (iVar5 == 0) break;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
      iVar4 = local_10;
    } while (iVar3 != 0);
  }
  local_10 = iVar4;
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004fb513;
  puStack_34 = (undefined1 *)0x4fb4f3;
  FUN_00404ff0(&local_20,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x4fb4fb;
  FUN_004048d4(&local_1c);
  puStack_34 = (undefined1 *)0x4fb503;
  FUN_00404ff0(&local_18);
  puStack_34 = (undefined1 *)0x4fb50b;
  FUN_004048d4(&local_14);
  return;
}

