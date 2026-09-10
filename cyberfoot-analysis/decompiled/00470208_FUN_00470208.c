// Address: 00470208
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470208(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00470475;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_2 == 0) {
    FUN_00406d44(PTR_PTR_0066b024,&local_8);
    FUN_00406d44(PTR_PTR_0066ad7c,&local_c);
    FUN_00404bac(&local_8,local_c);
    FUN_0040e370(PTR_DAT_00408738,1,local_8);
    FUN_00404250();
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_00406d44(PTR_PTR_0066b024,&local_10);
    FUN_00406d44(PTR_PTR_0066b4a0,&local_14);
    FUN_00404bac(&local_10,local_14);
    FUN_0040e370(PTR_DAT_00408738,1,local_10);
    FUN_00404250();
  }
  iVar2 = FUN_0046e968(*(undefined4 *)(param_2 + 0x14));
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  else if (iVar2 == 2) {
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    if (*(int *)(iVar2 + 4) == 0) {
      if (*(int *)(param_2 + 0x14) == *(int *)(param_1 + 100)) {
        FUN_0046eecc(iVar2,*(undefined4 *)(param_1 + 0x68));
        uVar3 = FUN_0046ee90(*(undefined4 *)(param_1 + 100));
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        FUN_00403a84(*(undefined4 *)(param_1 + 100));
        *(int *)(param_1 + 100) = iVar2;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        FUN_004709f0(param_1);
      }
      else {
        iVar4 = *(int *)(*(int *)(param_2 + 0x14) + 0x18);
        *(int *)(*(int *)(iVar2 + 8) + 0x18) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x14) + 8) =
               *(undefined4 *)(iVar2 + 8);
        }
        else {
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar2 + 8);
        }
        iVar4 = *(int *)(iVar2 + 8);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
        do {
          iVar4 = *(int *)(iVar4 + 0xc);
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
        } while (*(int *)(iVar4 + 0xc) != 0);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(int *)(*(int *)(iVar4 + 0xc) + 0x18) = iVar4;
        }
        FUN_0046f244(param_1,*(undefined4 *)(iVar4 + 0x14));
        FUN_00403a84(*(undefined4 *)(param_2 + 0x14));
        FUN_00403a84(iVar2);
      }
    }
    else {
      iVar4 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_1 + 100) == iVar4) {
        *(int *)(*(int *)(param_1 + 100) + 8) = iVar2;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        uVar3 = FUN_0046ea14(*(undefined4 *)(param_1 + 100));
        FUN_0046eeb8(iVar2,uVar3);
        FUN_0046ed18(iVar2);
      }
      else {
        *(undefined1 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar4 + 8) = 0;
        FUN_00403a84(iVar2);
      }
      FUN_0046f244(param_1,*(undefined4 *)(param_2 + 0x14));
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x14) + 8) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x18) = 0;
      FUN_0046ed18();
    }
    else {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      if (*(int *)(param_2 + 0xc) != 0) {
        *(int *)(*(int *)(param_2 + 0xc) + 0x18) = iVar2;
      }
      uVar3 = FUN_0046ee90(param_2);
      FUN_0046eecc(*(undefined4 *)(param_2 + 0x18),uVar3);
      FUN_0046ed18(*(undefined4 *)(param_2 + 0x18));
    }
    FUN_0046f244(param_1,*(undefined4 *)(param_2 + 0x14));
  }
  FUN_00403a84(param_2);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0047047c;
  puStack_28 = (undefined1 *)0x470474;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

