// Address: 004c82cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c82cc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  uVar4 = 0x3f800000;
  uVar3 = FUN_004ae808(param_2);
  uVar3 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar3,uVar4);
  FUN_004b1548(uVar2);
  FUN_004b1574(uVar2);
  FUN_004b1548(uVar2);
  FUN_004b1574(uVar2);
  FUN_004b1548(uVar2);
  FUN_004af5f4(param_1,uVar3,uVar2);
  FUN_00403a84(uVar3);
  FUN_00403a84(uVar2);
  uVar2 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  uVar4 = 0x3f800000;
  FUN_004c7bcc(param_2,0xfffffffb);
  uVar3 = FUN_004ae808();
  uVar3 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar3,uVar4);
  cVar1 = FUN_004ae7f8();
  if (cVar1 == '\0') {
    FUN_004b1548(uVar2);
  }
  else {
    FUN_004b1548(uVar2);
  }
  FUN_004af5f4(param_1,uVar3,uVar2);
  FUN_00403a84(uVar3);
  FUN_00403a84(uVar2);
  return;
}

