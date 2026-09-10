// Address: 00584e08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584e08(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00430280(*(undefined4 *)(param_1 + 0x1f8));
  FUN_0042ab6c(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x70));
  FUN_0041c990(*(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x19c),
               *(undefined4 *)(param_1 + 0x1a0),local_30,*(undefined4 *)(param_1 + 0x1a4));
  FUN_0042af8c(iVar2,local_30);
  iVar2 = *(int *)(param_1 + 0x184);
  local_10 = FUN_00402c44();
  local_18 = FUN_00402c44();
  if (iVar2 <= *(int *)(param_1 + 0x174)) {
    local_1c = (*(int *)(param_1 + 0x174) - iVar2) + 1;
    local_8 = iVar2;
    do {
      iVar3 = FUN_004303f0(*(undefined4 *)(param_1 + 0x1f8),local_8);
      local_14 = local_18;
      iVar2 = *(int *)(param_1 + 0x184);
      iVar4 = *(int *)(param_1 + 0x188) + -1;
      if (iVar2 <= iVar4) {
        local_20 = (iVar4 - iVar2) + 1;
        do {
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + 2 + iVar2 * 3) = uVar1;
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + 1 + iVar2 * 3) = uVar1;
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + iVar2 * 3) = uVar1;
          local_14 = local_14 + 1;
          iVar2 = iVar2 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      local_8 = local_8 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar3 = FUN_004303f0(*(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x174));
  local_c = local_10;
  iVar2 = *(int *)(param_1 + 0x184);
  iVar4 = *(int *)(param_1 + 0x188) + -1;
  if (iVar2 <= iVar4) {
    local_1c = (iVar4 - iVar2) + 1;
    do {
      uVar5 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar5);
      *(undefined1 *)(iVar3 + 2 + iVar2 * 3) = uVar1;
      uVar5 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar5);
      *(undefined1 *)(iVar3 + 1 + iVar2 * 3) = uVar1;
      uVar5 = FUN_00402c44();
      uVar1 = FUN_00584770(param_1,uVar5);
      *(undefined1 *)(iVar3 + iVar2 * 3) = uVar1;
      local_c = local_c + 1;
      iVar2 = iVar2 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar2 = *(int *)(param_1 + 0x174) + 1;
  iVar3 = *(int *)(param_1 + 0x18c) + -1;
  if (iVar2 <= iVar3) {
    local_1c = (iVar3 - iVar2) + 1;
    local_8 = iVar2;
    do {
      iVar3 = FUN_004303f0(*(undefined4 *)(param_1 + 0x1f8),local_8);
      local_c = local_10;
      iVar2 = *(int *)(param_1 + 0x184);
      iVar4 = *(int *)(param_1 + 0x188) + -1;
      if (iVar2 <= iVar4) {
        local_20 = (iVar4 - iVar2) + 1;
        do {
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + 2 + iVar2 * 3) = uVar1;
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + 1 + iVar2 * 3) = uVar1;
          uVar5 = FUN_00402c44();
          uVar1 = FUN_00584770(param_1,uVar5);
          *(undefined1 *)(iVar3 + iVar2 * 3) = uVar1;
          local_c = local_c + 1;
          iVar2 = iVar2 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      local_8 = local_8 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FUN_00585204(param_1);
  return;
}

