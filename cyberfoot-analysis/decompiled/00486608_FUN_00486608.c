// Address: 00486608
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00486608(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00486665;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x13a) != 0) {
    FUN_00404adc(&local_8,*(undefined4 *)(param_2 + 8));
    (**(code **)(param_1 + 0x138))
              (*(undefined4 *)(param_1 + 0x13c),param_1,*(undefined4 *)(param_2 + 4),param_2 + 0xc,
               local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0048666c;
  puStack_18 = (undefined1 *)0x486664;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

