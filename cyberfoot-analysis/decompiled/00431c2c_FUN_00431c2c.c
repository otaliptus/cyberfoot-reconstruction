// Address: 00431c2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431c2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x431c45;
  iVar1 = FUN_00403a54(PTR_PTR_00429460,1);
  puStack_1c = &LAB_00431c6c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *in_FS_OFFSET = uStack_20;
  uStack_18 = 0x431c8b;
  FUN_0042f210(iVar1,uStack_20,&stack0xfffffffc);
  uStack_18 = 0x431c93;
  FUN_0042f214(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}

