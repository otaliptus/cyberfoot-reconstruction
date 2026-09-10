// Address: 004c4134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4134(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  puStack_1c = (undefined1 *)0x4c4151;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_1c = (undefined1 *)0x4c4159;
  FUN_00404d94(local_c);
  puStack_20 = &LAB_004c4291;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  pcVar3 = (char *)FUN_00404da4(local_8);
  cVar5 = *pcVar3;
  pcVar3 = (char *)FUN_00404da4(local_c);
  if (cVar5 != *pcVar3) {
    pcVar3 = (char *)FUN_00404da4(local_8);
    if ((*pcVar3 == '-') || (*pcVar3 == '-')) {
      bVar1 = true;
      goto LAB_004c4199;
    }
  }
  bVar1 = false;
LAB_004c4199:
  pcVar3 = (char *)FUN_00404da4(local_8);
  if (*pcVar3 == '-') {
    puVar6 = &local_8;
    iVar4 = FUN_00404ba4(local_8);
    FUN_00404e04(local_8,2,iVar4 + -1,puVar6);
  }
  pcVar3 = (char *)FUN_00404da4(local_c);
  if (*pcVar3 == '-') {
    puVar6 = &local_c;
    iVar4 = FUN_00404ba4(local_c);
    FUN_00404e04(local_c,2,iVar4 + -1,puVar6);
  }
  while (pcVar3 = (char *)FUN_00404da4(local_8), *pcVar3 == '0') {
    puVar6 = &local_8;
    iVar4 = FUN_00404ba4(local_8);
    FUN_00404e04(local_8,2,iVar4 + -1,puVar6);
  }
  while (pcVar3 = (char *)FUN_00404da4(local_c), *pcVar3 == '0') {
    puVar6 = &local_c;
    iVar4 = FUN_00404ba4(local_c);
    FUN_00404e04(local_c,2,iVar4 + -1,puVar6);
  }
  FUN_004c3ea0(local_c,param_3);
  FUN_004c3bcc(local_8,*param_3,&local_10);
  FUN_00404928(param_3,local_10);
  if (bVar1) {
    FUN_00404bf0(param_3,&DAT_004c42a8,*param_3);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004c4298;
  puStack_20 = (undefined1 *)0x4c4290;
  FUN_004048f8(&local_10,3,puVar2);
  return;
}

