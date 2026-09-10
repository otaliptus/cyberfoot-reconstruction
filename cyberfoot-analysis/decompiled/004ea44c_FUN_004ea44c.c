// Address: 004ea44c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ea44c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [10];
  undefined1 local_6;
  undefined1 local_5;
  
  local_6 = (undefined1)param_3;
  local_5 = (undefined1)param_2;
  FUN_004e95d4(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x255) == '\0') {
    *(undefined1 *)((int)param_1 + 0x255) = 1;
    FUN_004633d8(param_1);
  }
  else {
    FUN_004070b8(param_5,param_4,local_10);
    puVar2 = local_10;
    (**(code **)(*param_1 + 0x44))(param_1,local_20);
    cVar1 = FUN_004070c0(local_20,puVar2);
    if (cVar1 == '\0') {
      if ((char)param_1[0x95] == '\0') {
        (**(code **)(*param_1 + 0xf0))();
      }
    }
    else {
      (**(code **)(*param_1 + 0xe4))(param_1,param_5,param_4);
    }
  }
  return;
}

