// Address: 0054b18c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b18c(undefined4 param_1,undefined4 param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *in_FS_OFFSET;
  undefined1 **local_28;
  int *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 4;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_1c = (undefined1 *)0x54b1ab;
  local_8 = param_1;
  FUN_00404d94(param_1);
  local_20 = &LAB_0054b2f2;
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined1 **)0x54b1c3;
  local_1c = &stack0xfffffffc;
  FUN_004048d4(param_2);
  while( true ) {
    local_28 = (undefined1 **)0x54b1f7;
    FUN_004095b0(local_8,&stack0xffffffec);
    local_28 = (undefined1 **)0x54b204;
    iVar3 = FUN_00404ee8(&DAT_0054b318,unaff_EBX);
    if (iVar3 < 1) break;
    local_28 = (undefined1 **)CONCAT31((int3)((uint)iVar3 >> 8),DAT_0054b300);
    local_24 = &local_10;
    FUN_0040f7c8(local_8,&DAT_0054b318,&DAT_0054b30c);
    FUN_0040496c(&local_8,local_10);
  }
  while( true ) {
    local_28 = (undefined1 **)0x54b23c;
    FUN_004095b0(local_8,&local_1c);
    local_28 = (undefined1 **)0x54b249;
    iVar3 = FUN_00404ee8(&DAT_0054b328,local_1c);
    if (iVar3 < 1) break;
    local_28 = (undefined1 **)CONCAT31((int3)((uint)iVar3 >> 8),DAT_0054b300);
    local_24 = (int *)&stack0xffffffe8;
    FUN_0040f7c8(local_8,&DAT_0054b328,&DAT_0054b30c);
    FUN_0040496c(&local_8,unaff_ESI);
  }
  while( true ) {
    local_28 = (undefined1 **)0x54b2a5;
    FUN_004051d4(&local_28,local_8);
    ppuVar1 = local_28;
    local_28 = (undefined1 **)0x54b2b4;
    iVar3 = FUN_005477ac(&DAT_0054b33c,ppuVar1,&local_c);
    if (iVar3 < 1) break;
    local_28 = &local_20;
    FUN_00404e04(local_8,1,local_c + -1);
    local_28 = (undefined1 **)0x54b26d;
    FUN_00404bac(param_2,local_20);
    local_28 = (undefined1 **)0x54b278;
    FUN_004051d4(&local_24,local_8);
    local_28 = (undefined1 **)0x54b287;
    iVar3 = FUN_005477ac(&DAT_0054b334,local_24,&local_c);
    if (iVar3 < 1) break;
    local_28 = (undefined1 **)0x54b29a;
    FUN_00404e44(&local_8,1,local_c);
  }
  local_28 = (undefined1 **)0x54b2c2;
  FUN_00404bac(param_2,local_8);
  puVar2 = local_1c;
  *in_FS_OFFSET = (int)local_24;
  local_1c = &LAB_0054b2f9;
  local_20 = (undefined1 *)0x54b2dc;
  FUN_00405008(&local_28,2,puVar2);
  local_20 = (undefined1 *)0x54b2e9;
  FUN_004048f8(&local_20,5);
  local_20 = (undefined1 *)0x54b2f1;
  FUN_004048d4(&local_8);
  return;
}

