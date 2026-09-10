// Address: 004f586c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f586c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_30 [12];
  int local_24;
  undefined1 local_20 [12];
  int local_14;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_3c = (undefined1 *)0x4f5882;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_3c = (undefined1 *)0x4f588a;
  FUN_00404d94(local_c);
  puStack_40 = &LAB_004f58f9;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_d = 1;
  puStack_3c = &stack0xfffffffc;
  FUN_004f5780(local_8,local_20);
  FUN_004f5780(local_c,local_30);
  puVar1 = puStack_3c;
  iVar3 = -4;
  piVar2 = &local_14;
  piVar4 = &local_24;
  while( true ) {
    if (*piVar4 < *piVar2) {
      local_d = 1;
      goto LAB_004f58de;
    }
    if (*piVar2 < *piVar4) break;
    piVar4 = piVar4 + -1;
    piVar2 = piVar2 + -1;
    iVar3 = iVar3 + 1;
    if (iVar3 == 0) {
LAB_004f58de:
      *in_FS_OFFSET = uStack_44;
      puStack_3c = &LAB_004f5900;
      puStack_40 = (undefined1 *)0x4f58f8;
      FUN_004048f8(&local_c,2,puVar1);
      return;
    }
  }
  local_d = 0;
  goto LAB_004f58de;
}

