// Address: 004f29e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004f29e0(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 local_17;
  undefined4 uStack_13;
  
  local_17 = *param_3;
  uStack_13 = param_3[1];
  FUN_00466c3c(param_1,param_2,&local_17);
  if ((*(char *)(param_1 + 0x23c) == '\0') && (*(char *)(param_1 + 0x2a8) != '\0')) {
    FUN_004efc2c(*(undefined4 *)(param_1 + 0x28c),DAT_004f2a40);
    FUN_004efc2c(*(undefined4 *)(param_1 + 0x28c),DAT_004f2a44);
  }
  return 1;
}

