// Address: 0064c36c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064c36c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066b058;
  iVar4 = -1;
  uVar2 = FUN_0064dee4(param_1,param_3,param_7,param_5,param_6);
  iVar3 = FUN_00405eec(*(undefined4 *)puVar1);
  FUN_004060a8(puVar1,PTR_DAT_00488c20,1,iVar3 + 1);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + iVar3 * 0x14) = *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(undefined4 *)(*(int *)puVar1 + 4 + iVar3 * 0x14) = uVar2;
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(int *)(*(int *)puVar1 + 8 + iVar3 * 0x14) = param_2;
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(int *)(*(int *)puVar1 + 0xc + iVar3 * 0x14) = param_4;
  if ((param_1 < 7) || (param_1 == 10)) {
    iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8);
    if ((param_1 == 3) || (param_1 == 1)) {
      if ((param_4 < 3) && (param_7 == 1)) {
        FUN_0064c27c(param_2,param_1,param_4);
      }
    }
    else if (param_4 < 3) {
      FUN_0064c27c(param_2,param_1,param_4);
    }
  }
  else if ((((param_1 == 7) || (param_1 == 8)) || (param_1 == 9)) &&
          (iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_2 * 0x2f8), iVar4 < 0)) {
    iVar4 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + param_2 * 0x2f8) + 50000;
  }
  iVar3 = FUN_00405ef4(*(undefined4 *)puVar1);
  *(int *)(*(int *)puVar1 + 0x10 + iVar3 * 0x14) = iVar4;
  return;
}

