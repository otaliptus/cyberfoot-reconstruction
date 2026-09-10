// Address: 00421928
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421928(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (DAT_0066c868 == 0) {
    return;
  }
  puStack_1c = (undefined1 *)0x42194e;
  iVar3 = FUN_0041e41c(DAT_0066c868);
  puStack_20 = &LAB_004219c3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = *(int *)(iVar3 + 8) + -1;
  puStack_1c = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar5) {
    do {
      iVar4 = FUN_0041e01c(iVar3,iVar5);
      if ((param_1 == 0) || (*(int *)(iVar4 + 8) == param_1)) {
        if (param_2 != 0) {
          cVar2 = FUN_004096cc(param_2,*(undefined4 *)(iVar4 + 0x10));
          if (cVar2 == '\0') goto LAB_004219a5;
        }
        FUN_0041df0c(iVar3,iVar5);
        FUN_00403a84(iVar4);
      }
LAB_004219a5:
      iVar5 = iVar5 + -1;
      puVar1 = puStack_1c;
    } while (iVar5 != -1);
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x4219ca;
  puStack_20 = (undefined1 *)0x4219c2;
  FUN_0041e480(DAT_0066c868,uStack_24,puVar1);
  return;
}

