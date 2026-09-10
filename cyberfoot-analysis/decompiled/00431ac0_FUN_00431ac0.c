// Address: 00431ac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00431ac0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_e [6];
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar1 + 0xc) == 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      puStack_20 = (undefined1 *)0x431ae3;
      FUN_0042b88c();
    }
    puStack_20 = (undefined1 *)0x431aef;
    local_8 = FUN_00403a54(PTR_PTR_0041c090,1);
    puStack_24 = &LAB_00431b4d;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_00431a0c(param_1);
    if (iVar2 == DAT_0066c8ac) {
      FUN_004032a8(local_e,6,0);
      FUN_00420b38(local_8,local_e,6);
    }
    else {
      uVar3 = FUN_00431a0c(param_1);
      FUN_0042c924(local_8,uVar3,0);
    }
    *in_FS_OFFSET = uStack_28;
    *(undefined4 *)(iVar1 + 0xc) = local_8;
  }
  return;
}

