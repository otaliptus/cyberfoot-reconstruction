// Address: 004d4bb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4bb0(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004d4c95;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  bVar5 = true;
  FUN_00405378(param_1);
  if (bVar5) {
    FUN_004048d4(param_2);
  }
  else {
    iVar2 = FUN_00405260(param_1);
    FUN_00404f30(param_2,iVar2 * 7);
    local_8 = FUN_00405250(param_1);
    iVar2 = FUN_00405260(param_1);
    local_c = thunk_FUN_00404db0(param_2);
    iVar3 = FUN_00404ba4(*param_2);
    iVar4 = thunk_FUN_00404db0(param_2);
    iVar2 = FUN_004d47e4(&local_8,param_1 + iVar2 * 2,&local_c,0,1,iVar4 + iVar3);
    if (iVar2 != 0) {
      FUN_00406d44(&PTR_DAT_004d4ba0,&local_10);
      FUN_0040e370(PTR_DAT_004d34b4,1,local_10);
      FUN_00404250();
    }
    iVar2 = thunk_FUN_00404db0(param_2);
    FUN_00404f30(param_2,local_c - iVar2);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d4c9c;
  puStack_24 = (undefined1 *)0x4d4c94;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  return;
}

