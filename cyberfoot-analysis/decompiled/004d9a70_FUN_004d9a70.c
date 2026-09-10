// Address: 004d9a70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9a70(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  bool bVar5;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_004d9b5a;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  cVar3 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar3 == '\0') goto LAB_004d9b3f;
  cVar3 = FUN_0040ff2c(param_2,&DAT_004d9b68);
  if (cVar3 == '\0') goto LAB_004d9b3f;
  if (param_3 == '\0') {
LAB_004d9afd:
    FUN_004d9614(param_2,&local_14);
    FUN_004dd894(param_1,local_14);
  }
  else {
    FUN_004dd724(param_1,&local_8);
    uVar4 = true;
    FUN_00405378(local_8);
    if ((bool)uVar4) goto LAB_004d9afd;
    FUN_004dd724(param_1,&local_c);
    uVar2 = local_c;
    FUN_004051d4(&local_10,*(undefined4 *)(param_1 + 8));
    FUN_00405378(uVar2,local_10);
    if ((bool)uVar4) goto LAB_004d9afd;
  }
  if (param_3 != '\0') {
    FUN_004dd9e8(param_1,&local_18);
    bVar5 = true;
    FUN_00405378(local_18);
    if (!bVar5) goto LAB_004d9b3f;
  }
  FUN_004d9730(param_2,&local_1c);
  FUN_004dda3c(param_1,local_1c);
LAB_004d9b3f:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004d9b61;
  puStack_30 = (undefined1 *)0x4d9b59;
  FUN_00405008(&local_1c,6,puVar1);
  return;
}

