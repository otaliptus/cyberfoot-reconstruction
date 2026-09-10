// Address: 00413378
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00413378(undefined2 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20 [3];
  uint local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_20[0] = 0;
  local_10 = 0;
  puStack_2c = &LAB_00413466;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00415af4(&local_10,param_1);
  FUN_00404b6c(local_20,local_10);
  cVar2 = FUN_0040a0b0(local_20[0],&local_c);
  if (cVar2 == '\0') {
    iVar3 = (**(code **)PTR_DAT_0066b704)();
    if (iVar3 == 0) {
      local_8 = (int)local_14 >> 0x1f;
      local_c = local_14;
    }
    else {
      iVar3 = (**(code **)PTR_DAT_0066b2f4)();
      if (iVar3 == 0) {
        local_c = FUN_00402c38();
        local_8 = extraout_EDX;
      }
      else if (iVar3 == -0x7ffdfffb) {
        local_c = FUN_00413b2c(param_1);
        local_c = local_c & 0x7f;
        local_8 = 0;
      }
      else {
        FUN_00411994(iVar3,CONCAT22(extraout_var_00,*param_1),CONCAT22(extraout_var,0x14));
        local_c = 0;
        local_8 = 0;
      }
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0041346d;
  puStack_2c = (undefined1 *)0x41345d;
  FUN_004048d4(local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x413465;
  FUN_00404ff0(&local_10);
  return;
}

