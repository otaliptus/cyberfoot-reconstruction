// Address: 00406c50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406c50(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00406ce7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00404ff0(param_2);
  if (param_1 != 0) {
    uVar2 = FUN_00404ba4(param_1);
    FUN_004055c4(&local_8,uVar2);
    uVar2 = FUN_00404ba4(param_1);
    iVar3 = FUN_00405260(local_8);
    uVar4 = FUN_00404da4(param_1);
    uVar5 = FUN_00405250(local_8);
    iVar3 = FUN_00406a6c(uVar5,iVar3 + 1,uVar4,uVar2);
    if (iVar3 < 1) {
      FUN_00404ff0(&local_8);
    }
    else {
      FUN_004055c4(&local_8,iVar3 + -1);
    }
    FUN_0040502c(param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00406cee;
  puStack_18 = (undefined1 *)0x406ce6;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

