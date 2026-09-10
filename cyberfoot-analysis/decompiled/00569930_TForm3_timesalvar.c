// Address: 00569930
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_timesalvar(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined1 local_34 [34];
  byte local_12;
  char local_11;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_38 = 0;
  local_c = 0;
  puStack_4c = &LAB_00569b47;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x56996a;
  FUN_004030d4(local_34,DAT_0067b4b8 + 0x57 + param_2 * 200);
  puStack_54 = (undefined1 *)0x569979;
  FUN_004030a4(local_34,&DAT_00569b58,0x1d);
  puStack_54 = (undefined1 *)0x569984;
  FUN_00404b48(&local_c,local_34);
  *(undefined1 *)(DAT_0067b4b8 + 2 + param_2 * 200) = 0xf;
  if (*(int *)(DAT_0067b4b8 + 0xbc + param_2 * 200) == 0) {
    puStack_54 = (undefined1 *)0x5699a4;
    uVar3 = TForm3_getnovoid(param_1);
    *(undefined4 *)(DAT_0067b4b8 + 0xbc + param_2 * 200) = uVar3;
  }
  if (0x19 < *(byte *)(DAT_0067b4b8 + 3 + param_2 * 200)) {
    *(undefined1 *)(DAT_0067b4b8 + 3 + param_2 * 200) = 0xc;
  }
  local_11 = '\0';
  local_12 = 0;
  local_10 = 1;
  do {
    if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + -0x24 + local_10 * 0x24) != '\0') {
      pbVar1 = (byte *)(DAT_0067b4bc + param_2 * 0x708 + -0x24 + local_10 * 0x24);
      bVar4 = *pbVar1 == 0xffffffff;
      puStack_54 = (undefined1 *)0x569a19;
      FUN_00403180(pbVar1,&DAT_00569b60);
      if (!bVar4) {
        if (*(char *)(DAT_0067b4bc + param_2 * 0x708 + 0x617 + local_10) == '\0') {
          local_11 = local_11 + '\x01';
        }
        else {
          local_12 = local_12 + 1;
        }
      }
    }
    local_10 = local_10 + 1;
  } while (local_10 != 0x1a);
  if ((local_11 == '\0') || (local_12 < 0xb)) {
    *(undefined1 *)(DAT_0067b4b8 + 1 + param_2 * 200) = 0;
  }
  else {
    *(undefined1 *)(DAT_0067b4b8 + 1 + param_2 * 200) = 1;
  }
  puStack_54 = (undefined1 *)0xffff;
  puStack_58 = (undefined1 *)0x569a86;
  FUN_00404bf0(&local_38,"teams/",local_c);
  puStack_58 = (undefined1 *)0x569a95;
  local_8 = (int *)FUN_00420dec(PTR_PTR_0041bfa0,1,local_38);
  puStack_58 = &LAB_00569b22;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_10 = 1;
  puStack_54 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x10))(local_8,&local_10,4);
  (**(code **)(*local_8 + 0x10))(local_8,DAT_0067b4b8 + param_2 * 200,200);
  local_10 = 1;
  (**(code **)(*local_8 + 0x10))(local_8,&local_10,4);
  (**(code **)(*local_8 + 0x10))(local_8,DAT_0067b4bc + param_2 * 0x708,0x708);
  puVar2 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00569b29;
  puStack_58 = (undefined1 *)0x569b21;
  FUN_00403a84(local_8,uStack_5c,puVar2);
  return;
}

