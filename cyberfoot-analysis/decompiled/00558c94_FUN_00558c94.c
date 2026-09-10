// Address: 00558c94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558c94(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = *param_4;
  local_18 = param_4[1];
  local_14 = param_4[2];
  local_10 = param_4[3];
  local_8 = param_2;
  uVar1 = FUN_0052a6ac(PTR_PTR_00525ab0,1);
  FUN_0052b15c(uVar1,*(undefined4 *)(param_3 + 0x3c));
  FUN_0052b148(uVar1,*(undefined1 *)(param_3 + 0x38));
  FUN_0052b128(uVar1,*(undefined4 *)(param_1 + 0xd0));
  local_c = *(undefined4 *)(param_3 + 0x2c);
  iVar2 = FUN_0041ea50(param_3);
  if (iVar2 == *(int *)(param_1 + 0x34)) {
    local_c = *(undefined4 *)(param_3 + 0x5c);
  }
  if (*(char *)(param_3 + 0x54) == '\0') {
    local_c = *(undefined4 *)(param_3 + 0x58);
  }
  else if (*(char *)(param_3 + 0xc) == '\0') {
    if (*(char *)(param_3 + 0xd) != '\0') {
      local_c = *(undefined4 *)(param_3 + 0x50);
    }
  }
  else {
    local_c = *(undefined4 *)(param_3 + 0x40);
  }
  uVar3 = FUN_00402c38();
  uVar4 = FUN_00402c38();
  uVar5 = FUN_00402c38();
  uVar6 = FUN_00402c38();
  uVar7 = (undefined3)((uint)*(undefined4 *)(param_3 + 0x48) >> 8);
  FUN_0052a754(uVar1,local_8,*(undefined4 *)(param_3 + 0x30),0,*(undefined4 *)(param_3 + 0x28),
               CONCAT31(uVar7,*(undefined1 *)(param_3 + 0xc)),
               CONCAT31(uVar7,*(int *)(param_3 + 0x44) != 0x1fffffff),
               CONCAT31(uVar7,*(undefined1 *)(param_3 + 0x24)),
               CONCAT31(uVar7,*(undefined1 *)(param_3 + 0x4c)),*(undefined4 *)(param_3 + 0x48),
               *(undefined4 *)(param_3 + 0x44),local_c,uVar6,uVar5,uVar4,uVar3);
  iVar2 = FUN_0041ea50(param_3);
  if (iVar2 == *(int *)(param_1 + 0x34)) {
    uVar3 = 0;
    FUN_004aeba4(local_2c);
    FUN_00557a1c(local_8,local_2c,4,uVar3);
  }
  FUN_00403a84(uVar1);
  return;
}

