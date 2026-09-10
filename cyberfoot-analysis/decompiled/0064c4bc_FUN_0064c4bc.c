// Address: 0064c4bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064c4bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if ((param_1 == 4) || (param_1 == 6)) {
    param_4 = *(undefined4 *)PTR_DAT_0066b484;
  }
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b3d0);
  FUN_004060a8(PTR_DAT_0066b3d0,PTR_DAT_00488c40,1,iVar1 + 1);
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + iVar1 * 0x1c) =
       *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
  *(int *)(*(int *)PTR_DAT_0066b3d0 + 4 + iVar1 * 0x1c) = param_1;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + 0xc + iVar1 * 0x1c) = param_3;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + 8 + iVar1 * 0x1c) = param_2;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + 0x10 + iVar1 * 0x1c) = param_6;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + 0x14 + iVar1 * 0x1c) = param_5;
  *(undefined4 *)(*(int *)PTR_DAT_0066b3d0 + 0x18 + iVar1 * 0x1c) = param_4;
  return;
}

