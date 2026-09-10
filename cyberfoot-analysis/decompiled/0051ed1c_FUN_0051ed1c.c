// Address: 0051ed1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051ed1c(HANDLE param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1 != (HANDLE)0x0) {
    puStack_10 = (undefined1 *)0x51ed33;
    uVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
    puStack_14 = &LAB_0051ed7f;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    pvVar3 = CopyImage(param_1,0,0,0,4);
    FUN_00430eec(uVar2,pvVar3);
    FUN_0051ebc8(uVar2);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x51ed86;
    puStack_14 = (undefined1 *)0x51ed7e;
    FUN_00403a84(uVar2,uStack_18,puVar1);
    return;
  }
  return;
}

