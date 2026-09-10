// Address: 004c2938
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2938(undefined4 param_1,char param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_4c;
  undefined1 local_48 [34];
  undefined1 local_26 [34];
  
  local_4c = 0;
  if (param_2 != '\0') {
    puStack_6c = (undefined1 *)0x4c2952;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
  }
  puStack_70 = &LAB_004c29bf;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  puStack_6c = &stack0xfffffffc;
  FUN_004c2d5c(param_3,local_26);
  cVar2 = FUN_004c4a7c(local_26,local_48,CONCAT22(extraout_var_00,param_5),
                       CONCAT22(extraout_var,param_4));
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b178,&local_4c);
    FUN_004c2530(local_4c);
  }
  FUN_004c2828(param_1,0,local_48);
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_004c29c6;
  puStack_70 = (undefined1 *)0x4c29be;
  FUN_004048d4(&local_4c,uStack_74,puVar1);
  return;
}

