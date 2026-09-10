// Address: 0041a524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041a524(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  code *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_0041a5fc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = **(char **)*param_2;
  local_8 = param_3;
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_0041a4b8(param_1,param_2,&local_14);
    FUN_004051d4(local_8,local_14);
  }
  else if (cVar1 == '\v') {
    pcVar2 = (code *)param_2[1];
    if (((uint)pcVar2 & 0xff000000) == 0xff000000) {
      puStack_20 = &stack0xfffffffc;
      FUN_0040502c(param_3,*(undefined4 *)(((uint)pcVar2 & 0xffffff) + (int)param_1));
    }
    else {
      local_10 = pcVar2;
      if (((uint)pcVar2 & 0xff000000) == 0xfe000000) {
        local_10 = *(code **)(*param_1 + (int)(short)pcVar2);
      }
      local_c = param_1;
      if (param_2[4] == -0x80000000) {
        puStack_20 = &stack0xfffffffc;
        (*local_10)(param_1,param_3);
      }
      else {
        puStack_20 = &stack0xfffffffc;
        (*local_10)(param_1,param_2[4],param_3);
      }
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_00404ff0(param_3);
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041a603;
  puStack_24 = (undefined1 *)0x41a5fb;
  FUN_004048d4(&local_14,uStack_28,puVar3);
  return;
}

