// Address: 004bcbb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004bcbb8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_c;
  int local_8;
  
  iVar5 = param_2 - param_1 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((param_2 - param_1 & 1U) != 0);
  }
  FUN_004049c4(*(int *)(param_4 + 8) + -0xc,
               (iVar5 + param_1) * *(int *)(*(int *)(param_4 + 8) + -8) +
               *(int *)(*(int *)(param_4 + 8) + -4),*(undefined4 *)(*(int *)(param_4 + 8) + -8));
  uVar3 = thunk_FUN_00404db0(*(int *)(param_4 + 8) + -0xc);
  local_8 = param_1 + -1;
  local_c = param_2 + 1;
  iVar5 = *(int *)(*(int *)(param_4 + 8) + -4);
  local_14 = (undefined4 *)(iVar5 + *(int *)(*(int *)(param_4 + 8) + -8) * local_8);
  local_18 = (undefined4 *)(iVar5 + *(int *)(*(int *)(param_4 + 8) + -8) * local_c);
  while( true ) {
    do {
      local_8 = local_8 + 1;
      local_14 = (undefined4 *)((int)local_14 + *(int *)(*(int *)(param_4 + 8) + -8));
      iVar5 = (**(code **)(*(int *)(param_4 + 8) + 8))(local_14,uVar3);
    } while (iVar5 < 0);
    do {
      local_c = local_c + -1;
      local_18 = (undefined4 *)((int)local_18 - *(int *)(*(int *)(param_4 + 8) + -8));
      iVar5 = (**(code **)(*(int *)(param_4 + 8) + 8))(uVar3,local_18);
    } while (iVar5 < 0);
    if (local_c <= local_8) break;
    puVar4 = local_14;
    puVar6 = local_18;
    iVar5 = DAT_0067aae0;
    if (0 < DAT_0067aae0) {
      do {
        uVar2 = *puVar4;
        *puVar4 = *puVar6;
        *puVar6 = uVar2;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = DAT_0067aae4;
    if (0 < DAT_0067aae4) {
      do {
        uVar1 = *(undefined1 *)puVar4;
        *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
        *(undefined1 *)puVar6 = uVar1;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return local_c;
}

