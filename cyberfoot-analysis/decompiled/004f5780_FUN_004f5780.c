// Address: 004f5780
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f5780(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  puStack_24 = (undefined1 *)0x4f579e;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_28 = &LAB_004f585c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = 0;
  puStack_24 = &stack0xfffffffc;
  FUN_004048d4(&local_10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar2 = FUN_00404ba4(local_8);
  if (0 < iVar2) {
    iVar5 = 1;
    do {
      if ((byte)(*(char *)(local_8 + -1 + iVar5) - 0x30U) < 10) {
        FUN_00404abc(&local_14,*(undefined1 *)(local_8 + -1 + iVar5));
        FUN_00404bac(&local_10,local_14);
      }
      if (*(char *)(local_8 + -1 + iVar5) == '.') {
LAB_004f581c:
        uVar4 = FUN_00409ff8(local_10);
        param_2[local_c] = uVar4;
        local_c = local_c + 1;
        FUN_004048d4(&local_10);
      }
      else {
        iVar3 = FUN_00404ba4(local_8);
        if (iVar5 == iVar3) goto LAB_004f581c;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f5863;
  puStack_28 = (undefined1 *)0x4f5853;
  FUN_004048f8(&local_14,2,puVar1);
  puStack_28 = (undefined1 *)0x4f585b;
  FUN_004048d4(&local_8);
  return;
}

