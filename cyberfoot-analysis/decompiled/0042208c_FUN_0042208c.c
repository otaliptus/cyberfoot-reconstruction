// Address: 0042208c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042208c(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x42209f;
  (**(code **)(*param_2 + 0x20))();
  puStack_18 = &LAB_0042212c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  cVar2 = FUN_00421c30(param_1);
  if (cVar2 == '\0') {
    FUN_0041ed0c(param_2);
  }
  while( true ) {
    cVar2 = FUN_00421c30(param_1);
    if (cVar2 != '\0') break;
    cVar2 = FUN_00421f74(param_1);
    if ((byte)(cVar2 - 2U) < 3) {
      FUN_00422ae4(param_1);
    }
    uVar3 = FUN_0041ec40(param_2);
    FUN_00422b94(param_1);
    while( true ) {
      cVar2 = FUN_00421c30(param_1);
      if (cVar2 != '\0') break;
      FUN_00422d00(param_1,uVar3);
    }
    FUN_00422b9c(param_1);
  }
  FUN_00422b9c(param_1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00422133;
  puStack_18 = (undefined1 *)0x42212b;
  (**(code **)(*param_2 + 0x24))(param_2,*param_2,puVar1);
  return;
}

