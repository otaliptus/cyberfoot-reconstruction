// Address: 0048ea14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048ea14(int param_1,undefined4 *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  uVar5 = *(undefined4 *)(param_1 + 0x19c);
  if (((*(int *)(param_1 + 0x114) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (iVar4 = FUN_0048e4d8(param_1), iVar4 != 0)) {
    local_20 = **(undefined4 **)(param_1 + 0x18);
    local_1c = (*(undefined4 **)(param_1 + 0x18))[1];
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar7 = *(int *)(iVar1 + 0x10);
    local_10 = param_1;
    for (local_28 = 0; local_28 < *(int *)(param_1 + 0x164); local_28 = local_28 + 1) {
      puVar2 = (ushort *)*param_2;
      if ((iVar7 < 1) &&
         (iVar6 = FUN_0048f3e0(&local_20,iVar4,iVar7,1), iVar7 = local_14, iVar4 = local_18,
         iVar6 == 0)) {
        return 0;
      }
      iVar7 = iVar7 + -1;
      if ((iVar4 >> ((byte)iVar7 & 0x1f) & 1U) != 0) {
        local_2c = (ushort)(1 << ((byte)uVar5 & 0x1f));
        *puVar2 = *puVar2 | local_2c;
      }
      param_2 = param_2 + 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    *puVar3 = local_20;
    puVar3[1] = local_1c;
    *(int *)(iVar1 + 0xc) = iVar4;
    *(int *)(iVar1 + 0x10) = iVar7;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

