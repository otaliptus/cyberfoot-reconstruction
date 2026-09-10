// Address: 00454b24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454b24(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [8];
  undefined1 local_14;
  undefined4 local_10;
  
  iVar2 = FUN_004673cc(param_1,0x417,param_2,auStack_1c);
  if (iVar2 != 0) {
    FUN_004539a0(local_10,local_14);
    uVar1 = FUN_004538b4(local_10);
    uVar3 = FUN_00408014(uVar1,0);
    uVar4 = FUN_00453dec(local_10);
    FUN_004673cc(param_1,0x411,uVar4,uVar3);
  }
  return;
}

