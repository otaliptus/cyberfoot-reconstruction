// Address: 0045c200
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c200(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x45c217;
  iVar2 = (**(code **)(*param_1 + 0xd0))();
  puStack_1c = (undefined1 *)0x45c224;
  iVar3 = (**(code **)(*param_1 + 0xcc))();
  puStack_1c = (undefined1 *)0x45c231;
  FUN_004049c4(param_2,0,iVar3);
  if (iVar3 != 0) {
    puStack_1c = (undefined1 *)0x45c23c;
    iVar4 = FUN_0046617c(param_1);
    puStack_1c = (undefined1 *)0x45c242;
    iVar4 = FUN_0040a988(iVar4 + 1);
    puStack_20 = &LAB_0045c28e;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    uVar5 = FUN_0040a99c(iVar4);
    FUN_0046618c(param_1,iVar4,uVar5);
    FUN_00402a04(iVar4 + iVar2,*param_2,iVar3);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x45c295;
    puStack_20 = (undefined1 *)0x45c28d;
    FUN_0040a9d4(iVar4,uStack_24,puVar1);
    return;
  }
  return;
}

