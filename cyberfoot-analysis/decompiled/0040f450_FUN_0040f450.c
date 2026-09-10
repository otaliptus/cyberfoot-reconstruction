// Address: 0040f450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040f450(void)

{
  char *pcVar1;
  char ***pppcVar2;
  LCID LVar3;
  int iVar4;
  char **unaff_EBX;
  undefined4 *in_FS_OFFSET;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char **local_30;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  char ***local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char **local_c;
  char *local_8;
  
  local_14 = &stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = (char *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = &LAB_0040f71b;
  local_1c = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = (char ***)0x40f473;
  FUN_0040f2dc();
  local_20 = (char ***)0x40f478;
  FUN_0040dc58();
  if (DAT_0066c750 != '\0') {
    local_20 = (char ***)0x40f486;
    FUN_0040de30();
  }
  local_20 = (char ***)0x40f48b;
  LVar3 = GetThreadLocale();
  local_20 = (char ***)&local_14;
  local_24 = (char *)0x40f49f;
  FUN_0040dba8(LVar3,0x14,0);
  local_20 = (char ***)0x40f4ac;
  FUN_00404928(&DAT_0066c684,local_14);
  local_20 = (char ***)&local_18;
  local_24 = (char *)0x40f4c1;
  FUN_0040dba8(LVar3,0x1b,&DAT_0040f730);
  local_20 = (char ***)0x40f4cb;
  DAT_0066c688 = FUN_0040a034(local_18,0);
  local_20 = (char ***)&local_1c;
  local_24 = (char *)0x40f4e5;
  FUN_0040dba8(LVar3,0x1c,&DAT_0040f730);
  local_20 = (char ***)0x40f4ef;
  DAT_0066c689 = FUN_0040a034(local_1c,0);
  local_20 = (char ***)0x40f502;
  DAT_0066c68a = FUN_0040dbf4(LVar3,0xf,0x2c);
  local_20 = (char ***)0x40f515;
  DAT_0066c68b = FUN_0040dbf4(LVar3,0xe,0x2e);
  local_20 = (char ***)&local_20;
  local_24 = (char *)0x40f52f;
  FUN_0040dba8(LVar3,0x19,&DAT_0040f730);
  pppcVar2 = local_20;
  local_20 = (char ***)0x40f539;
  DAT_0066c68c = FUN_0040a034(pppcVar2,0);
  local_20 = (char ***)0x40f54c;
  DAT_0066c68d = FUN_0040dbf4(LVar3,0x1d,0x2f);
  local_20 = (char ***)&local_28;
  local_24 = (char *)0x40f566;
  FUN_0040dba8(LVar3,0x1f,"m/d/yy");
  local_20 = (char ***)0x40f571;
  FUN_0040dee0(local_28,&local_24);
  local_20 = (char ***)0x40f57e;
  FUN_00404928(&DAT_0066c690,local_24);
  local_20 = &local_30;
  local_24 = (char *)0x40f593;
  FUN_0040dba8(LVar3,0x20,"mmmm d, yyyy");
  local_20 = (char ***)0x40f59e;
  FUN_0040dee0(local_30,&local_2c);
  local_20 = (char ***)0x40f5ab;
  FUN_00404928(&DAT_0066c694,local_2c);
  local_20 = (char ***)0x40f5b9;
  DAT_0066c698 = FUN_0040dbf4(LVar3,0x1e,0x3a);
  local_20 = (char ***)&local_34;
  local_24 = (char *)0x40f5d3;
  FUN_0040dba8(LVar3,0x28,&DAT_0040f764);
  local_20 = (char ***)0x40f5e0;
  FUN_00404928(&DAT_0066c69c,local_34);
  local_20 = (char ***)&local_38;
  local_24 = (char *)0x40f5f5;
  FUN_0040dba8(LVar3,0x29,&DAT_0040f770);
  local_20 = (char ***)0x40f602;
  FUN_00404928(&DAT_0066c6a0,local_38);
  local_20 = (char ***)0x40f60a;
  FUN_004048d4(&local_c);
  local_20 = (char ***)0x40f612;
  FUN_004048d4(&stack0xfffffff0);
  local_20 = (char ***)&local_3c;
  local_24 = (char *)0x40f627;
  FUN_0040dba8(LVar3,0x25,&DAT_0040f730);
  local_20 = (char ***)0x40f631;
  iVar4 = FUN_0040a034(local_3c,0);
  if (iVar4 == 0) {
    local_20 = (char ***)0x40f642;
    FUN_0040496c(&local_8,&DAT_0040f77c);
  }
  else {
    local_20 = (char ***)0x40f651;
    FUN_0040496c(&local_8,&DAT_0040f788);
  }
  local_20 = (char ***)&local_40;
  local_24 = (char *)0x40f666;
  FUN_0040dba8(LVar3,0x23,&DAT_0040f730);
  local_20 = (char ***)0x40f670;
  iVar4 = FUN_0040a034(local_40,0);
  if (iVar4 == 0) {
    local_20 = (char ***)&local_44;
    local_24 = (char *)0x40f689;
    FUN_0040dba8(LVar3,0x1005,&DAT_0040f730);
    local_20 = (char ***)0x40f693;
    iVar4 = FUN_0040a034(local_44,0);
    if (iVar4 == 0) {
      local_20 = (char ***)0x40f6a4;
      FUN_0040496c(&stack0xfffffff0," AMPM");
    }
    else {
      local_20 = (char ***)0x40f6b3;
      FUN_0040496c(&local_c,"AMPM ");
    }
  }
  local_20 = (char ***)local_c;
  local_24 = local_8;
  local_28 = ":mm";
  local_30 = (char **)0x40f6d0;
  FUN_00404c64(&DAT_0066c6a4,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (char *)0x40f6ed;
  local_3c = (char *)unaff_EBX;
  FUN_00404c64(&DAT_0066c6a8,4);
  local_40 = (char *)0x40f6fb;
  DAT_0066c752 = FUN_0040dbf4(LVar3,0xc,0x2c);
  pcVar1 = local_34;
  *in_FS_OFFSET = local_3c;
  local_34 = &LAB_0040f722;
  local_38 = (char *)0x40f71a;
  FUN_004048f8(&local_44,0x10,pcVar1);
  return;
}

