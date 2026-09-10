// Address: 004eb860
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb860(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_20 [16];
  undefined1 local_10 [10];
  undefined1 local_6;
  undefined1 local_5;
  
  local_6 = param_3;
  local_5 = param_2;
  FUN_004070b8(param_5,param_4,local_10);
  puVar5 = local_10;
  uVar4 = 0x13;
  puVar3 = local_20;
  uVar2 = FUN_00465c0c(param_1);
  FUN_0040709c(0,0,uVar2,puVar3,uVar4);
  cVar1 = FUN_004070c0(local_20,puVar5);
  if (cVar1 == '\0') {
    FUN_004ea44c(param_1,local_5,local_6,param_4,param_5);
  }
  *(undefined1 *)(param_1 + 0x278) = 0;
  return;
}

