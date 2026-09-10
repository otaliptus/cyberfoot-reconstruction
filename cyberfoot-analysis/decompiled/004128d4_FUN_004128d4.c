// Address: 004128d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004128d4(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_00412977;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00415af4(&local_c,param_1);
  puVar6 = &local_8;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_c;
  iVar2 = (**(code **)PTR_DAT_0066b704)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00404b6c(&local_10,local_c);
    cVar1 = FUN_0040a04c(local_10,&local_8);
    if (cVar1 == '\0') {
      local_8 = FUN_00413b2c(param_1);
      local_8 = local_8 & 0x7f;
    }
  }
  else if (iVar2 != 0) {
    FUN_00411994(iVar2,*param_1,CONCAT22(extraout_var,3),uVar3,uVar4,uVar5,puVar6);
  }
  *in_FS_OFFSET = uVar3;
  FUN_004048d4(&local_10,uVar3,uVar5,&LAB_0041297e);
  FUN_00404ff0(&local_c);
  return;
}

