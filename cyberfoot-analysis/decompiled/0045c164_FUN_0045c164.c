// Address: 0045c164
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c164(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  
  puStack_20 = (undefined1 *)0x45c17e;
  iVar2 = (**(code **)(*param_1 + 0xd0))();
  puStack_20 = (undefined1 *)0x45c18a;
  local_c = (**(code **)(*param_1 + 0xcc))();
  puStack_20 = (undefined1 *)0x45c194;
  iVar3 = FUN_0046617c(param_1);
  puStack_20 = (undefined1 *)0x45c19a;
  iVar3 = FUN_0040a988(iVar3 + 1);
  puStack_24 = &LAB_0045c1ee;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  uVar4 = FUN_0040a99c(iVar3);
  FUN_0046618c(param_1,iVar3,uVar4);
  if (param_3 <= local_c) {
    local_c = param_3 + -1;
  }
  FUN_0040a7c4(param_2,iVar3 + iVar2,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0045c1f5;
  puStack_24 = (undefined1 *)0x45c1ed;
  FUN_0040a9d4(iVar3,uStack_28,puVar1);
  return;
}

