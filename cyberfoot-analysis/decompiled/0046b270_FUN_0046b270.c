// Address: 0046b270
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046b270(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0046b2fa;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (PTR_DAT_0066b7ac[0xc] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_0048531c(*(undefined4 *)PTR_DAT_0066b760,&local_8);
      iVar2 = FUN_00409790(*(undefined4 *)(param_1 + 0x188),local_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_0066b760 + 0x3c),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    puVar1 = puStack_10;
    if (*(char *)(param_1 + 0x184) == '\0') {
      uVar3 = FUN_0046cae0(param_1);
      FUN_00471768(uVar3,1);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046b301;
  puStack_14 = (undefined1 *)0x46b2f9;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

