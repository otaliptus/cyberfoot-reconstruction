// Address: 004afc2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004afc2c(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined2 extraout_var;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_2c [16];
  int local_1c;
  char local_15;
  int *local_14;
  char local_e [2];
  undefined2 *local_c;
  undefined2 *local_8;
  
  puStack_34 = (undefined1 *)0x4afc4a;
  local_c = param_3;
  local_8 = param_2;
  FUN_004032a8(local_e,2,0);
  puStack_34 = (undefined1 *)0x0;
  puStack_38 = (undefined1 *)0x4afc5a;
  local_14 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,param_1);
  puStack_38 = &LAB_004afd80;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_1c = (**(code **)(*local_14 + 0xc))(local_14,local_e,2);
  iVar5 = 2;
  pcVar3 = local_e;
  pcVar6 = &DAT_00669580;
  do {
    if (*pcVar3 != *pcVar6) {
      local_1c = 0;
    }
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (0 < local_1c) {
    local_1c = (**(code **)(*local_14 + 0xc))(local_14,&local_15,1);
    while ((local_15 == -1 && (0 < local_1c))) {
      local_1c = (**(code **)(*local_14 + 0xc))(local_14,&local_15,1);
      if (local_15 != -1) {
        if (((local_15 == -0x40) || (local_15 == -0x3f)) || (local_15 == -0x3e)) {
          local_1c = (**(code **)(*local_14 + 0xc))(local_14,local_2c,3);
          uVar2 = FUN_004afbfc(local_14);
          *local_c = uVar2;
          uVar2 = FUN_004afbfc(local_14);
          *local_8 = uVar2;
        }
        else if ((local_15 == '\x01') || ((byte)(local_15 + 0x30U) < 8)) {
          local_15 = -1;
        }
        else {
          uVar4 = FUN_004afbfc(local_14);
          (**(code **)(*local_14 + 0x14))(local_14,(uVar4 & 0xffff) - 2,CONCAT22(extraout_var,1));
          (**(code **)(*local_14 + 0xc))(local_14,&local_15,1);
        }
      }
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004afd87;
  puStack_38 = (undefined1 *)0x4afd7f;
  FUN_00403a84(local_14,uStack_3c,puVar1);
  return;
}

