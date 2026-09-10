// Address: 006427a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006427a8(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  uVar1 = FUN_00402c38();
  local_10 = param_5;
  if ((param_5 == 4) &&
     (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_2 * 0x130) !=
      *(int *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 4 + param_1 * 4))) {
    local_10 = 8;
  }
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ac7c);
  iVar3 = iVar2 + 1;
  FUN_004060a8(PTR_DAT_0066ac7c,PTR_DAT_00488da0,1,iVar3);
  *(int *)(*(int *)PTR_DAT_0066ac7c + -0x18 + iVar3 * 0x18) = local_10;
  *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + -0x14 + iVar3 * 0x18) =
       *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + param_3 * 0x1bc + 4 + param_1 * 4);
  *(int *)(*(int *)PTR_DAT_0066ac7c + -0x10 + iVar3 * 0x18) = param_2;
  *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + -0xc + iVar3 * 0x18) = param_4;
  *(undefined4 *)(*(int *)PTR_DAT_0066ac7c + -8 + iVar3 * 0x18) = uVar1;
  *(int *)(*(int *)PTR_DAT_0066ac7c + -4 + iVar3 * 0x18) = param_3;
  return iVar2;
}

