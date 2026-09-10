// Address: 00460588
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00460588(int param_1,char param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_1c [12];
  char local_10;
  undefined1 local_9;
  undefined4 local_8;
  
  puStack_28 = (undefined1 *)0x46059f;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_2c = &LAB_004605fe;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_9 = 1;
  puStack_28 = &stack0xfffffffc;
  FUN_0046056c(local_1c);
  if ((local_10 != '\0') && (param_2 == *(char *)(param_1 + 0x10))) {
    if (param_2 == '\0') {
      local_9 = param_4 != *(int *)(param_1 + 0x18);
    }
    else if (param_2 == '\x01') {
      iVar2 = FUN_00409628(local_8,*(undefined4 *)(param_1 + 0x14));
      local_9 = iVar2 != 0;
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00460605;
  puStack_2c = (undefined1 *)0x4605fd;
  FUN_004048d4(&local_8,uStack_30,puVar1);
  return;
}

