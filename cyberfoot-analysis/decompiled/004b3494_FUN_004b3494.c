// Address: 004b3494
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b3494(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;
  
  puStack_1c = (undefined1 *)0x4b34aa;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_20 = &LAB_004b3509;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = *(int *)(param_1 + 8);
  puStack_1c = &stack0xfffffffc;
  if (0 < iVar4) {
    iVar3 = 1;
    puStack_1c = &stack0xfffffffc;
    do {
      uVar5 = iVar3 == 1;
      iVar2 = FUN_004b351c(param_1);
      FUN_00404cf0(*(undefined4 *)(iVar2 + 0x40),local_8);
      if ((bool)uVar5) {
        FUN_004b351c(param_1,iVar3 + -1);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004b3510;
  puStack_20 = (undefined1 *)0x4b3508;
  FUN_004048d4(&local_8,uStack_24,puVar1);
  return;
}

