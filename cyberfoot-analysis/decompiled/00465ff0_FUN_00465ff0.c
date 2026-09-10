// Address: 00465ff0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465ff0(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00466086;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x50) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 0x1c) & 1) == 0, puVar3 = &stack0xfffffffc, (bool)uVar5)) {
    FUN_00466208(param_1,&local_c);
    FUN_00404cf0(*(undefined4 *)(param_1 + 8),local_c);
    puVar3 = puStack_1c;
    if ((bool)uVar5) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        cVar4 = FUN_00403c10(iVar1,PTR_PTR_004618b0);
        if ((cVar4 != '\0') && (puVar3 = puStack_1c, (*(byte *)(iVar1 + 0x1c) & 1) != 0))
        goto LAB_00466052;
      }
      bVar2 = true;
      goto LAB_00466058;
    }
  }
LAB_00466052:
  puStack_1c = puVar3;
  bVar2 = false;
LAB_00466058:
  FUN_004273b0(param_1,local_8);
  if (bVar2) {
    FUN_00466238(param_1,local_8);
  }
  puVar3 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046608d;
  puStack_20 = (undefined1 *)0x466085;
  FUN_004048d4(&local_c,uStack_24,puVar3);
  return;
}

