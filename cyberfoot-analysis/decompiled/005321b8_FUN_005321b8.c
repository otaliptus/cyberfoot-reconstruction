// Address: 005321b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005321b8(undefined4 param_1,undefined4 *param_2,int *param_3,undefined1 param_4,int param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00402c38();
  iVar1 = FUN_00402c38();
  switch(param_4) {
  case 0:
    uVar2 = FUN_00402c38();
    *param_2 = uVar2;
    iVar1 = FUN_00402c38();
    *param_3 = iVar1;
    break;
  case 1:
    FUN_00402c38();
    FUN_004323c0();
    uVar2 = FUN_00405c40();
    *param_2 = uVar2;
    iVar1 = FUN_00402c38();
    *param_3 = iVar1;
    break;
  case 2:
    FUN_00402c38();
    uVar2 = FUN_004323c0();
    *param_2 = uVar2;
    iVar1 = FUN_00402c38();
    *param_3 = iVar1;
    break;
  case 3:
    uVar2 = FUN_00402c38();
    *param_2 = uVar2;
    iVar3 = iVar1 - param_5 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar1 - param_5 & 1U) != 0);
    }
    *param_3 = iVar3;
    break;
  case 4:
    FUN_00402c38();
    FUN_004323c0();
    uVar2 = FUN_00405c40();
    *param_2 = uVar2;
    iVar3 = iVar1 - param_5 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar1 - param_5 & 1U) != 0);
    }
    *param_3 = iVar3;
    break;
  case 5:
    FUN_00402c38();
    uVar2 = FUN_004323c0();
    *param_2 = uVar2;
    iVar3 = iVar1 - param_5 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar1 - param_5 & 1U) != 0);
    }
    *param_3 = iVar3;
    break;
  case 6:
    uVar2 = FUN_00402c38();
    *param_2 = uVar2;
    *param_3 = iVar1 - param_5;
    break;
  case 7:
    FUN_00402c38();
    FUN_004323c0();
    uVar2 = FUN_00405c40();
    *param_2 = uVar2;
    *param_3 = iVar1 - param_5;
    break;
  case 8:
    FUN_00402c38();
    uVar2 = FUN_004323c0();
    *param_2 = uVar2;
    *param_3 = iVar1 - param_5;
  }
  return;
}

