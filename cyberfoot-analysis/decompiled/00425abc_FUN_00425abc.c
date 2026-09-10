// Address: 00425abc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00425abc(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_00425cb0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x425ae5;
  local_8 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -0x10),
                         *(undefined4 *)(in_stack_00000004 + -8));
  if (local_8 == 0) {
    puStack_28 = (undefined1 *)in_stack_00000004;
    puStack_2c = (undefined1 *)0x425af7;
    FUN_004255e8();
    puVar1 = puStack_28;
    puStack_28 = (undefined1 *)0x425b05;
    FUN_00426644(*(undefined4 *)(in_stack_00000004 + -4),0xd,puVar1);
  }
  else {
    puStack_28 = (undefined1 *)0x425b18;
    cVar2 = FUN_00403c10(local_8,PTR_PTR_0041b84c);
    if (cVar2 != '\0') {
      puStack_28 = (undefined1 *)0x425b2e;
      cVar2 = FUN_00403c10(local_8,PTR_PTR_0041c690);
      if ((cVar2 == '\0') || ((*(byte *)(local_8 + 0x24) & 4) != 0)) {
        local_c = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20);
        puStack_28 = (undefined1 *)0x425b8f;
        FUN_0040496c(&local_10,*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x2c));
        puStack_2c = &LAB_00425c31;
        uStack_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_30;
        uVar4 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x2c);
        puStack_28 = &stack0xfffffffc;
        FUN_00404b48(&local_18,*(int *)(in_stack_00000004 + -8) + 0x1a);
        FUN_00404c64(*(int *)(in_stack_00000004 + -4) + 0x2c,3);
        if (*(char *)(in_stack_00000004 + -0x11) != '\0') {
          uVar3 = FUN_00419ee8(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20),
                               *(undefined4 *)(in_stack_00000004 + -8));
          *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20) = uVar3;
        }
        FUN_00424e1c(*(undefined4 *)(in_stack_00000004 + -4),local_8);
        *in_FS_OFFSET = &DAT_00425cc4;
        *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x20) = local_c;
        FUN_00404928(*(int *)(in_stack_00000004 + -4) + 0x2c,local_10,uVar4,&DAT_00425c38);
        return;
      }
      puStack_28 = (undefined1 *)in_stack_00000004;
      puStack_2c = (undefined1 *)0x425b4a;
      FUN_00425994(local_8,&local_14);
      if (local_14 != 0) {
        puStack_28 = (undefined1 *)in_stack_00000004;
        puStack_2c = (undefined1 *)0x425b5e;
        FUN_004255e8();
        puVar1 = puStack_28;
        puStack_28 = (undefined1 *)0x425b6d;
        FUN_00424c38(*(undefined4 *)(in_stack_00000004 + -4),local_14,puVar1);
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00425cb7;
  puStack_20 = (undefined1 *)0x425caf;
  FUN_004048f8(&local_18,3,puVar1);
  return;
}

