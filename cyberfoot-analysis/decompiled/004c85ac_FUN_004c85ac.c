// Address: 004c85ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c85ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  uVar3 = 0x3f800000;
  uVar2 = FUN_004ae808(param_2);
  uVar2 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,uVar3);
  FUN_004b1548(uVar1);
  FUN_004b1574(uVar1);
  FUN_004b1548(uVar1);
  FUN_004b1574(uVar1);
  FUN_004b1548(uVar1);
  FUN_004af5f4(param_1,uVar2,uVar1);
  FUN_00403a84(uVar2);
  FUN_00403a84(uVar1);
  if (param_4 == '\0') {
    uVar1 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
    uVar3 = 0x3f800000;
    FUN_004c7bcc(0xffffff,0xfffffff6);
    uVar2 = FUN_004ae808();
    uVar2 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,uVar3);
    FUN_004b1548(uVar1);
    FUN_004af5f4(param_1,uVar2,uVar1);
    FUN_00403a84(uVar2);
    FUN_00403a84(uVar1);
  }
  else {
    uVar1 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
    uVar3 = 0x3f800000;
    FUN_004c7bcc(param_2,0xfffffffb);
    uVar2 = FUN_004ae808();
    uVar2 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,uVar3);
    FUN_004b1548(uVar1);
    FUN_004af5f4(param_1,uVar2,uVar1);
    FUN_00403a84(uVar2);
    FUN_00403a84(uVar1);
  }
  return;
}

