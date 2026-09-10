// Address: 004e901c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e901c(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_13;
  undefined4 uStack_f;
  
  local_13 = *param_3;
  uStack_f = param_3[1];
  if (*(char *)(param_1 + 0x23c) == '\0') {
    uVar1 = FUN_00466c3c(param_1,param_2,&local_13);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

