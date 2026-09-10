// Address: 0041fe84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041fe84(int *param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  puStack_18 = &LAB_0041ff38;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x41feab;
  local_8 = param_1;
  FUN_0041f308(param_1);
  puStack_24 = &LAB_0041ff1b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x44))();
  if (param_2 != (char *)0x0) {
    while (pcVar3 = param_2, *param_2 != '\0') {
      for (; ((cVar1 = *pcVar3, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
          pcVar3 = pcVar3 + 1) {
      }
      FUN_004049c4(&local_c,param_2,(int)pcVar3 - (int)param_2);
      (**(code **)(*local_8 + 0x38))(local_8,local_c);
      param_2 = pcVar3;
      if (*pcVar3 == '\r') {
        param_2 = pcVar3 + 1;
      }
      if (*param_2 == '\n') {
        param_2 = param_2 + 1;
      }
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041ff22;
  puStack_24 = (undefined1 *)0x41ff1a;
  FUN_0041f3c4(local_8,uStack_28,puVar2);
  return;
}

