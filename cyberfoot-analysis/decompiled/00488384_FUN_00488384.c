// Address: 00488384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00488384(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0048841e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = 0;
  puVar2 = &stack0xfffffffc;
  if (param_1 != (char *)0x0) {
    while (pcVar3 = param_1, puVar2 = puStack_18, *param_1 != '\0') {
      for (; ((cVar1 = *pcVar3, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
          pcVar3 = (char *)FUN_0040efa4(pcVar3)) {
      }
      FUN_004049c4(&local_c,param_1,(int)pcVar3 - (int)param_1);
      iVar4 = FUN_0042b3e4(*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 0x84) + 0x208),local_c)
      ;
      if (local_8 < iVar4) {
        local_8 = iVar4;
      }
      param_1 = pcVar3;
      if (*pcVar3 == '\r') {
        param_1 = pcVar3 + 1;
      }
      if (*param_1 == '\n') {
        param_1 = param_1 + 1;
      }
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00488425;
  puStack_1c = (undefined1 *)0x48841d;
  FUN_004048d4(&local_c,uStack_20,puVar2);
  return;
}

