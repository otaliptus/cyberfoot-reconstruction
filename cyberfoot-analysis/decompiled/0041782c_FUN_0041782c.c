// Address: 0041782c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0041782c(void)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *local_20;
  SAFEARRAY *local_1c;
  ushort local_16;
  undefined1 local_14 [16];
  
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  cVar1 = FUN_004175e4(in_stack_00000008,&local_16,&local_1c);
  if (cVar1 == '\0') {
    FUN_00411988(0x80070057);
  }
  if (local_1c->cDims != in_stack_0000000c) {
    FUN_00411988(0x8002000b);
  }
  puStack_2c = (undefined1 *)0x41786d;
  VariantInit((VARIANTARG *)&((_union_2683 *)local_14)->n2);
  puStack_2c = &LAB_004178ec;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if ((local_16 & 0xfff) == 0xc) {
    SafeArrayPtrOfIndex(local_1c,(LONG *)&stack0x00000010,&local_20);
    FUN_00411988();
    FUN_00412164((_union_2683 *)local_14,local_20);
    puVar3 = puVar2;
  }
  else {
    SafeArrayGetElement(local_1c,(LONG *)&stack0x00000010,&(((_union_2683 *)local_14)->n2).n3);
    FUN_00411988();
    local_14._0_2_ = local_16 & 0xfff;
  }
  FUN_00412164(in_stack_00000004,(_union_2683 *)local_14);
  *in_FS_OFFSET = uStack_30;
  puStack_2c = (undefined1 *)0x4178eb;
  FUN_00411d38((_union_2683 *)local_14,uStack_30,puVar3);
  return;
}

