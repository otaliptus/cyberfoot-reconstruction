// Address: 005a1eb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a1eb4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined4 local_6c;
  float10 local_64;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined1 local_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_c;
  int local_8;
  
  puVar4 = PTR_DAT_0066b5b8;
  puStack_20 = &stack0xfffffffc;
  iVar7 = 0x11;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_24 = &LAB_005a2262;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar5 = &stack0xfffffffc;
  local_8 = param_2;
  if (*(char *)(*(int *)puVar4 + 0x7d + (int)DAT_006d2494 * 0x130) != '\0') {
    *(undefined1 *)(*(int *)puVar4 + 0x7d + (int)DAT_006d2494 * 0x130) = 0;
    puVar1 = (undefined4 *)(*(int *)puVar4 + 0x48 + (int)DAT_006d2494 * 0x130);
    puVar2 = (undefined4 *)(*(int *)puVar4 + 0x40 + (int)DAT_006d2494 * 0x130);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    local_2c = (undefined1 *)0x5a1f2c;
    uVar6 = FUN_00402c38();
    local_2c = (undefined1 *)0x5a1f34;
    FUN_0064d948(uVar6,&local_c);
    local_2c = local_c;
    puStack_30 = (undefined1 *)0x5a1f4d;
    uVar6 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x334) + 0x138))();
    puStack_30 = (undefined1 *)0x5a1f59;
    FUN_00416244(&stack0xffffffe4,uVar6,0xfc);
    puStack_30 = &stack0xffffffe4;
    uStack_34 = 0x5a1f6a;
    FUN_00416478(&local_2c,"passe");
    puVar5 = puStack_30;
    puStack_30 = (undefined1 *)0x5a1f80;
    FUN_0050e9b8(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x334),&local_2c,puVar5);
    puStack_30 = (undefined1 *)0x5a1f95;
    uVar6 = (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x334) + 0x138))();
    local_2c = (undefined1 *)0x5a1fa1;
    FUN_00416244(local_3c,uVar6,0xfc);
    local_2c = local_3c;
    puStack_30 = (undefined1 *)0x5a1fb2;
    FUN_00416478(local_4c,"passe");
    puVar5 = local_2c;
    local_2c = (undefined1 *)0x5a1fc8;
    local_2c = (undefined1 *)
               FUN_004f77e4(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x334),local_4c,puVar5);
    puStack_30 = (undefined1 *)0x5a1fdd;
    uVar6 = FUN_00402c38();
    puStack_30 = (undefined1 *)0x5a1fe5;
    FUN_006468f4(uVar6,&local_50);
    puVar5 = local_2c;
    local_2c = (undefined1 *)0x5a1fee;
    FUN_004f7234(puVar5,local_50);
    puVar5 = puStack_20;
  }
  puStack_20 = puVar5;
  local_2c = (undefined1 *)0x5a2002;
  (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x538) + 100))
            (*(int **)(*(int *)PTR_DAT_0066b054 + 0x538),0);
  local_2c = (undefined1 *)0x5a2016;
  (**(code **)(**(int **)(*(int *)PTR_DAT_0066b054 + 0x53c) + 100))
            (*(int **)(*(int *)PTR_DAT_0066b054 + 0x53c),0);
  local_2c = (undefined1 *)0x5a2021;
  iVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
  if (iVar7 == 0) {
    local_2c = (undefined1 *)0x5a2031;
    FUN_00647c9c(6,DAT_006d2494);
  }
  else {
    local_2c = (undefined1 *)0x5a203e;
    iVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
    if (iVar7 == 1) {
      local_2c = (undefined1 *)0x5a204d;
      FUN_00647c9c(0xc,DAT_006d2494);
    }
    else {
      local_2c = (undefined1 *)0x5a205a;
      iVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
      if (iVar7 == 2) {
        local_2c = (undefined1 *)0x5a206b;
        FUN_00647c9c(0x18,DAT_006d2494);
      }
      else {
        local_2c = (undefined1 *)0x5a2078;
        iVar7 = FUN_0054c0f0(*(undefined4 *)(param_1 + 800));
        if (iVar7 == 3) {
          local_2c = (undefined1 *)0x5a2089;
          FUN_00647c9c(0x24,DAT_006d2494);
        }
        else {
          local_2c = (undefined1 *)0x5a2097;
          FUN_00647c9c(6,DAT_006d2494);
        }
      }
    }
  }
  if (*(char *)(*(int *)puVar4 + 0xf4 + (int)DAT_006d2494 * 0x130) != '\0') {
    piVar3 = (int *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130);
    *piVar3 = *piVar3 + 1;
  }
  if (3 < *(int *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130)) {
    *(undefined4 *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130) = 3;
  }
  *(undefined4 *)(*(int *)puVar4 + 0xf0 + (int)DAT_006d2494 * 0x130) = 0;
  *(undefined1 *)(*(int *)puVar4 + 0xf4 + (int)DAT_006d2494 * 0x130) = 0;
  local_2c = (undefined1 *)0x5a20f4;
  FUN_00466208(*(undefined4 *)(param_1 + 0x30c),&local_54);
  local_2c = (undefined1 *)0x5a20fc;
  local_58 = FUN_00409ff8(local_54);
  local_64 = (float10)local_58 * (float10)_DAT_005a2270 -
             (float10)*(longlong *)(*(int *)puVar4 + 0x38 + (int)DAT_006d2494 * 0x130);
  local_2c = (undefined1 *)0x5a2133;
  local_6c = FUN_00402c38();
  if ((float10)CONCAT44(extraout_EDX,local_6c) * (float10)_DAT_005a2270 < local_64) {
    piVar3 = (int *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130);
    *piVar3 = *piVar3 + 1;
    local_2c = DAT_006d2494;
    puStack_30 = (undefined1 *)0x0;
    uStack_34 = 0;
    uStack_38 = 0x5a2176;
    FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),2,1);
  }
  if (3 < *(int *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130)) {
    *(undefined4 *)(*(int *)puVar4 + 0xe4 + (int)DAT_006d2494 * 0x130) = 3;
  }
  *(longlong *)(*(int *)puVar4 + 0x38 + (int)DAT_006d2494 * 0x130) =
       (longlong)ROUND((float)local_8 * _DAT_005a2270);
  local_2c = (undefined1 *)0x5a21b0;
  FUN_00651ebc(local_8,&local_70);
  local_2c = local_70;
  piVar3 = *(int **)(*(int *)PTR_DAT_0066b054 + 0x334);
  puStack_30 = (undefined1 *)0x5a21cb;
  uVar6 = (**(code **)(*piVar3 + 0x138))();
  puStack_30 = (undefined1 *)0x5a21d7;
  FUN_00416244(local_80,uVar6,0xfc);
  puStack_30 = local_80;
  uStack_34 = 0x5a21eb;
  FUN_00416478(local_90,"salario");
  puVar5 = puStack_30;
  puStack_30 = (undefined1 *)0x5a21fe;
  FUN_0050e9b8(piVar3,local_90,puVar5);
  puStack_30 = (undefined1 *)0x5a220b;
  FUN_00652900(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_005a2269;
  uStack_28 = 0x5a222e;
  FUN_00405744(local_90,PTR_DAT_004010f8,2);
  uStack_28 = 0x5a2236;
  FUN_00404ff0(&local_70);
  uStack_28 = 0x5a223e;
  FUN_004048d4(&local_54);
  uStack_28 = 0x5a2246;
  FUN_00404ff0(&local_50);
  uStack_28 = 0x5a2259;
  FUN_00405744(local_4c,PTR_DAT_004010f8,4);
  uStack_28 = 0x5a2261;
  FUN_00404ff0(&local_c);
  return;
}

