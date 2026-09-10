// Address: 004e1824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1824(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004e1899;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004e18b0(param_1,&local_8);
  cVar2 = FUN_004da9b4(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar2 != '\0') {
    cVar2 = FUN_00403c80(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xc4))();
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_004e1883;
    }
  }
  FUN_00469750(param_1,param_2);
LAB_004e1883:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e18a0;
  puStack_1c = (undefined1 *)0x4e1898;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

