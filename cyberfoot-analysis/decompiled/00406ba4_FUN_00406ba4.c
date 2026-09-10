// Address: 00406ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406ba4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00406c43;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004048d4(param_2);
  bVar6 = true;
  FUN_00405378(param_1);
  if (!bVar6) {
    iVar2 = FUN_00405260(param_1);
    FUN_00404f30(&local_8,iVar2 * 3);
    uVar3 = FUN_00405260(param_1);
    iVar2 = FUN_00404ba4(local_8);
    uVar4 = FUN_00405250(param_1);
    uVar5 = FUN_00404da4(local_8);
    iVar2 = FUN_00406990(uVar5,iVar2 + 1,uVar4,uVar3);
    if (iVar2 < 1) {
      FUN_004048d4(&local_8);
    }
    else {
      FUN_00404f30(&local_8,iVar2 + -1);
    }
    FUN_00404928(param_2,local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00406c4a;
  puStack_18 = (undefined1 *)0x406c42;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

