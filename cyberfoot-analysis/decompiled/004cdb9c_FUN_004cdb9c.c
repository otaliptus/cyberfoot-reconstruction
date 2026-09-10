// Address: 004cdb9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cdb9c(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4cdbbd;
  FUN_0043b244(*(undefined4 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e8));
  if (*(char *)(param_1 + 0x211) != '\0') {
    puStack_18 = (undefined1 *)0x4cdbd1;
    cVar1 = FUN_00466430(param_1);
    if (cVar1 != '\0') {
      puStack_1c = &LAB_004cdbf9;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      puStack_18 = &stack0xfffffffc;
      FUN_00403c80(param_1);
      *in_FS_OFFSET = uStack_20;
    }
  }
  return;
}

