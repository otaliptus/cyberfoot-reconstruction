// Address: 005ea08c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_ImagecamisaMouseDown(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005ea171;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (*(int *)(iVar2 + 0xc) < 0xc) {
    FUN_006462ac(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_8);
    if (local_8 == 0) {
      FUN_00403c34(param_2,PTR_PTR_004386b8);
      *(undefined2 *)(iVar2 + 0x7a) = 4;
    }
    else {
      FUN_00403c34(param_2,PTR_PTR_004386b8);
      *(undefined2 *)(iVar2 + 0x7a) = 1;
    }
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (0xb < *(int *)(iVar2 + 0xc)) {
    FUN_00403c34(param_2,PTR_PTR_004386b8);
    *(undefined2 *)(iVar2 + 0x7a) = 3;
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  if (*(int *)(iVar2 + 0xc) == 1) {
    FUN_00403c34(param_2,PTR_PTR_004386b8);
    *(undefined2 *)(iVar2 + 0x7a) = 2;
  }
  FUN_00403c34(param_2,PTR_PTR_004386b8);
  FUN_004668c0(iVar2,1,0xffffffff);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005ea178;
  puStack_18 = (undefined1 *)0x5ea170;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

