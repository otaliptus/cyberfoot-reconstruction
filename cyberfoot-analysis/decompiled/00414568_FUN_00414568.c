// Address: 00414568
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00414568(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  local_10 = 0;
  puStack_30 = &LAB_00414644;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00415af4(&local_10,param_1);
  puVar6 = &local_c;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_10;
  iVar2 = (**(code **)PTR_DAT_0066af14)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00404b6c(&local_20,local_10);
    cVar1 = FUN_0040d9d0(local_20,&local_c);
    if (cVar1 == '\0') {
      FUN_00404b6c(&local_24,local_10);
      cVar1 = FUN_0040bf44(local_24,&local_1c);
      if (cVar1 == '\0') {
        FUN_00411994(0x80020005,CONCAT22(extraout_var_01,*param_1),CONCAT22(extraout_var_00,7));
      }
      else {
        local_c = local_1c;
        local_8 = local_18;
      }
    }
  }
  else if (iVar2 != 0) {
    FUN_00411994(iVar2,*param_1,CONCAT22(extraout_var,7),uVar3,uVar4,uVar5,puVar6);
  }
  *in_FS_OFFSET = uVar3;
  FUN_004048f8(&local_24,2,uVar5,&LAB_0041464b);
  FUN_00404ff0(&local_10);
  return;
}

