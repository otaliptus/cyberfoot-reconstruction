// Address: 004ea6d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ea6d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [11];
  undefined1 local_5;
  
  local_5 = (undefined1)param_2;
  FUN_004e9554(param_1,param_2,param_3,param_4);
  FUN_004070b8(param_3,param_4,local_10);
  puVar2 = local_10;
  FUN_004e9204(param_1,local_20);
  cVar1 = FUN_004070c0(local_20,puVar2);
  if (cVar1 != '\0') {
    cVar1 = FUN_004e7fc0(*(undefined4 *)(param_1 + 0x244));
    if (cVar1 == '\0') {
      FUN_004eae38(param_1,(param_4 + -2) / *(int *)(param_1 + 0x284) +
                           *(int *)(*(int *)(param_1 + 0x244) + 0x2c));
    }
  }
  return;
}

