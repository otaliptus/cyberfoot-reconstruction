// Address: 00587f44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00587f44(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005881df;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *(undefined4 *)PTR_DAT_0066afb0 = DAT_006d21d4;
  *PTR_DAT_0066b62c = 0;
  FUN_00642c50(0x231,&local_8);
  iVar1 = *(int *)PTR_DAT_0066afb0;
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + iVar1 * 0x130) < 5) {
    if ((float10)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130) * _DAT_005881f0 <=
        (float10)*(int *)PTR_DAT_0066acb8 * (float10)_DAT_005881ec) {
      *PTR_DAT_0066b62c = 1;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + *(int *)PTR_DAT_0066afb0 * 0x130) < 7) {
    if ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130) * _DAT_005881fc <=
        (float)*(int *)PTR_DAT_0066acb8 * _DAT_005881ec) {
      *PTR_DAT_0066b62c = 1;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + *(int *)PTR_DAT_0066afb0 * 0x130) < 9) {
    if ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130) * _DAT_00588200 <=
        (float)*(int *)PTR_DAT_0066acb8 * _DAT_005881ec) {
      *PTR_DAT_0066b62c = 1;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + *(int *)PTR_DAT_0066afb0 * 0x130) == 9) {
    if ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130) * _DAT_00588204 <=
        (float)*(int *)PTR_DAT_0066acb8 * _DAT_005881ec) {
      *PTR_DAT_0066b62c = 1;
    }
  }
  else if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + *(int *)PTR_DAT_0066afb0 * 0x130) == 10) &&
          ((float)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x40 + iVar1 * 0x130) * _DAT_00588208 <=
           (float)*(int *)PTR_DAT_0066acb8 * _DAT_005881ec)) {
    *PTR_DAT_0066b62c = 1;
  }
  if (*PTR_DAT_0066b62c != '\0') {
    FUN_00642c50(0x230,&local_8);
    iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                    *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) *
                    0x2f8);
    if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) &&
        (iVar1 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))
        ) && (iVar1 == 1)) {
      if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x98 +
                  *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)PTR_DAT_0066afb0 * 0x130) *
                  0x2f8) < 0x12) {
        *PTR_DAT_0066b62c = 0;
      }
      else {
        *PTR_DAT_0066b62c = 0;
      }
    }
  }
  if (*PTR_DAT_0066b62c != '\0') {
    FUN_00642c50(0x415,&local_8);
  }
  FUN_0040502c(param_2,local_8);
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005881e6;
  puStack_14 = (undefined1 *)0x5881de;
  FUN_00404ff0(&local_8,uStack_18,puVar2);
  return;
}

