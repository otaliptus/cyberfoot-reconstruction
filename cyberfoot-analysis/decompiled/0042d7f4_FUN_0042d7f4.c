// Address: 0042d7f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d7f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x42d810;
  iVar2 = FUN_0042d3fc(DAT_00662950,param_2);
  if (iVar2 == 0) {
    puStack_1c = (undefined1 *)0x42d820;
    FUN_0042b868(PTR_PTR_0066b3dc);
  }
  puStack_1c = (undefined1 *)0x42d827;
  piVar3 = (int *)(**(code **)(iVar2 + 0x48))(iVar2,1);
  puStack_20 = &LAB_0042d86b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar3[7] = param_1;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xfffc));
  piVar3[6] = iVar2;
  (**(code **)(*piVar3 + 0x5c))(piVar3,param_2,param_3);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_4;
  puStack_20 = (undefined1 *)0x42d88a;
  FUN_00403a84(*(undefined4 *)(param_1 + 0xc),param_4,puVar1);
  *(int **)(param_1 + 0xc) = piVar3;
  piVar3[5] = param_1;
  puStack_20 = (undefined1 *)0x42d89e;
  iVar2 = FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar3[4] = iVar2;
  puStack_20 = (undefined1 *)0x42d8ae;
  FUN_00403c80(param_1,param_1);
  return;
}

