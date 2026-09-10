// Address: 004692c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004692c8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x4692e0;
  iVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  puStack_24 = &LAB_0046938d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_00465c0c(param_1);
  iVar4 = FUN_00469730(param_1);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      iVar5 = FUN_004696f4(param_1,iVar7);
      if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) {
        uVar6 = FUN_004696f4(param_1,iVar7);
        FUN_0041dec0(iVar2,uVar6);
        FUN_00465978(iVar5,(iVar3 - *(int *)(iVar5 + 0x48)) - *(int *)(iVar5 + 0x40));
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = *(int *)(iVar2 + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar8 = 0;
      uVar6 = FUN_0041e01c(iVar2,iVar4);
      FUN_004673cc(uVar6,0xb03e,0,uVar8);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00469394;
  puStack_24 = (undefined1 *)0x46938c;
  FUN_00403a84(iVar2,uStack_28,puVar1);
  return;
}

