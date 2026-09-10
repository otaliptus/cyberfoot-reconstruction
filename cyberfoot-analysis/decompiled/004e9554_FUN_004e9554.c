// Address: 004e9554
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e9554(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [11];
  undefined1 local_5;
  
  local_5 = (undefined1)param_2;
  FUN_00467a98(param_1,param_2,param_3,param_4);
  FUN_004070b8(param_3,param_4,local_10);
  puVar2 = local_10;
  FUN_004e9330(param_1,local_20);
  cVar1 = FUN_004070c0(local_20,puVar2);
  if ((cVar1 == '\0') && (cVar1 = FUN_004e7fc0(*(undefined4 *)(param_1 + 0x244)), cVar1 == '\0')) {
    FUN_004e7fc8(*(undefined4 *)(param_1 + 0x244));
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x244) + 0x20))
            (*(int **)(param_1 + 0x244),local_5,param_3,param_4);
  return;
}

