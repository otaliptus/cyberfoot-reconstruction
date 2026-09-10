// Address: 0048471c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048471c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_004847f3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar3 = FUN_0046b49c(param_1);
  if (iVar3 == 1) {
    iVar3 = FUN_0046617c(local_8);
    FUN_004049c4(&local_10,0,iVar3 + 1);
    uVar4 = FUN_00404ba4(local_10);
    uVar5 = FUN_00404da4(local_10);
    FUN_0046618c(local_8,uVar5,uVar4);
    iVar3 = FUN_00404ba4(local_10);
    if (0 < iVar3) {
      iVar6 = 1;
      do {
        cVar1 = *(char *)(local_10 + -1 + iVar6);
        if ((cVar1 == '\n') || (cVar1 == '\r')) {
          FUN_00404f30(&local_10,iVar6 + -1);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00466238(param_1,local_10);
  }
  FUN_0046b308(param_1,local_8,local_c);
  FUN_0046571c(local_8,5);
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    FUN_00480858(param_1,1);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004847fa;
  puStack_20 = (undefined1 *)0x4847f2;
  FUN_004048d4(&local_10,uStack_24,puVar2);
  return;
}

