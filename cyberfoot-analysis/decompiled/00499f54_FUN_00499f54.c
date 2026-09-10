// Address: 00499f54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499f54(int param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_20;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0xe8) * 3;
  do {
    if (param_4 <= *param_5) {
      return;
    }
    if (*param_3 < param_7) {
      uVar3 = *(int *)(iVar1 + 0x3c) - *(int *)(iVar1 + 0x34);
      uVar4 = param_7 - *param_3;
      if (uVar3 < uVar4) {
        uVar4 = uVar3;
      }
      (**(code **)(*(int *)(param_1 + 0x15c) + 4))
                (param_1,*param_3 * 4 + param_2,iVar1 + 8,uVar4,*(undefined4 *)(iVar1 + 0x34));
      if (*(int *)(param_1 + 0x20) == *(int *)(iVar1 + 0x30)) {
        local_20 = (undefined4 *)(iVar1 + 8);
        for (local_18 = 0; local_18 < *(int *)(param_1 + 0x38); local_18 = local_18 + 1) {
          for (iVar6 = 1; iVar6 <= *(int *)(param_1 + 0xe8); iVar6 = iVar6 + 1) {
            FUN_00497714(*local_20,0,*local_20,*(undefined4 *)(param_1 + 0x1c),1,-iVar6);
          }
          local_20 = local_20 + 1;
        }
      }
      *param_3 = *param_3 + uVar4;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + uVar4;
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) - uVar4;
    }
    else {
      if (*(int *)(iVar1 + 0x30) != 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x34) < *(int *)(iVar1 + 0x3c)) {
        puVar5 = (undefined4 *)(iVar1 + 8);
        for (local_18 = 0; local_18 < *(int *)(param_1 + 0x38); local_18 = local_18 + 1) {
          FUN_00499dbc(*puVar5,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar1 + 0x34),
                       *(undefined4 *)(iVar1 + 0x3c));
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x3c);
      }
    }
    if (*(int *)(iVar1 + 0x34) == *(int *)(iVar1 + 0x3c)) {
      (**(code **)(*(int *)(param_1 + 0x160) + 4))
                (param_1,iVar1 + 8,*(undefined4 *)(iVar1 + 0x38),*param_5,param_6);
      *param_5 = *param_5 + 1;
      *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + *(int *)(param_1 + 0xe8);
      if (iVar2 <= *(int *)(iVar1 + 0x38)) {
        *(undefined4 *)(iVar1 + 0x38) = 0;
      }
      if (iVar2 <= *(int *)(iVar1 + 0x34)) {
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      *(int *)(iVar1 + 0x3c) = *(int *)(param_1 + 0xe8) + *(int *)(iVar1 + 0x34);
    }
  } while( true );
}

