// Address: 00483ccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00483ccc(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_00483d38;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_9 = '\0';
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xe4))();
  if (cVar1 != '\0') {
    local_9 = '\x01';
    FUN_00403c80(local_8,&local_9);
  }
  if (local_9 == '\0') {
    local_8[0x93] = 0;
  }
  else if (local_9 == '\x02') {
    FUN_00483e00(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  return;
}

