// Address: 0041791c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041791c(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  VARIANTARG *local_28;
  undefined1 local_24 [6];
  short local_1e;
  SAFEARRAY *local_1c;
  ushort local_16;
  VARIANTARG local_14;
  
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  cVar1 = FUN_004175e4(in_stack_00000004,&local_16,&local_1c);
  if (cVar1 == '\0') {
    FUN_00411988(0x80070057);
  }
  cVar1 = FUN_004175e4(in_stack_00000008,&local_1e,local_24);
  if (cVar1 == '\0') {
    cVar1 = FUN_004177f0(local_1e);
    if ((cVar1 == '\0') && (local_1e != 0x100)) {
      FUN_00411988(0x80020005);
    }
  }
  if (local_1c->cDims != in_stack_0000000c) {
    FUN_00411988(0x8002000b);
  }
  uVar2 = (uint)(local_16 & 0xfff);
  if (uVar2 == 0xc) {
    if (local_1e == 0x100) {
      cVar1 = FUN_0041744c(0x100);
      if (cVar1 == '\0') goto LAB_004179d3;
    }
    SafeArrayPtrOfIndex(local_1c,(LONG *)&stack0x00000010,&local_28);
    FUN_00411988();
    FUN_00412164(local_28,in_stack_00000008);
    return;
  }
LAB_004179d3:
  VariantInit(&local_14);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  if (uVar2 == 0xc) {
    thunk_FUN_004123f8(&local_14,in_stack_00000008);
    local_28 = &local_14;
    puVar5 = puVar4;
  }
  else {
    FUN_004126a8(&local_14,in_stack_00000008,uVar2);
    if ((uVar2 - 8 < 2) || (uVar2 - 8 == 5)) {
      local_28 = (VARIANTARG *)local_14.n1._8_4_;
    }
    else {
      local_28 = (VARIANTARG *)((int)&local_14.n1 + 8);
    }
  }
  SafeArrayPutElement(local_1c,(LONG *)&stack0x00000010,local_28);
  FUN_00411988();
  *in_FS_OFFSET = uVar3;
  FUN_00411d38(&local_14,uVar3,puVar5);
  return;
}

