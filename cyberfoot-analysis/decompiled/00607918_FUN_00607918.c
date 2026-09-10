// Address: 00607918
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00607918(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 < 6) {
    uVar3 = 0x6c;
  }
  else if (param_4 < 10) {
    uVar3 = 0x69;
  }
  else {
    uVar3 = 0x62;
  }
  uVar2 = FUN_006071e8(0x5c,param_2,param_4,0xcccccccd,0xcccccccc,0x3ffc);
  cVar1 = FUN_006071c4(uVar2,uVar3);
  if (cVar1 == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

