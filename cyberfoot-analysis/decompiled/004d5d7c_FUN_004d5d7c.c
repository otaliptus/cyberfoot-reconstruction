// Address: 004d5d7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d5d7c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_004d5e2a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x4d5da3;
  local_8 = param_1;
  FUN_004d5774(param_1);
  puStack_24 = &LAB_004d5e0d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = (**(code **)*param_2)();
  iVar3 = FUN_004208d4(param_2);
  iVar4 = iVar2 - iVar3 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((iVar2 - iVar3 & 1U) != 0);
  }
  FUN_004050e4(&local_c,0,iVar4);
  iVar2 = FUN_00405260(local_c);
  (**(code **)(*param_2 + 0xc))(param_2,local_c,iVar2 * 2);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d5e14;
  puStack_24 = (undefined1 *)0x4d5e0c;
  FUN_004d5830(local_8,uStack_28,puVar1);
  return;
}

