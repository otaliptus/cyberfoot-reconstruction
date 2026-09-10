// Address: 004be6b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004be6b8(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004be71f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00466208(param_1,&local_8);
  cVar2 = FUN_0047e450(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 != '\0') {
      FUN_00403c80(param_1);
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004be726;
  puStack_1c = (undefined1 *)0x4be71e;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

