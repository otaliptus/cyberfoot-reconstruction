// Address: 004d7034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7034(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_18 = 0;
  local_14 = 0;
  puStack_20 = (undefined1 *)0x4d7054;
  local_10 = param_2;
  local_c = param_1;
  local_8 = param_3;
  FUN_00404d94(param_4);
  puStack_24 = &LAB_004d711b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)(local_c + 4) = local_8;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_004195b4(local_8,param_4,DAT_004d712c);
  *(int *)(local_c + 8) = iVar1;
  if (iVar1 != 0) {
    puVar4 = &LAB_004d6e10;
    pcVar3 = FUN_004d6eb8;
    iVar1 = local_c;
    iVar5 = local_c;
    uVar2 = FUN_004d6f48();
    FUN_00404bf0(&local_14,param_4,&DAT_004d7138,uVar2,pcVar3,iVar1,puVar4,iVar5);
    (**(code **)(*local_10 + 4))(local_10,local_14,uVar2);
    FUN_00404bf0(&local_18,param_4,"_UTF7",0,0,FUN_004d6e30,local_c);
    (**(code **)(*local_10 + 4))(local_10,local_18,0);
  }
  puVar4 = puStack_20;
  *(undefined4 *)(local_c + 4) = 0;
  *(undefined4 *)(local_c + 8) = 0;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d7122;
  puStack_24 = (undefined1 *)0x4d7112;
  FUN_004048f8(&local_18,2,puVar4);
  puStack_24 = (undefined1 *)0x4d711a;
  FUN_004048d4(&param_4);
  return;
}

