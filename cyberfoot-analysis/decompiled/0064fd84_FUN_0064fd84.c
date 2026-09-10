// Address: 0064fd84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064fd84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  FUN_004060a8(PTR_DAT_0066b05c,PTR_DAT_00488e60,1,iVar2 + 1);
  *(undefined4 *)(*(int *)PTR_DAT_0066b05c + iVar2 * 0x18) = param_1;
  iVar1 = *(int *)PTR_DAT_0066b05c;
  *(undefined4 *)(iVar1 + 8 + iVar2 * 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x18) = param_5;
  *(undefined4 *)(*(int *)PTR_DAT_0066b05c + 0x10 + iVar2 * 0x18) = param_2;
  return;
}

