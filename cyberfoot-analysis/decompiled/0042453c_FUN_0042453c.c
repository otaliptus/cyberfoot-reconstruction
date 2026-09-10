// Address: 0042453c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042453c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  puStack_20 = &LAB_004245ce;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00426644(param_1,0xe);
  if (param_2 != 0) {
    iVar2 = FUN_0041edb0(param_2);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        FUN_00424dc8(param_1);
        uVar3 = FUN_0041edb8(param_2,iVar4);
        FUN_00424e1c(param_1,uVar3);
        FUN_00424dd0(param_1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00424dd0(param_1);
  *in_FS_OFFSET = uStack_24;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

