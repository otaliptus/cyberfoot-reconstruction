// Address: 004aa2e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aa2e8(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004aa374;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(*(int *)(param_1 + 0x138) + 8) != 0) {
    uVar3 = FUN_004a63ac(*(int *)(param_1 + 0x138),0);
    cVar2 = FUN_00403c10(uVar3,PTR_PTR_004a55e0);
    puVar1 = puStack_14;
    if (cVar2 != '\0') {
      uVar3 = FUN_004a63ac(*(undefined4 *)(param_1 + 0x138),0);
      FUN_00403c34(uVar3,PTR_PTR_004a55e0);
      goto LAB_004aa35e;
    }
  }
  puStack_14 = puVar1;
  FUN_00406d44(PTR_PTR_0066b6e0,&local_8);
  FUN_004aa278(param_1,PTR_DAT_004a52a0,local_8);
LAB_004aa35e:
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004aa37b;
  puStack_18 = (undefined1 *)0x4aa373;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

