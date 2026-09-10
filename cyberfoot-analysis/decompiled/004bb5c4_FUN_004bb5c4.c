// Address: 004bb5c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bb5c4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004bb62d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x1c))(param_2,&local_c);
    FUN_004b5504(local_c,0,&local_8);
    (**(code **)(*(int *)param_1[0x66] + 0x2c))((int *)param_1[0x66],local_8);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  (**(code **)(*param_1 + 0xa0))();
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004bb634;
  puStack_1c = (undefined1 *)0x4bb62c;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

