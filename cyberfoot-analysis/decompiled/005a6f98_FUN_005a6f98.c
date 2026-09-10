// Address: 005a6f98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005a6f98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00405eec(DAT_006d2594);
  FUN_004060a8(&DAT_006d2594,PTR_DAT_005a5bd4,1,iVar1 + 1);
  iVar1 = FUN_00405ef4(DAT_006d2594);
  *(undefined4 *)(DAT_006d2594 + 4 + iVar1 * 0x10) = param_2;
  iVar1 = FUN_00405ef4(DAT_006d2594);
  *(undefined4 *)(DAT_006d2594 + 8 + iVar1 * 0x10) = param_3;
  iVar1 = FUN_00405ef4(DAT_006d2594);
  *(undefined4 *)(DAT_006d2594 + 0xc + iVar1 * 0x10) = param_4;
  return;
}

