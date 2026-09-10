// Address: 00423718
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423718(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004237c2;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_2c = &LAB_00423795;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  cVar3 = FUN_004239d4(param_1);
  if (cVar3 != '\v') {
    FUN_00421a70();
  }
  iVar4 = FUN_00419c28(param_2);
  uVar1 = **(undefined4 **)(iVar4 + 1);
  while (FUN_004237f8(local_8,&local_c), puVar2 = puStack_1c, local_c != 0) {
    FUN_00421aa8(uVar1,local_c);
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_004237c9;
  puStack_20 = (undefined1 *)0x4237c1;
  FUN_004048d4(&local_c,local_24,puVar2);
  return;
}

