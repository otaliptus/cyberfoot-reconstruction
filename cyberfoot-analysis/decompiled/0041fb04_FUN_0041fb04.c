// Address: 0041fb04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041fb04(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0041fba1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x41fb2c;
  local_8 = param_1;
  FUN_0041f308(param_1);
  puStack_28 = &LAB_0041fb84;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = (**(code **)*param_2)();
  iVar3 = FUN_004208d4(param_2);
  FUN_004049c4(&local_c,0,iVar2 - iVar3);
  (**(code **)(*param_2 + 0xc))(param_2,local_c,iVar2 - iVar3);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041fb8b;
  puStack_28 = (undefined1 *)0x41fb83;
  FUN_0041f3c4(local_8,uStack_2c,puVar1);
  return;
}

