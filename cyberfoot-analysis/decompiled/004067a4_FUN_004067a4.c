// Address: 004067a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004067a4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_00662040; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puStack_20 = &LAB_004067df;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (*(code *)puVar1[1])(param_1,param_2,param_3);
    *in_FS_OFFSET = uStack_24;
    param_2 = uStack_24;
    param_3 = puStack_1c;
  }
  return;
}

