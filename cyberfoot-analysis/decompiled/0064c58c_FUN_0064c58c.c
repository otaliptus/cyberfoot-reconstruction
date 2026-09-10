// Address: 0064c58c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064c58c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0066b560;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b560);
  FUN_004060a8(puVar1,PTR_DAT_00488c60,1,iVar2 + 1);
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + iVar2 * 0x1c) = *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 4 + iVar2 * 0x1c) = param_1;
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 0xc + iVar2 * 0x1c) = param_3;
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 8 + iVar2 * 0x1c) = param_2;
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 0x14 + iVar2 * 0x1c) = param_4;
  return;
}

