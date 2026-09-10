// Address: 004c2870
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2870(undefined4 param_1,char param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [34];
  undefined1 local_26 [34];
  
  local_50 = 0;
  local_4c = 0;
  if (param_2 != '\0') {
    puStack_70 = (undefined1 *)0x4c288d;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_74 = &LAB_004c2910;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  FUN_0040bdc0(&local_4c);
  FUN_004c2d5c(local_4c,local_26);
  cVar2 = FUN_004c4a7c(local_26,local_48,param_3,param_4);
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b178,&local_50);
    FUN_004c2530(local_50);
  }
  FUN_004c2828(param_1,0,local_48);
  puVar1 = puStack_70;
  *in_FS_OFFSET = uStack_78;
  puStack_70 = &LAB_004c2917;
  puStack_74 = (undefined1 *)0x4c290f;
  FUN_004048f8(&local_50,2,puVar1);
  return;
}

