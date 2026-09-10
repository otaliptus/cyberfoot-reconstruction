// Address: 005d9c4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d9c4c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xffffffff;
  local_c = -1;
  iVar1 = FUN_0064dee4(param_5,param_2,1,0xffffffff,0xffffffff);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b058);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066b058 + iVar3 * 0x14) == param_6) &&
          (iVar1 == *(int *)(*(int *)PTR_DAT_0066b058 + 4 + iVar3 * 0x14))) &&
         (*(int *)(*(int *)PTR_DAT_0066b058 + 0xc + iVar3 * 0x14) == param_3)) {
        local_10 = *(undefined4 *)(*(int *)PTR_DAT_0066b058 + 8 + iVar3 * 0x14);
        local_c = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_4 = local_10;
  param_4[1] = local_c;
  return;
}

