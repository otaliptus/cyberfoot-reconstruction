// Address: 005324e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005324e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int *piVar2;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  local_6 = (undefined1)param_3;
  local_5 = (undefined1)param_2;
  puStack_20 = &LAB_0053255d;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  piVar2 = param_5;
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x21b) != '\0') {
    piVar2 = &local_c;
    FUN_00532088(param_1,param_5,param_4);
    if (local_c != 0) {
      FUN_00530d7c(param_1,param_1,local_c);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)piVar2;
  puStack_20 = &LAB_00532564;
  iStack_24 = 0x53255c;
  FUN_004048d4(&local_c,piVar2,puVar1);
  return;
}

