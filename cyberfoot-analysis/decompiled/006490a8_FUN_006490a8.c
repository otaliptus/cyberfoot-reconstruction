// Address: 006490a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006490a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b114);
  FUN_004060a8(PTR_DAT_0066b114,PTR_DAT_00488de0,1,iVar1 + 1);
  *(undefined4 *)(*(int *)PTR_DAT_0066b114 + iVar1 * 0x14) = param_1;
  *(undefined4 *)(*(int *)PTR_DAT_0066b114 + 4 + iVar1 * 0x14) =
       *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
  *(undefined4 *)(*(int *)PTR_DAT_0066b114 + 8 + iVar1 * 0x14) = param_3;
  *(undefined4 *)(*(int *)PTR_DAT_0066b114 + 0xc + iVar1 * 0x14) = param_2;
  *(undefined4 *)(*(int *)PTR_DAT_0066b114 + 0x10 + iVar1 * 0x14) = param_4;
  return;
}

