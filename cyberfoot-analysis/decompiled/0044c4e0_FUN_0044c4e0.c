// Address: 0044c4e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c4e0(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0044c544;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0xd4))(param_1,&local_8);
  iVar2 = FUN_00404ba4(local_8);
  iVar3 = FUN_00404ba4(local_8);
  if (param_3 <= iVar3) {
    iVar2 = param_3 + -1;
  }
  FUN_0040a81c(param_2,local_8,iVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044c54b;
  puStack_1c = (undefined1 *)0x44c543;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

