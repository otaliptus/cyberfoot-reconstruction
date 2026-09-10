// Address: 00413974
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00413974(undefined2 *param_1)

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
  short *psVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  short local_e;
  undefined4 local_c;
  char local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  local_c = 0;
  puStack_20 = &LAB_00413a2b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00415af4(&local_c,param_1);
  psVar6 = &local_e;
  uVar5 = 0;
  uVar4 = 0x400;
  uVar3 = local_c;
  iVar2 = (**(code **)PTR_DAT_0066b21c)();
  if (iVar2 == -0x7ffdfffb) {
    FUN_00404b6c(&local_14,local_c);
    cVar1 = FUN_0040a1d0(local_14,&local_5);
    if (cVar1 == '\0') {
      FUN_00411994(0x80020005,CONCAT22(extraout_var_01,*param_1),CONCAT22(extraout_var_00,0xb),uVar3
                   ,uVar4,uVar5,psVar6);
    }
  }
  else if (iVar2 == 0) {
    local_5 = '\x01' - (local_e == 0);
  }
  else {
    FUN_00411994(iVar2,*param_1,CONCAT22(extraout_var,0xb),uVar3,uVar4,uVar5,psVar6);
  }
  *in_FS_OFFSET = uVar3;
  FUN_004048d4(&local_14,uVar3,uVar5,&LAB_00413a32);
  FUN_00404ff0(&local_c);
  return;
}

