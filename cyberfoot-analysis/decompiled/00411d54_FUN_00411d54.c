// Address: 00411d54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411d54(void)

{
  ushort uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puVar3;
  undefined1 *puVar4;
  VARIANTARG local_1c;
  VARIANTARG *local_c;
  int *local_8;
  
  puVar3 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  if (*in_stack_00000008 == 0x400c) {
    puStack_2c = (undefined1 *)in_stack_0000000c;
    uStack_30 = *(undefined4 *)(in_stack_00000008 + 4);
    FUN_00411d54();
    return;
  }
  if (in_stack_00000004 == 0) {
    local_c = (VARIANTARG *)0x0;
  }
  else {
    puStack_2c = (undefined1 *)0x411d99;
    VariantInit(&local_1c);
    local_c = &local_1c;
  }
  puStack_2c = &LAB_00411e48;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  uVar1 = *in_stack_00000008;
  if (uVar1 < 0x102) {
    if ((uVar1 == 0x101) || ((uVar1 == 9 || (uVar1 == 0xd)))) {
LAB_00411dd4:
      puVar4 = &stack0xfffffffc;
      if (DAT_0066c810 != (code *)0x0) {
        (*DAT_0066c810)();
        puVar4 = puVar3;
      }
      goto LAB_00411e1f;
    }
  }
  else if ((uVar1 == 0x4009) || (uVar1 == 0x400d)) goto LAB_00411dd4;
  cVar2 = FUN_00418f24(uVar1,&local_8);
  if (cVar2 == '\0') {
    FUN_0041159c();
  }
  else {
    (**(code **)(*local_8 + 0x10))
              (local_8,local_c,in_stack_00000008,&stack0x00000010,in_stack_0000000c);
  }
LAB_00411e1f:
  *in_FS_OFFSET = uStack_30;
  if (local_c != (VARIANTARG *)0x0) {
    puStack_2c = (undefined1 *)0x411e3f;
    FUN_00412164(in_stack_00000004,local_c,puVar4);
    puStack_2c = (undefined1 *)0x411e47;
    FUN_00411d38(&local_1c);
  }
  return;
}

