// Address: 0065a1c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065a1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_0066afa0;
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
  FUN_004060a8(puVar2,PTR_DAT_00488d20,1,iVar3 + 1);
  *(undefined4 *)(*(int *)puVar2 + iVar3 * 0x48) = param_1;
  *(undefined4 *)(*(int *)puVar2 + 4 + iVar3 * 0x48) = param_2;
  *(undefined4 *)(*(int *)puVar2 + 0x1c + iVar3 * 0x48) = param_3;
  *(undefined4 *)(*(int *)puVar2 + 0x18 + iVar3 * 0x48) = param_9;
  *(undefined4 *)(*(int *)puVar2 + 0x38 + iVar3 * 0x48) = param_8;
  *(undefined4 *)(*(int *)puVar2 + 0x20 + iVar3 * 0x48) = param_7;
  *(undefined4 *)(*(int *)puVar2 + 0x24 + iVar3 * 0x48) = param_6;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x30 + iVar3 * 0x48) = param_4;
  *(undefined4 *)(iVar1 + 0x34 + iVar3 * 0x48) = param_5;
  return;
}

