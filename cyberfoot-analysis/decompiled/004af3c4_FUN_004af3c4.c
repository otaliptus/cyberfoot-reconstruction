// Address: 004af3c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004af3c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_2c = 0;
  puStack_38 = (undefined1 *)0x4af3e0;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_3c = &LAB_004af466;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  puStack_38 = &stack0xfffffffc;
  uVar1 = FUN_004af478(param_1,param_3);
  FUN_004aeba4(local_28);
  puVar4 = local_28;
  puVar3 = local_18;
  uVar5 = uVar1;
  uVar2 = FUN_00404ba4(local_8);
  FUN_004051d4(&local_2c,local_8);
  FUN_004af71c(param_1,local_2c,uVar2,puVar3,puVar4);
  FUN_00403a84(uVar1);
  FUN_00402c38();
  *in_FS_OFFSET = (int)puVar3;
  FUN_00404ff0(&local_2c,puVar3,uVar5,&LAB_004af46d);
  FUN_004048d4(&local_8);
  return;
}

