// Address: 00499df4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499df4(int param_1,int param_2,uint *param_3,uint param_4,uint *param_5,
                 undefined4 *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar3 = *(int *)(param_1 + 0x150);
  while( true ) {
    if (param_7 <= *param_3) {
      return;
    }
    if (param_4 <= *param_5) break;
    uVar1 = *(int *)(param_1 + 0xe8) - *(int *)(iVar3 + 0x34);
    uVar2 = param_7 - *param_3;
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    (**(code **)(*(int *)(param_1 + 0x15c) + 4))
              (param_1,*param_3 * 4 + param_2,iVar3 + 8,uVar2,*(undefined4 *)(iVar3 + 0x34));
    *param_3 = *param_3 + uVar2;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + uVar2;
    *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) - uVar2;
    if ((*(int *)(iVar3 + 0x30) == 0) && (*(int *)(iVar3 + 0x34) < *(int *)(param_1 + 0xe8))) {
      local_14 = (undefined4 *)(iVar3 + 8);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x38); iVar4 = iVar4 + 1) {
        FUN_00499dbc(*local_14,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar3 + 0x34),
                     *(undefined4 *)(param_1 + 0xe8));
        local_14 = local_14 + 1;
      }
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0xe8);
    }
    if (*(int *)(iVar3 + 0x34) == *(int *)(param_1 + 0xe8)) {
      (**(code **)(*(int *)(param_1 + 0x160) + 4))(param_1,iVar3 + 8,0,*param_5,param_6);
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *param_5 = *param_5 + 1;
    }
    if ((*(int *)(iVar3 + 0x30) == 0) && (*param_5 < param_4)) {
      iVar3 = *(int *)(param_1 + 0x40);
      local_18 = param_6;
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x38); iVar4 = iVar4 + 1) {
        FUN_00499dbc(*local_18,*(int *)(iVar3 + 0x1c) << 3,*param_5 * *(int *)(iVar3 + 0xc),
                     *(int *)(iVar3 + 0xc) * param_4);
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 0x54;
      }
      *param_5 = param_4;
      return;
    }
  }
  return;
}

