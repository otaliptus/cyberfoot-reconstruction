// Address: 0042563c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042563c(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004256c2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_00419c28(*(undefined4 *)(param_4 + -0xc));
  uVar1 = **(undefined4 **)(iVar3 + 1);
  FUN_00426644(*(undefined4 *)(param_4 + -4),0xb);
  uVar4 = 0;
  do {
    bVar5 = uVar4 < 0x1f;
    if (uVar4 < 0x20) {
      bVar5 = (param_1 >> (uVar4 & 0x1f) & 1) != 0;
    }
    if (bVar5) {
      FUN_00419c34(uVar1,uVar4,&local_8);
      FUN_0042645c(*(undefined4 *)(param_4 + -4),local_8);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  FUN_0042645c(*(undefined4 *)(param_4 + -4),0);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004256c9;
  puStack_1c = (undefined1 *)0x4256c1;
  FUN_004048d4(&local_8,uStack_20,puVar2);
  return;
}

