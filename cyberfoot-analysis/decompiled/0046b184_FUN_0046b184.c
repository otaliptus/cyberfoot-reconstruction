// Address: 0046b184
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046b184(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  HKL hkl;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0046b263;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (PTR_DAT_0066b7ac[0xc] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_0048531c(*(undefined4 *)PTR_DAT_0066b760,&local_8);
      iVar2 = FUN_00409790(*(undefined4 *)(param_1 + 0x188),local_8);
      puVar1 = puStack_18;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_0048511c(*(undefined4 *)PTR_DAT_0066b760);
        iVar2 = (**(code **)(*piVar3 + 0x14))();
        puVar1 = puStack_18;
        if (iVar2 != 0) {
          hkl = *(HKL *)(*(int *)PTR_DAT_0066b760 + 0x3c);
          if (*(char *)(param_1 + 0x184) != '\0') {
            piVar3 = (int *)FUN_0048511c(*(undefined4 *)PTR_DAT_0066b760);
            iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(param_1 + 0x188));
            if (-1 < iVar2) {
              piVar3 = (int *)FUN_0048511c(*(undefined4 *)PTR_DAT_0066b760);
              hkl = (HKL)(**(code **)(*piVar3 + 0x18))(piVar3,iVar2);
            }
          }
          ActivateKeyboardLayout(hkl,1);
          puVar1 = puStack_18;
        }
      }
    }
    puStack_18 = puVar1;
    uVar4 = FUN_0046cae0(param_1);
    FUN_00471784(uVar4,*(undefined1 *)(param_1 + 0x184));
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046b26a;
  puStack_1c = (undefined1 *)0x46b262;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

