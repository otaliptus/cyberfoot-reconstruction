// Address: 00422788
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422788(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    puStack_10 = (undefined1 *)0x4227a7;
    uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    puStack_14 = &LAB_004227e3;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_004227f8(param_1,param_2);
    FUN_00421d48(param_1);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x4227f4;
    puStack_14 = (undefined1 *)0x4227e2;
    FUN_00421e8c(param_1,uStack_18,puVar1);
    return;
  }
  puStack_10 = (undefined1 *)0x4227f4;
  FUN_004227f8(param_1,param_2);
  return;
}

