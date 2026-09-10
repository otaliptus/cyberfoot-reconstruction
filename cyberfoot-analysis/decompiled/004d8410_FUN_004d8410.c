// Address: 004d8410
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d8410(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  uVar3 = 1;
  puStack_2c = &LAB_004d84d1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_004d83a8(param_2,param_3,&local_8);
  FUN_00405378(param_1,local_8);
  if (!(bool)uVar3) {
    FUN_00404b6c(&local_10,param_1);
    FUN_004051d4(&local_c,local_10);
    cVar2 = FUN_00409920(param_1,local_c);
    uVar3 = cVar2 == '\0';
    if ((bool)uVar3) {
      FUN_00404b6c(&local_14,param_1);
      FUN_00404cf0(param_3,local_14);
      if ((bool)uVar3) {
        (*param_4)(param_5,0);
      }
    }
    FUN_0040502c(param_2,param_1);
    FUN_00404b6c(&local_18,param_1);
    (*param_4)(param_5,local_18);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004d84d8;
  puStack_2c = (undefined1 *)0x4d84c3;
  FUN_004048f8(&local_18,3,puVar1);
  puStack_2c = (undefined1 *)0x4d84d0;
  FUN_00405008(&local_c,2);
  return;
}

