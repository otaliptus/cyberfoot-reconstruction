// Address: 0042d610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d610(int param_1,int param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *piStack_18;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != 0) {
    piStack_18 = (int *)0x42d62b;
    iVar1 = FUN_004039cc(param_2);
    piStack_18 = (int *)0x42d630;
    local_8 = (int *)(**(code **)(iVar1 + 0x48))(iVar1,1);
    piStack_18 = (int *)0x42d63d;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[5] = param_1;
    puStack_1c = (undefined1 *)0x42d64f;
    piStack_18 = local_8;
    iVar1 = FUN_00403c98(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[4] = iVar1;
    local_8[7] = param_1;
    puStack_1c = (undefined1 *)0x42d667;
    piStack_18 = local_8;
    iVar1 = FUN_00403c98(param_1,0xfffc);
    piStack_18[6] = iVar1;
  }
  puStack_1c = &LAB_0042d6a0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  FUN_00403a84(*(undefined4 *)(param_1 + 0xc));
  *(int **)(param_1 + 0xc) = local_8;
  FUN_00403c80(param_1,param_1);
  *in_FS_OFFSET = uStack_20;
  return;
}

