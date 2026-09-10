// Address: 004ee8ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004ee8ac(short *param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 uVar6;
  undefined4 uVar3;
  undefined3 uVar5;
  uint uVar4;
  
  sVar1 = *param_1;
  uVar6 = (undefined2)((uint)param_2 >> 0x10);
  uVar3 = CONCAT22(uVar6,sVar1 + -8);
  if ((((short)(sVar1 + -8) == 0) ||
      (uVar3 = CONCAT22(uVar6,sVar1 + -0xc), (short)(sVar1 + -0xc) == 0)) ||
     (uVar3 = CONCAT22(uVar6,sVar1 + -0x2e), (short)(sVar1 + -0x2e) == 0)) {
    uVar5 = (undefined3)((uint)uVar3 >> 8);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
  }
  uVar4 = CONCAT31(uVar5,uVar2) ^ 1;
  if ((char)uVar4 == '\0') {
    *param_1 = 0;
  }
  return uVar4;
}

