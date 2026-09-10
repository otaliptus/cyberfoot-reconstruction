// Address: 00421638
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421638(int param_1,char *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004216de;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = 0;
  puVar1 = &stack0xfffffffc;
  iVar2 = local_8;
  if (param_2 != (char *)0x0) {
    while (puStack_1c = puVar1, pcVar5 = param_2, iVar2 = param_1, *param_2 != '\0') {
      for (; (*pcVar5 != '\0' && (1 < (byte)(*pcVar5 - 0x2dU))); pcVar5 = pcVar5 + 1) {
      }
      FUN_004049c4(&local_c,param_2,(int)pcVar5 - (int)param_2);
      iVar4 = FUN_00427360(param_1,local_c);
      if ((iVar4 == 0) && (cVar3 = FUN_004096cc(local_c,"Owner"), cVar3 != '\0')) {
        iVar4 = param_1;
      }
      iVar2 = local_8;
      if (iVar4 == 0) break;
      param_2 = pcVar5;
      if (*pcVar5 == '.') {
        param_2 = pcVar5 + 1;
      }
      if (*param_2 == '-') {
        param_2 = param_2 + 1;
      }
      param_1 = iVar4;
      puVar1 = puStack_1c;
      if (*param_2 == '>') {
        param_2 = param_2 + 1;
      }
    }
  }
  local_8 = iVar2;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004216e5;
  puStack_20 = (undefined1 *)0x4216dd;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  return;
}

