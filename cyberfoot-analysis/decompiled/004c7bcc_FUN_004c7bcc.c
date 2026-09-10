// Address: 004c7bcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c7bcc(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = FUN_00429e64(param_1);
  cVar1 = FUN_004080c0(uVar4);
  cVar2 = FUN_004080c4(uVar4);
  cVar3 = FUN_004080c8(uVar4);
  if (cVar1 == '\0') {
    uVar4 = FUN_004323b8(0,param_2);
  }
  else {
    FUN_00432334(100,param_2 + 100);
    uVar4 = FUN_00402c38();
  }
  if (cVar2 == '\0') {
    uVar5 = FUN_004323b8(0,param_2);
  }
  else {
    FUN_00432334(100,param_2 + 100);
    uVar5 = FUN_00402c38();
  }
  if (cVar3 == '\0') {
    uVar6 = FUN_004323b8(0,param_2);
  }
  else {
    FUN_00432334(100,param_2 + 100);
    uVar6 = FUN_00402c38();
  }
  FUN_004080a4(uVar4,uVar5,uVar6);
  return;
}

