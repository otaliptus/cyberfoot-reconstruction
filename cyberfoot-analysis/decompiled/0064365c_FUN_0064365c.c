// Address: 0064365c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064365c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = (undefined1 *)0x64366d;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_18 = &LAB_006436ba;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_00404ba4(local_8);
  puVar1 = puStack_14;
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006436c1;
  puStack_18 = (undefined1 *)0x6436b9;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

