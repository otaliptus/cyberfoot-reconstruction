// Address: 004f0ee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0ee4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_004f0fc3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar2 = FUN_004f0fe4(param_1,*(undefined4 *)(param_1 + 0x2b0));
  if (cVar2 != '\0') {
    cVar2 = *(char *)(param_1 + 0x298);
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x2b4) + 0xc))
                (*(int **)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0),&local_8);
      FUN_00466238(param_1,local_8);
    }
    else if (cVar2 == '\x01') {
      FUN_0041f680(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0),&local_10);
      FUN_00466238(param_1,local_10);
    }
    else if (cVar2 == '\x02') {
      FUN_004e30dc(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0),&local_c);
      FUN_00466238(param_1,local_c);
    }
    else if (cVar2 == '\x03') {
      FUN_004e30dc(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b0),&local_14);
      FUN_00466238(param_1,local_14);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f0fca;
  puStack_24 = (undefined1 *)0x4f0fc2;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

