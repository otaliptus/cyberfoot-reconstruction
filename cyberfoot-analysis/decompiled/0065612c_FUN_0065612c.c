// Address: 0065612c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065612c(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined4 local_108;
  undefined1 local_104 [256];
  
  puStack_118 = &stack0xfffffffc;
  local_108 = 0;
  puStack_11c = &LAB_006562a7;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  uVar1 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)PTR_DAT_0066b48c * 0x2f8);
  iVar3 = FUN_00654844(uVar1,*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b48c * 0x2f8));
  if (iVar3 == -1) {
    iVar3 = FUN_006547c4(uVar1);
  }
  if (iVar3 == -1) {
    if (1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b48c * 0x2f8)) {
      iVar3 = FUN_00655ebc(uVar1);
    }
  }
  if (iVar3 == -1) {
    iVar3 = FUN_006547c4(0xffffffff);
  }
  if (iVar3 == -1) {
    iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b718);
    iVar3 = iVar3 + 1;
    FUN_004060a8(PTR_DAT_0066b718,PTR_DAT_00488ba0,1,iVar3);
    FUN_00656098(&local_108);
    FUN_00404b80(local_104,local_108,0xff);
    FUN_004030e0(*(int *)PTR_DAT_0066b718 + -0x80 + iVar3 * 0x80,local_104,0x19);
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + -100 + iVar3 * 0x80) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + -0x44 + iVar3 * 0x80) = uVar1;
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + -0x60 + iVar3 * 0x80) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + -0x5c + iVar3 * 0x80) =
         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b48c * 0x2f8);
    *(undefined1 *)(*(int *)PTR_DAT_0066b718 + -0x4f + iVar3 * 0x80) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + -0x58 + iVar3 * 0x80) = 0;
  }
  puVar2 = puStack_118;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_006562ae;
  puStack_11c = (undefined1 *)0x6562a6;
  FUN_004048d4(&local_108,uStack_120,puVar2);
  return;
}

