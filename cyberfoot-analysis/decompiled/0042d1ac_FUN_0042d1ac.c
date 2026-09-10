// Address: 0042d1ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d1ac(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined1 local_10c [256];
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = 0;
  puStack_120 = &LAB_0042d22a;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iVar3 = *(int *)(param_1 + 8) + -1;
  uVar4 = iVar3 == 0;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (-1 < iVar3) {
    do {
      puStack_11c = puVar1;
      puVar2 = (undefined4 *)FUN_0041e01c(param_1,iVar3);
      FUN_004039d4(*puVar2,local_10c);
      FUN_00404b48(&local_c,local_10c);
      FUN_00404cf0(local_c,local_8);
      if ((bool)uVar4) break;
      iVar3 = iVar3 + -1;
      uVar4 = iVar3 == -1;
      puVar1 = puStack_11c;
    } while (!(bool)uVar4);
  }
  puVar1 = puStack_11c;
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0042d231;
  puStack_120 = (undefined1 *)0x42d229;
  FUN_004048d4(&local_c,uStack_124,puVar1);
  return;
}

