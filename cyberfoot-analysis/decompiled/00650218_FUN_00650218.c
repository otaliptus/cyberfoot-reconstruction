// Address: 00650218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00650218(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x650233;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (param_1 <= iVar5 + -1) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130);
    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130) = param_2;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x54 + param_1 * 0x130) = 0;
    iVar6 = *(int *)PTR_DAT_0066b5b8;
    *(undefined4 *)(iVar6 + 0x70 + param_1 * 0x130) = param_4;
    *(undefined4 *)(iVar6 + 0x74 + param_1 * 0x130) = param_5;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + param_1 * 0x130) = 2;
    puStack_24 = &LAB_006502d5;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar6 = FUN_00402c38();
    puVar4 = puStack_20;
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 4 + param_2 * 0x38);
    *piVar1 = *piVar1 + iVar6;
    *in_FS_OFFSET = uStack_28;
    puStack_24 = &LAB_00650328;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar6 = FUN_00402c38(param_1 * 0x26,*(undefined4 *)PTR_DAT_0066b5b8,puVar4);
    puVar4 = puStack_20;
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 4 + iVar5 * 0x38);
    *piVar1 = *piVar1 - iVar6;
    *in_FS_OFFSET = uStack_28;
    iVar6 = *(int *)PTR_DAT_0066af70;
    if ((*(char *)(iVar6 + 0x39 + iVar5 * 0x2f8) != '\0') &&
       (iVar6 = *(int *)PTR_DAT_0066af70, *(char *)(iVar6 + 0x39 + param_2 * 0x2f8) != '\0')) {
      iVar6 = *(int *)PTR_DAT_0066b5b8;
      *(undefined1 *)(iVar6 + 0x85 + param_1 * 0x130) = 1;
    }
    puStack_20 = (undefined1 *)0x650378;
    iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b070,iVar6,puVar4);
    iVar7 = iVar7 + 1;
    puStack_24 = (undefined1 *)0x650391;
    puStack_20 = (undefined1 *)iVar7;
    FUN_004060a8(PTR_DAT_0066b070,PTR_DAT_00488e00,1);
    puVar3 = PTR_DAT_0066b574;
    iVar6 = *(int *)PTR_DAT_0066b070;
    iVar2 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
    *(undefined4 *)(iVar6 + -0x18 + iVar7 * 0x20) =
         *(undefined4 *)(PTR_DAT_0066b574 + iVar2 * 0x18 + -0x10);
    *(undefined4 *)(iVar6 + -0x14 + iVar7 * 0x20) = *(undefined4 *)(puVar3 + iVar2 * 0x18 + -0xc);
    *(int *)(*(int *)PTR_DAT_0066b070 + -0x10 + iVar7 * 0x20) = iVar5;
    *(int *)(*(int *)PTR_DAT_0066b070 + -0xc + iVar7 * 0x20) = param_2;
    *(undefined4 *)(*(int *)PTR_DAT_0066b070 + -8 + iVar7 * 0x20) = 0;
    *(int *)(*(int *)PTR_DAT_0066b070 + -0x20 + iVar7 * 0x20) = param_1;
    if (((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + param_1 * 0x130) != '\0') &&
        (*(int *)(PTR_DAT_0066ac78 + 8) != param_2)) &&
       (0x16 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_2 * 0x2f8))) {
      uStack_28 = 0;
      puStack_24 = (undefined1 *)param_2;
      puStack_20 = (undefined1 *)param_1;
      FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),9,0);
    }
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + param_1 * 0x130) = 3;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xec + param_1 * 0x130) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xf8 + param_1 * 0x130) = 0;
    *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + param_1 * 0x130) = 0;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0xf5 + param_1 * 0x130) = 0;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + param_1 * 0x130) = 0;
    iVar6 = *(int *)PTR_DAT_0066b5b8;
    iVar2 = *(int *)PTR_DAT_0066b5b8;
    *(undefined4 *)(iVar6 + 0x48 + param_1 * 0x130) =
         *(undefined4 *)(iVar2 + 0x40 + param_1 * 0x130);
    *(undefined4 *)(iVar6 + 0x4c + param_1 * 0x130) =
         *(undefined4 *)(iVar2 + 0x44 + param_1 * 0x130);
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + iVar5 * 0x2f8) == param_1) {
      puStack_20 = (undefined1 *)0x6504ef;
      FUN_0065156c(iVar5);
    }
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) != '\0') &&
       (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0')) {
      *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x85 + param_1 * 0x130) = 1;
    }
    puStack_20 = (undefined1 *)0x650531;
    FUN_00652988(iVar5);
    puStack_20 = (undefined1 *)0x650539;
    FUN_00652988(param_2);
  }
  return;
}

