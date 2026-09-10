// Address: 004e9380
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e9380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte *pbVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 local_20 [16];
  undefined1 local_10 [10];
  undefined1 local_6;
  undefined1 local_5;
  
  local_6 = (undefined1)param_3;
  local_5 = (undefined1)param_2;
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  FUN_004070b8(param_5,param_4,local_10);
  puVar3 = local_10;
  FUN_004e7e18(*(undefined4 *)(param_1 + 0x244),1,local_20);
  cVar2 = FUN_004070c0(local_20,puVar3);
  if (cVar2 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x244) + 0x51);
    *pbVar1 = *pbVar1 | 2;
    FUN_004e7b1c(*(int *)(param_1 + 0x244),*(int *)(*(int *)(param_1 + 0x244) + 0x2c) + 1);
    FUN_004e8480(*(undefined4 *)(param_1 + 0x244),2);
    *(undefined1 *)(param_1 + 0x248) = 2;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x238),1);
  }
  FUN_004070b8(param_5,param_4,local_10);
  puVar3 = local_10;
  FUN_004e7e18(*(undefined4 *)(param_1 + 0x244),0,local_20);
  cVar2 = FUN_004070c0(local_20,puVar3);
  if (cVar2 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x244) + 0x40);
    *pbVar1 = *pbVar1 | 2;
    FUN_004e7b1c(*(int *)(param_1 + 0x244),*(int *)(*(int *)(param_1 + 0x244) + 0x2c) + -1);
    FUN_004e8480(*(undefined4 *)(param_1 + 0x244),0);
    *(undefined1 *)(param_1 + 0x248) = 1;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x238),1);
  }
  FUN_004070b8(param_5,param_4,local_10);
  puVar3 = local_10;
  FUN_004e7ed8(*(undefined4 *)(param_1 + 0x244),local_20);
  cVar2 = FUN_004070c0(local_20,puVar3);
  if (cVar2 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x244) + 0x18))();
    *(undefined1 *)(param_1 + 0x248) = 4;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x238),1);
  }
  FUN_004070b8(param_5,param_4,local_10);
  puVar3 = local_10;
  FUN_004e7f18(*(undefined4 *)(param_1 + 0x244),local_20);
  cVar2 = FUN_004070c0(local_20,puVar3);
  if (cVar2 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x244) + 0x1c))();
    *(undefined1 *)(param_1 + 0x248) = 3;
    FUN_0043b234(*(undefined4 *)(param_1 + 0x238),1);
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x244) + 0x18)) {
    FUN_004070b8(param_5,param_4,local_10);
    puVar3 = local_10;
    FUN_004e7f58(*(undefined4 *)(param_1 + 0x244),local_20);
    cVar2 = FUN_004070c0(local_20,puVar3);
    if (cVar2 != '\0') {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x244) + 0x5c);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}

