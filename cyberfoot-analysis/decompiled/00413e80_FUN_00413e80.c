// Address: 00413e80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00413e80(undefined2 *param_1)

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
  double *pdVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  float10 local_1c;
  undefined4 local_10;
  double local_c;
  
  puStack_28 = &stack0xfffffffc;
  local_20 = 0;
  local_10 = 0;
  puStack_2c = &LAB_00413f35;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00415af4(&local_10,param_1);
  pdVar6 = &local_c;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_10;
  iVar2 = (**(code **)PTR_DAT_0066b2f4)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00404b6c(&local_20,local_10);
    cVar1 = FUN_0040bf28(local_20,&local_1c);
    if (cVar1 == '\0') {
      FUN_00411994(0x80020005,CONCAT22(extraout_var_01,*param_1),CONCAT22(extraout_var_00,5),uVar3,
                   uVar4,uVar5,pdVar6);
    }
    else {
      local_c = (double)local_1c;
    }
  }
  else if (iVar2 != 0) {
    FUN_00411994(iVar2,*param_1,CONCAT22(extraout_var,5),uVar3,uVar4,uVar5,pdVar6);
  }
  *in_FS_OFFSET = uVar3;
  FUN_004048d4(&local_20,uVar3,uVar5,&LAB_00413f3c);
  FUN_00404ff0(&local_10);
  return;
}

