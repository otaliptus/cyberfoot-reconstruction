// Address: 004dbd04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dbd04(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar5 = 8;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar6 = 1;
  local_20 = &LAB_004dbeeb;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined4 *)0x4dbd32;
  FUN_00404b6c(&local_c,param_1);
  local_28 = local_c;
  local_2c = 0x4dbd40;
  FUN_00404b6c(&stack0xfffffff0,*param_2);
  puVar1 = local_28;
  local_28 = (undefined4 *)0x4dbd49;
  FUN_00404cf0(puVar1,unaff_EBX);
  if (!(bool)uVar6) {
    local_28 = (undefined4 *)0x4dbd59;
    FUN_00404b6c(&stack0xffffffe8,*param_2);
    local_28 = (undefined4 *)0x4dbd64;
    FUN_004051d4(&stack0xffffffec,unaff_EDI);
    local_2c = 0x4dbd72;
    local_28 = unaff_ESI;
    FUN_00404b6c(&local_20,param_1);
    local_2c = 0x4dbd7d;
    FUN_004051d4(&local_1c,local_20);
    puVar1 = local_28;
    local_28 = (undefined4 *)0x4dbd86;
    cVar3 = FUN_004dbc6c(local_1c,puVar1);
    if (cVar3 != '\0') {
      local_28 = (undefined4 *)0x4dbd98;
      FUN_004dbb80(*param_2,&local_24);
      local_28 = (undefined4 *)0x4dbda2;
      FUN_0040502c(param_2,local_24);
      iVar5 = 1;
      while( true ) {
        local_28 = (undefined4 *)0x4dbe1b;
        iVar4 = FUN_00405260(param_1);
        uVar6 = iVar5 == iVar4;
        if (iVar4 < iVar5) break;
        if (*(short *)(param_1 + -2 + iVar5 * 2) == 0x26) {
          if ((PTR_DAT_0066b7ac[0xc] != '\0') && (1 < iVar5)) {
            local_28 = (undefined4 *)0x4dbdc8;
            iVar4 = FUN_00405260(param_1);
            if ((1 < iVar4 - iVar5) &&
               ((*(short *)(param_1 + -4 + iVar5 * 2) == 0x28 &&
                (*(short *)(param_1 + 2 + iVar5 * 2) == 0x29)))) {
              local_28 = &local_8;
              local_2c = 0x4dbdf2;
              FUN_004053fc(param_1,iVar5 + -1,4);
              local_28 = (undefined4 *)0x4dbdff;
              FUN_004054d8(local_8,param_2,iVar5 + -1);
              iVar5 = iVar5 + 2;
              goto LAB_004dbe13;
            }
          }
          local_28 = (undefined4 *)0x4dbe12;
          FUN_004054d8(&DAT_004dbf00,param_2,iVar5);
          iVar5 = iVar5 + 1;
        }
LAB_004dbe13:
        iVar5 = iVar5 + 1;
      }
      local_28 = (undefined4 *)0x4dbe29;
      FUN_00404b6c(&local_28,param_1);
      local_2c = 0x4dbe37;
      FUN_00404b6c(&local_2c,*param_2);
      puVar1 = local_28;
      local_28 = (undefined4 *)0x4dbe40;
      FUN_00404cf0(puVar1,local_2c);
      if (!(bool)uVar6) {
        local_28 = (undefined4 *)0x4dbe4c;
        FUN_00404b6c(&local_40,param_1);
        local_3c = local_40;
        local_38 = 0xb;
        local_28 = (undefined4 *)0x4dbe60;
        FUN_00404b6c(&local_44,*param_2);
        local_34 = local_44;
        local_28 = &local_3c;
        local_2c = 1;
        local_30 = 0x4dbe81;
        FUN_0040e3ac(PTR_DAT_004d34b4,1,
                     "Internal Error: SyncHotKeyPosition Failed (\"%s\" <> \"%s\").");
        local_30 = 0x4dbe86;
        FUN_00404250();
      }
    }
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_004dbef2;
  local_20 = (undefined1 *)0x4dbea0;
  FUN_004048f8(&local_44,2,puVar2);
  local_20 = (undefined1 *)0x4dbead;
  FUN_004048f8(&local_2c,2);
  local_20 = (undefined1 *)0x4dbeb5;
  FUN_00404ff0(&local_24);
  local_20 = (undefined1 *)0x4dbebd;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x4dbec5;
  FUN_00404ff0(&local_1c);
  local_20 = (undefined1 *)0x4dbecd;
  FUN_004048d4(&stack0xffffffe8);
  local_20 = (undefined1 *)0x4dbed5;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x4dbee2;
  FUN_004048f8(&stack0xfffffff0,2);
  local_20 = (undefined1 *)0x4dbeea;
  FUN_00404ff0(&local_8);
  return;
}

