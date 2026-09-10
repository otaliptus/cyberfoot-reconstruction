// Address: 0042d6c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d6c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_2c = &LAB_0042d7e4;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined4 *)0x42d6ed;
  FUN_0040a668(param_2,&local_8);
  puStack_34 = (undefined4 *)0x42d6ff;
  FUN_00404e44(&local_8,1,1);
  puStack_34 = (undefined4 *)0x42d70c;
  iVar3 = FUN_0042d114(DAT_00662954,local_8);
  if (iVar3 == 0) {
    local_14 = local_8;
    local_10 = 0xb;
    puStack_34 = &local_14;
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0x42d72d;
    FUN_00406d44(PTR_PTR_0066b78c,&local_18);
    uStack_3c = 0x42d73c;
    FUN_0040e3ac(PTR_DAT_0042852c,1,local_18);
    uStack_3c = 0x42d741;
    iVar3 = FUN_00404250();
  }
  puStack_34 = (undefined4 *)0x42d746;
  piVar4 = (int *)(**(code **)(iVar3 + 0x48))(iVar3,1);
  puStack_38 = &LAB_0042d783;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piVar4[7] = param_1;
  puStack_34 = (undefined4 *)&stack0xfffffffc;
  local_c = piVar4;
  iVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xfffc));
  piVar4[6] = iVar3;
  (**(code **)(*local_c + 0x4c))(local_c,param_2);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = (undefined4 *)0x42d7a2;
  FUN_00403a84(*(undefined4 *)(param_1 + 0xc),uStack_3c,puVar1);
  piVar4 = local_c;
  *(int **)(param_1 + 0xc) = local_c;
  local_c[5] = param_1;
  puStack_34 = (undefined4 *)0x42d7b6;
  iVar3 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar4[4] = iVar3;
  puStack_34 = (undefined4 *)0x42d7c6;
  FUN_00403c80(param_1,param_1);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0042d7eb;
  puStack_2c = (undefined1 *)0x42d7db;
  FUN_004048d4(&local_18,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x42d7e3;
  FUN_004048d4(&local_8);
  return;
}

