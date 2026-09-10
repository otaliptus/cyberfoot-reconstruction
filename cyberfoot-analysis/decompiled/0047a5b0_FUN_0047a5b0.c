// Address: 0047a5b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a5b0(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_0066b7ac[0xd] != '\0') {
    local_9 = *(char *)(param_1 + 0x30);
    local_a = *(undefined1 *)(param_1 + 0x41);
    puStack_14 = &LAB_0047a620;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    if (local_9 == '\0') {
      puStack_10 = &stack0xfffffffc;
      FUN_0047aac0(param_1,1);
    }
    else {
      FUN_0047aac0(param_1,0);
    }
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x47a627;
    puStack_14 = (undefined1 *)0x47a616;
    FUN_0047aac0(local_8,local_9,puVar1);
    *(undefined1 *)(local_8 + 0x41) = local_a;
    return;
  }
  return;
}

