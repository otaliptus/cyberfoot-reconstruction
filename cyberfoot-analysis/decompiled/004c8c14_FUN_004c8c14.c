// Address: 004c8c14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c8c14(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  uVar1 = FUN_004ae808(param_2,param_2,param_3,0x3f800000);
  uVar1 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar1,uVar2);
  if (param_4 == 0) {
    FUN_004b17fc(param_1,uVar1);
  }
  else {
    uVar2 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
    FUN_004b1548(uVar2);
    FUN_004b1574(uVar2);
    FUN_004b1548(uVar2);
    FUN_004b1574(uVar2);
    FUN_004b1548(uVar2);
    FUN_004b1574(uVar2);
    FUN_004b1548(uVar2);
    FUN_004b1574(uVar2);
    FUN_004b152c(uVar2);
    FUN_004af5f4(param_1,uVar1,uVar2);
    FUN_00403a84(uVar2);
  }
  FUN_00403a84(uVar1);
  return;
}

