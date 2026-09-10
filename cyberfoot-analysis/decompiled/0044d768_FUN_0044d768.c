// Address: 0044d768
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d768(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x44d77c;
  local_c = FUN_0044dba8(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
  puStack_10 = (undefined1 *)0x44d787;
  cVar2 = FUN_0046cde4(local_c);
  if (((cVar2 == '\0') && (DAT_0044d860 == (*(ushort *)(local_c + 0x1c) & _DAT_0044d85c))) &&
     (*(char *)(local_c + 0x289) == '\0')) {
    if (*(int *)(local_c + 0x248) == 0) {
      puStack_10 = (undefined1 *)0x44d7d6;
      uVar3 = FUN_00403a54(PTR_PTR_0041c090,
                           CONCAT31((int3)(CONCAT22(extraout_var,DAT_0044d860) >> 8),1));
      *(undefined4 *)(local_c + 0x248) = uVar3;
    }
    else {
      puStack_10 = (undefined1 *)0x0;
      puStack_14 = (undefined1 *)0x0;
      uStack_18 = 0x44d7ea;
      FUN_00420958();
    }
    puStack_10 = (undefined1 *)0x400;
    puStack_14 = (undefined1 *)0x44d804;
    local_8 = FUN_004213b8(PTR_PTR_0041c470,1,*(undefined4 *)(local_c + 0x248));
    puStack_14 = &LAB_0044d84e;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_0042453c(local_8,*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x44d855;
    puStack_14 = (undefined1 *)0x44d83b;
    FUN_00403a84(local_8,uStack_18,puVar1);
    puStack_14 = (undefined1 *)0x0;
    uStack_18 = 0;
    FUN_004208f4(*(undefined4 *)(local_c + 0x248));
    return;
  }
  return;
}

