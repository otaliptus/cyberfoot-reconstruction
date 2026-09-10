// Address: 0046c50c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c50c(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46c521;
  FUN_00469298(param_1);
  puStack_18 = &LAB_0046c5aa;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0046c4c4(param_1,param_2,param_3);
  if (((param_3 != param_2) && ((*(byte *)(param_1 + 0x1c) & 2) != 0)) &&
     ((*(byte *)(param_1 + 0x98) & 0x20) != 0)) {
    iVar2 = MulDiv(*(int *)(param_1 + 0x1fa),param_2,param_3);
    *(int *)(param_1 + 0x1fa) = iVar2;
    iVar2 = MulDiv(*(int *)(param_1 + 0x1fe),param_2,param_3);
    *(int *)(param_1 + 0x1fe) = iVar2;
  }
  FUN_00465e24(param_1,param_2,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046c5b1;
  puStack_18 = (undefined1 *)0x46c5a9;
  FUN_004692a0(param_1,uStack_1c,puVar1);
  return;
}

