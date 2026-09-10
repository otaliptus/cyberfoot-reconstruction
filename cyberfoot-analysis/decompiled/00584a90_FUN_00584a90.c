// Address: 00584a90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584a90(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0041c990(*(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x19c),
               *(undefined4 *)(param_1 + 0x1a0),local_28,*(undefined4 *)(param_1 + 0x1a4));
  FUN_0042af8c(iVar2,local_28);
  iVar2 = *(int *)(param_1 + 0x18c);
  iVar3 = *(int *)(param_1 + 0x184);
  local_c = FUN_00402c44();
  local_10 = FUN_00402c44();
  iVar2 = iVar2 + -1;
  if (iVar3 <= iVar2) {
    local_14 = (iVar2 - iVar3) + 1;
    local_8 = iVar3;
    do {
      iVar3 = FUN_004303f0(*(undefined4 *)(param_1 + 0x1f8),local_8);
      iVar2 = *(int *)(param_1 + 0x184);
      if (iVar2 <= *(int *)(param_1 + 0x174)) {
        local_18 = (*(int *)(param_1 + 0x174) - iVar2) + 1;
        do {
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + 2 + iVar2 * 3) = uVar1;
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + 1 + iVar2 * 3) = uVar1;
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + iVar2 * 3) = uVar1;
          iVar2 = iVar2 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      uVar4 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar4);
      *(undefined1 *)(iVar3 + 2 + *(int *)(param_1 + 0x174) * 3) = uVar1;
      uVar4 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar4);
      *(undefined1 *)(iVar3 + 1 + *(int *)(param_1 + 0x174) * 3) = uVar1;
      uVar4 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar4);
      *(undefined1 *)(iVar3 + *(int *)(param_1 + 0x174) * 3) = uVar1;
      iVar5 = *(int *)(param_1 + 0x174) + 1;
      iVar2 = *(int *)(param_1 + 0x188) + -1;
      if (iVar5 <= iVar2) {
        local_18 = (iVar2 - iVar5) + 1;
        do {
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + 2 + iVar5 * 3) = uVar1;
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + 1 + iVar5 * 3) = uVar1;
          uVar4 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar4);
          *(undefined1 *)(iVar3 + iVar5 * 3) = uVar1;
          iVar5 = iVar5 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_c = local_c + 1;
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_00585204(param_1);
  return;
}

