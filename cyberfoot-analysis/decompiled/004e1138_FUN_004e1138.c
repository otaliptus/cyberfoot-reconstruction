// Address: 004e1138
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e1138(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  puStack_1c = &LAB_004e11a5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004d35b4(param_2,*(undefined1 *)((int)param_1 + 0x25),&local_8);
  (**(code **)(*param_1 + 0x1c))(param_1,&local_c);
  FUN_00405378(local_8,local_c);
  if (!(bool)uVar2) {
    FUN_0046cabc(param_1[7]);
    FUN_004dd894(param_1[7],local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e11ac;
  puStack_1c = (undefined1 *)0x4e11a4;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

