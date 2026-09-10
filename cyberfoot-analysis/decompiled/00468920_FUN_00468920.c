// Address: 00468920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468920(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(int *)(param_1 + 0x19c) != 0) {
    puStack_1c = (undefined1 *)0x468947;
    uVar3 = FUN_00403a54(PTR_PTR_0041b73c,1);
    puStack_20 = &LAB_004689e4;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    iVar6 = *(int *)(*(int *)(param_1 + 0x19c) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_0041e214(uVar3,iVar6);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      iVar5 = iVar6;
      do {
        iVar4 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),iVar7);
        iVar1 = *(int *)(iVar4 + 0x1a0);
        if ((-1 < iVar1) && (iVar1 < iVar6)) {
          FUN_0041e168(uVar3,iVar1,iVar4);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (-1 < iVar6 + -1) {
      iVar5 = 0;
      do {
        iVar7 = FUN_0041e01c(uVar3,iVar5);
        if (iVar7 != 0) {
          FUN_0046cca0(iVar7,iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar2 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4689eb;
    puStack_20 = (undefined1 *)0x4689e3;
    FUN_00403a84(uVar3,uStack_24,puVar2);
    return;
  }
  return;
}

