// Address: 0041a60c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a60c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  code *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0041a6d2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = **(char **)*param_2;
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_00404b6c(&local_10,param_3);
    FUN_0041a4f8(param_1,param_2,local_10);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    if (cVar1 == '\v') {
      pcVar2 = (code *)param_2[2];
      if (((uint)pcVar2 & 0xff000000) == 0xff000000) {
        puStack_20 = &stack0xfffffffc;
        FUN_0040502c(((uint)pcVar2 & 0xffffff) + (int)param_1,param_3);
      }
      else {
        local_c = pcVar2;
        if (((uint)pcVar2 & 0xff000000) == 0xfe000000) {
          local_c = *(code **)(*param_1 + (int)(short)pcVar2);
        }
        local_8 = param_1;
        if (param_2[4] == -0x80000000) {
          puStack_20 = &stack0xfffffffc;
          (*local_c)(param_1,param_3);
        }
        else {
          puStack_20 = &stack0xfffffffc;
          (*local_c)(param_1,param_2[4],param_3);
        }
      }
    }
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041a6d9;
  puStack_24 = (undefined1 *)0x41a6d1;
  FUN_004048d4(&local_10,uStack_28,puVar3);
  return;
}

