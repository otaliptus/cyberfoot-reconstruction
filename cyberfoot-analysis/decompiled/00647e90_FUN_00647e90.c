// Address: 00647e90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00647e90(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  puStack_118 = (undefined1 *)0x647ea9;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puVar1 = PTR_DAT_0066b718;
  puStack_11c = &LAB_00647f87;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  iVar3 = FUN_00405eec(*(undefined4 *)puVar1);
  FUN_004060a8(puVar1,PTR_DAT_00488ba0,1,iVar3 + 1);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  iVar3 = *(int *)puVar1 + iVar3 * 0x80;
  FUN_00404b80(local_108,local_8,0xff);
  FUN_004030e0(iVar3,local_108,0x19);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x80) = param_1;
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 0x24 + iVar3 * 0x80) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 0x3c + iVar3 * 0x80) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  puVar2 = puStack_118;
  *(undefined4 *)(*(int *)puVar1 + 0x1c + iVar3 * 0x80) = 0xffffffff;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00647f8e;
  puStack_11c = (undefined1 *)0x647f86;
  FUN_004048d4(&local_8,uStack_120,puVar2);
  return;
}

