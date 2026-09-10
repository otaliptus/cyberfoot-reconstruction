// Address: 00469ff8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469ff8(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (((*(char *)((int)param_1 + 0x57) == '\0') &&
      (((*(byte *)(param_1 + 7) & 0x10) == 0 || ((*(byte *)((int)param_1 + 0x51) & 4) != 0)))) ||
     ((*(byte *)(param_1 + 0x15) & 8) != 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    if (param_1[0x60] == 0) {
      puStack_1c = (undefined1 *)0x46a04e;
      (**(code **)(*param_1 + 0x94))();
    }
    if ((param_1[0x67] != 0) && (iVar2 = *(int *)(param_1[0x67] + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        puStack_1c = (undefined1 *)0x46a076;
        FUN_0041e01c(param_1[0x67],iVar3);
        puStack_1c = (undefined1 *)0x46a07b;
        FUN_00469ff8();
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if ((param_1[0x60] != 0) && (*(char *)((int)param_1 + 0x1a6) != cVar1)) {
    *(char *)((int)param_1 + 0x1a6) = cVar1;
    puStack_20 = &LAB_0046a0ce;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_004673cc(param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}

